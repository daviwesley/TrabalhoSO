#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>

typedef struct param{
  int meuId;
  int usoCPU;
  int usoDisco;
  int passos;
  pthread_mutex_t lock;
	sem_t semaforo;
}valores_t;

void* operador(void* param);
void disco(int processoId, int usoDisco, pthread_mutex_t lock, sem_t semaforo);
valores_t inserirValores(valores_t conteudo);
