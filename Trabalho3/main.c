#include <stdio.h>
#include <semaphore.h>
#include "pilhathreads.h"
#include "funcoesthread.h"


pthread_mutex_t lock ;//= PTHREAD_MUTEX_INITIALIZER;//cria um mutex
sem_t semaforo;

int main(int argc, char const *argv[]) {
  if(sem_init(&semaforo,0,1)){//valor inicial do semaforo começa por 1
    printf("Erro ao iniciar o semaforo\n");
  }
  if(pthread_mutex_init(&lock, NULL)){
    printf("Erro ao iniciar o mutex\n");
  }
	pthread_t threads[2];
  node_t ** no = NULL;
  valores_t p[3];//int meuId, int usoCPU, int usoDisco, int passos
  inserirValores(p[2]);
  p[0].meuId = 1;
  p[0].usoCPU = 2;
  p[0].usoDisco = 4;
  p[0].passos = 2;
  p[0].lock = lock;//mutex
	p[0].semaforo = semaforo;

	p[1].meuId = 2;
  p[1].usoCPU = 1;
  p[1].usoDisco = 4;
  p[1].passos = 2;
  p[1].lock = lock;//mutex
	p[1].semaforo = semaforo;

  no = malloc(sizeof(node_t));//aloca a memoria para o struct
  if (no == NULL) {
    printf("Erro ao criar a pilha\n");
    return 1;
  }

  int i;
  for(i = 0; i < 2; i++){//adiciona as threads na lista
    adicionarInicio(no, threads[i]);
  }
  printf("Lista criada\n");
  for(i = 0; i < 2; i++){//inicia as funcoes das threads
    if(pthread_create(&(threads[i]), NULL, &operador, &p[i])){
      printf("Erro ao inicializar a thread\n");
    }
    //printf("Thread ID:%d\n",(int)getpid());
  }
	for(i =0; i < 2; i++){
		if(pthread_join(threads[i], NULL)){
      printf("Erro ao sincronizar a thread\n");
    }
	}
  if(sem_destroy(&semaforo)){
    printf("Erro ao destruir o semaforo\n");
  }
  return 0;
}
