#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

#define N 5

pthread_mutex_t garfo[N];  // cada garfo é um mutex

void pensar(int id) {
    printf("Filósofo %d está pensando...\n", id);
    sleep(1);
}

void comer(int id) {
    printf("Filósofo %d está comendo!\n", id);
    sleep(1);
}

void pegar_garfos(int id) {
    int esquerda = id;
    int direita  = (id + 1) % N;

    /*
     * A lógica central: F0 pega na ordem INVERTIDA.
     * Isso quebra a simetria que causaria o deadlock.
     *
     * Com todos iguais (esq ? dir), poderíamos ter:
     *   F0 segura G0, espera G1
     *   F1 segura G1, espera G2
     *   ...
     *   F4 segura G4, espera G0  ? ciclo fechado = deadlock
     *
     * Com F0 invertido (dir ? esq):
     *   F0 tenta G1 primeiro. Se F1 já tem G1, F0 bloqueia
     *   logo de cara, sem segurar G0. Então F4 pode pegar G0
     *   e comer. O ciclo nunca se fecha.
     */
    if (id == 0) {
        pthread_mutex_lock(&garfo[direita]);   // pega direita primeiro
        pthread_mutex_lock(&garfo[esquerda]);
    } else {
        pthread_mutex_lock(&garfo[esquerda]);  // ordem normal
        pthread_mutex_lock(&garfo[direita]);
    }
}

void largar_garfos(int id) {
    int esquerda = id;
    int direita  = (id + 1) % N;
    pthread_mutex_unlock(&garfo[esquerda]);
    pthread_mutex_unlock(&garfo[direita]);
}

void *filosofo(void *arg) {
    int id = *(int *)arg;
    while (1) {
        pensar(id);
        pegar_garfos(id);
        comer(id);
        largar_garfos(id);
    }
    return NULL;
}

int main() {
    pthread_t threads[N];
    int ids[N];

    for (int i = 0; i < N; i++)
        pthread_mutex_init(&garfo[i], NULL);

    for (int i = 0; i < N; i++) {
        ids[i] = i;
        pthread_create(&threads[i], NULL, filosofo, &ids[i]);
    }

    for (int i = 0; i < N; i++)
        pthread_join(threads[i], NULL);

    return 0;
}
