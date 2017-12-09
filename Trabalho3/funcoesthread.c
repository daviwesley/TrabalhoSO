#include "funcoesthread.h"

void* operador(void* parametro){
  valores_t* p = (valores_t*) parametro;
  int i = 0;
  while(i < p->passos){
    printf("Processo %d usando a CPU\n",p->meuId);
    sleep(p->usoCPU); //simulando o uso de CPU
    printf("Processo %d entrando na fila do disco\n",p->meuId);
    //sem_post(&p->semaforo);
    disco(p->meuId,p->usoDisco, p->lock, p->semaforo);
    //sem_post(&p->semaforo);
    i++;
 }
 return NULL;
}

void disco(int processoId, int usoDisco,pthread_mutex_t lock, sem_t semaforo ){
  //printf("Thread ID:%d\n",(int)getpid());
  sem_wait(&semaforo);
	pthread_mutex_lock(&lock);
  printf("Processo %d usando o disco\n",processoId);
  sleep(usoDisco); //simulando o uso de disco
  pthread_mutex_unlock(&lock);
  sem_post(&semaforo);
  printf("Processo %d liberando o disco\n",processoId);

}

valores_t inserirValores(valores_t conteudo){
	printf("Insira o numero do id");
	scanf("%d",&conteudo.meuId);

	printf("Insira o valor de uso do CPU");
	scanf("%d",&conteudo.usoCPU);

	printf("Insira o valor de uso do Disco");
	scanf("%d",&conteudo.usoDisco);

	printf("Insira o numero de passos");
	scanf("%d",&conteudo.usoDisco);
  return conteudo;
}
