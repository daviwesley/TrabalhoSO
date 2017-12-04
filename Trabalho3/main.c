#include <stdio.h>
#include "pilhathreads.h"
#include "funcoesthread.h"

pthread_mutex_t lock;//cria um mutex

int main(int argc, char const *argv[]) {
  pthread_t threads[5];
  node_t ** no = NULL;
  struct param p;//int meuId, int usoCPU, int usoDisco, int passos
  p.meuId = 23;
  p.usoCPU = 2;
  p.usoDisco = 3;
  p.passos = 7;
  p.lock = lock;//mutex

  no = malloc(sizeof(node_t));//aloca a memoria para o struct
  if (no == NULL) {
    printf("Erro ao criar a pilha\n");
    return 1;
  }

  if (pthread_mutex_init(&lock, NULL) != 0)//inicia a estrutura do mutex
   {
       printf("\n Mutex falhou\n");
       return 1;
   }

  int i;
  for(i = 0; i < 5; i++){//adiciona as threads na lista
    adicionarInicio(no, threads[i]);
  }
  printf("Lista criada\n");
  for(i = 0; i < 5; i++){//inicia as funcoes das threads
    pthread_create(&(threads[i]), NULL, &operador, &param);
  }

  return 0;
}
