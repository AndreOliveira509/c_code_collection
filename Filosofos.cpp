#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

#define N 5 
#define TOTAL_COMIDA 20 // O jantar encerra quando 20 porções forem consumidas

// Mutexes para os hashis e para o controle da comida
pthread_mutex_t hashis[N];
pthread_mutex_t mutex_comida; 

int comida_restante = TOTAL_COMIDA;

void* filosofo(void* arg) {
    int id = *(int*)arg;
    int esq = id;
    int dir = (id + 1) % N;
    int porcoes_individuais = 0;

    while (1) {
        // Verifica se ainda tem comida antes de tentar agir
        pthread_mutex_lock(&mutex_comida);
        if (comida_restante <= 0) {
            pthread_mutex_unlock(&mutex_comida);
            break; // Sai do loop se a comida acabou
        }
        pthread_mutex_unlock(&mutex_comida);

        printf("Filósofo [%d] está PENSANDO...\n", id);
        usleep(500000); // Pensando por 500ms

        printf("Filósofo [%d] ficou com FOME!\n", id);

        // LÓGICA DE QUEBRA DE SIMETRIA (Sua lógica original)
        if (id % 2 == 0) {
            pthread_mutex_lock(&hashis[esq]);
            pthread_mutex_lock(&hashis[dir]);
        } else {
            pthread_mutex_lock(&hashis[dir]);
            pthread_mutex_lock(&hashis[esq]);
        }

        // Seção Crítica: Consumindo a comida
        pthread_mutex_lock(&mutex_comida);
        if (comida_restante > 0) {
            comida_restante--;
            porcoes_individuais++;
            printf("=> Filósofo [%d] está COMENDO... (Restam: %d)\n", id, comida_restante);
            pthread_mutex_unlock(&mutex_comida);
            
            sleep(1); // Simula o tempo de mastigação (1 segundo)
        } else {
            pthread_mutex_unlock(&mutex_comida);
        }

        // Liberação dos recursos
        pthread_mutex_unlock(&hashis[esq]);
        pthread_mutex_unlock(&hashis[dir]);
        
        printf("Filósofo [%d] soltou os hashis e descansou.\n", id);
    }

    printf("--- Filósofo [%d] terminou. Comeu %d vezes. ---\n", id, porcoes_individuais);
    return NULL;
}

int main() {
    pthread_t threads[N];
    int ids[N];

    // Inicialização
    pthread_mutex_init(&mutex_comida, NULL);
    for (int i = 0; i < N; i++) {
        pthread_mutex_init(&hashis[i], NULL);
    }

    // Criação das Threads
    for (int i = 0; i < N; i++) {
        ids[i] = i;
        pthread_create(&threads[i], NULL, filosofo, &ids[i]);
    }

    // Join (Aguardar a finalização)
    for (int i = 0; i < N; i++) {
        pthread_join(threads[i], NULL);
    }

    printf("\nA comida acabou! Fim do programa.\n");

    // Limpeza de memória/recursos
    pthread_mutex_destroy(&mutex_comida);
    for (int i = 0; i < N; i++) {
        pthread_mutex_destroy(&hashis[i]);
    }

    return 0;
}
