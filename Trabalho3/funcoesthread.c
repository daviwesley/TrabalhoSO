#include "funcoesthread.h"

void* operador(void* parametro){
  struct* param p = (struct param*) parametro;
  int i = 0;
  while(i < p->passos){
    printf("Processo %d usando a CPU\n",p->meuId);
    sleep(p->usoCPU); //simulando o uso de CPU
    printf("Processo %d entrando na fila do disco",p->meuId);
    disco(p->meuId,p->usoDisco, p->lock);
      i++;
 }
 return NULL;
}

void disco(int processoId, int usoDisco,pthread_mutex_t lock ){
  pthread_mutex_lock(&lock);
  printf("Processo %d usando o disco\n",processoId);
  sleep(usoDisco); //simulando o uso de disco
  printf("Processo %d liberando o disco\n",processoId);
  pthread_mutex_unlock(&lock);
}
