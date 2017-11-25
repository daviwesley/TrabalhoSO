#include "funcoesthreads.h"

void esperar(){
  int segundos = 1 + ( rand() % 1 );
  sleep(segundos);
}

void* funcao_thread1(void* vetor){
  //convertendo o void para um vetor de inteiros
  int* p = (int*) vetor;
  int i;
  for (i = 0; i <=30; i=i+3) {
    esperar();
    p[i] = i+1;
    printf("%d\n",i );
  }
  return NULL;
}

void* funcao_thread2(void* vetor){
  //convertendo o void para um vetor de inteiros
  int* p = (int*) vetor;
  int i =0;
  for (i = 1; i <=30; i=i+3) {
    esperar();
    p[i] = i+1;
    printf("%d\n",i );
  }
  return NULL;
}

void* funcao_thread3(void* vetor){
  //convertendo o void para um vetor de inteiros
  int* p = (int*) vetor;
  int i =0;
  for (i = 2; i <=30; i=i+3) {
    esperar();
    p[i] = i+1;
    printf("%d\n",i );
  }
  return NULL;
  }
