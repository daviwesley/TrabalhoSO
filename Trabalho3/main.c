#include <stdio.h>
#include "pilhathreads.h"
#include "funcoesthread.h"

int main(int argc, char const *argv[]) {
  pthread_t threads[5];
  node_t ** no = NULL;
  no = malloc(sizeof(node_t));
  if (no == NULL) {
    printf("Erro ao criar a pilha\n");
    return 1;
  }
  adicionarInicio(no, threads[0]);
  adicionarInicio(no, threads[1]);
  adicionarInicio(no, threads[2]);
  adicionarInicio(no, threads[3]);
  adicionarInicio(no, threads[4]);
  adicionarInicio(no, threads[5]);
  printf("Lista criada\n");
  return 0;
}
