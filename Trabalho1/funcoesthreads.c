#include "funcoesthreads.h"

void* funcao_thread1(void* vetor){
  int* p = (int*) vetor;
  int i;
  for (i = 0; i <=30; i=i+3) {
    /* code */
    //printf("%d\n",i );
    p[i] = i+1;
  }
  return NULL;
}

void* funcao_thread2(void* vetor){
  int* p = (int*) vetor;
  int i =0;
  for (i = 1; i <=30; i=i+3) {
    /* code */
    //printf("%d\n",i );
    p[i] = i+1;
  }
  return NULL;
}

void* funcao_thread3(void* vetor){
  int* p = (int*) vetor;
  int i =0;
  for (i = 2; i <=30; i=i+3) {
    /* code */
    //printf("%d\n",i );
    p[i] = i+1;
  }
  return NULL;
  }
