#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void operador(void* param);
void disco(int processoId, int usoDisco, pthread_mutex_t lock);

struct param{
  int meuId;
  int usoCPU;
  int usoDisco;
  int passos;
  pthread_mutex_t lock;
}
