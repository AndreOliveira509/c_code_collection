#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <time.h>

#define TAMANHO 100000000 // 100 milhões de elementos
#define NUM_THREADS 4

// --- COMPARTILHAMENTO DE RECURSOS ---
// Estas variáveis são globais, logo, são compartilhadas entre todas as threads do processo.
// Todas as threads enxergam o mesmo 'vetor' e a mesma 'soma_global_threads'.
int *vetor;
long long soma_global_threads = 0;

// --- SINCRONIZAÇÃO ---
// O Mutex (Mutual Exclusion) funciona como uma "chave". Quando uma thread precisa
// alterar a variável global 'soma_global_threads', ela tranca (lock) o mutex. 
// Se outra thread tentar acessar ao mesmo tempo, ela terá que esperar.
// Isso evita a "condição de corrida" (race condition), garantindo que o valor final seja correto.
pthread_mutex_t mutex;

// Estrutura para passar os limites de processamento para cada thread
typedef struct {
    int inicio;
    int fim;
} DadosThread;

// Função executada pela abordagem de MÚLTIPLAS THREADS
void* soma_parcial(void* arg) {
    DadosThread* dados = (DadosThread*) arg;
    long long soma_local = 0;

    // Cada thread processa apenas a sua "fatia" do vetor
    for (int i = dados->inicio; i < dados->fim; i++) {
        soma_local += vetor[i];
    }

    // Sincronização na hora de juntar o resultado local na variável global
    pthread_mutex_lock(&mutex);
    soma_global_threads += soma_local;
    pthread_mutex_unlock(&mutex);

    pthread_exit(NULL);
}

// Função executada pela abordagem de ÚNICA THREAD (Sequencial)
long long soma_sequencial() {
    long long soma = 0;
    // Uma única linha de execução processa todo o vetor do início ao fim
    for (int i = 0; i < TAMANHO; i++) {
        soma += vetor[i];
    }
    return soma;
}

int main() {
    // Alocação dinâmica do vetor gigante
    vetor = (int*) malloc(TAMANHO * sizeof(int));
    if (vetor == NULL) {
        printf("Erro de alocação de memória!\n");
        return 1;
    }

    // Preenchendo o vetor com valores (usando 1 para facilitar a verificação da soma final)
    printf("Preenchendo o vetor com %d elementos...\n", TAMANHO);
    for (int i = 0; i < TAMANHO; i++) {
        vetor[i] = 1; 
    }

    struct timespec start, end;
    double tempo_sequencial, tempo_threads;

    // =========================================================================
    // EXECUÇÃO COM ÚNICA THREAD (Sequencial)
    // =========================================================================
    printf("\n--- Iniciando processamento Sequencial ---\n");
    clock_gettime(CLOCK_MONOTONIC, &start); // Marca o início do relógio
    
    long long resultado_seq = soma_sequencial();
    
    clock_gettime(CLOCK_MONOTONIC, &end);   // Marca o fim do relógio
    tempo_sequencial = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;
    
    printf("Resultado Sequencial: %lld\n", resultado_seq);
    printf("Tempo Sequencial: %f segundos\n", tempo_sequencial);

    // =========================================================================
    // EXECUÇÃO COM MÚLTIPLAS THREADS (Concorrente)
    // =========================================================================
    printf("\n--- Iniciando processamento com %d Threads ---\n", NUM_THREADS);
    pthread_t threads[NUM_THREADS];
    DadosThread dados_threads[NUM_THREADS];
    
    pthread_mutex_init(&mutex, NULL); // Inicializa a trava de sincronização

    int tamanho_por_thread = TAMANHO / NUM_THREADS;

    clock_gettime(CLOCK_MONOTONIC, &start);

    // --- CRIAÇÃO DE THREADS ---
    // O laço abaixo solicita ao Sistema Operacional a criação das threads.
    // Elas passam a executar a função 'soma_parcial' quase simultaneamente (dependendo dos núcleos da CPU).
    for (int i = 0; i < NUM_THREADS; i++) {
        dados_threads[i].inicio = i * tamanho_por_thread;
        dados_threads[i].fim = (i == NUM_THREADS - 1) ? TAMANHO : (i + 1) * tamanho_por_thread;
        
        pthread_create(&threads[i], NULL, soma_parcial, (void*) &dados_threads[i]);
    }

    // Aguarda todas as threads terminarem o seu trabalho
    for (int i = 0; i < NUM_THREADS; i++) {
        pthread_join(threads[i], NULL);
    }

    clock_gettime(CLOCK_MONOTONIC, &end);
    tempo_threads = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    printf("Resultado com Threads: %lld\n", soma_global_threads);
    printf("Tempo com Threads: %f segundos\n", tempo_threads);

    // =========================================================================
    // COMPARAÇÃO E ANÁLISE (Vantagens e Desvantagens)
    // =========================================================================
    printf("\n--- Comparacao de Resultados ---\n");
    printf("A diferenca de tempo foi de %f segundos.\n", tempo_sequencial - tempo_threads);
    
    /*
        VANTAGENS DO USO DE MÚLTIPLAS THREADS:
        1. Desempenho: Em tarefas altamente paralelizáveis (como processar partes distintas de um vetor),
           o tempo de execução diminui consideravelmente em processadores multi-core.
        2. Responsividade: Uma aplicação pode continuar respondendo ao usuário em uma thread 
           enquanto outra faz cálculos pesados em segundo plano.
        3. Economia de Recursos: Criar uma thread é mais "barato" (rápido e consome menos memória) 
           para o Sistema Operacional do que criar um processo inteiro novo.

        DESVANTAGENS DO USO DE MÚLTIPLAS THREADS:
        1. Complexidade de Código: Lidar com concorrência exige cuidado extremo. O desenvolvedor 
           precisa gerenciar a sincronização (mutex, semáforos).
        2. Condições de Corrida (Race Conditions) e Deadlocks: Bugs envolvendo threads são muito mais 
           difíceis de rastrear, testar e corrigir do que em códigos sequenciais.
        3. Overhead: Criar threads e gerenciar o Mutex consome tempo. Se a tarefa for muito simples 
           ou a quantidade de dados muito pequena, o código sequencial pode acabar sendo mais rápido.
    */

    // Liberação de memória e destruição do mutex
    pthread_mutex_destroy(&mutex);
    free(vetor);

    return 0;
}
