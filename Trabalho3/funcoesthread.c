#include "funcoesthread.h"

void operador(int meuId, int usoCPU, int usoDisco, int passos){
  int i = 0;
  while(i < passos){
    printf("Processo %d usando a CPU\n",meuId);
    sleep(usoCPU); //simulando o uso de CPU
    printf("Processo %d entrando na fila do disco",meuId);
    disco(meuId,usoDisco);
      i++;
 }
}

void disco(int processoId, int usoDisco){
  printf("Processo %d usando o disco\n",processoId);
  sleep(usoDisco); //simulando o uso de disco
  printf("Processo %d liberando o disco\n",processoId);
}
