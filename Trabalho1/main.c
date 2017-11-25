#include <pthread.h>
#include <stdio.h>
#include "funcoesthreads.h"

int main(int argc, char const *argv[]) {
  /* code */
  int vetor[30];
  pthread_t thread1;
  pthread_t thread2;
  pthread_t thread3;

  pthread_create(&thread1, NULL, &funcao_thread1, &vetor);
  pthread_create(&thread2, NULL, &funcao_thread2, &vetor);
  pthread_create(&thread3, NULL, &funcao_thread3, &vetor);

  pthread_join (thread1, NULL);
  pthread_join (thread2, NULL);
  pthread_join (thread3, NULL);
  int i = 0;
  printf("Imprimindo Vetor\n");
  for (i = 0; i < 30; i++) {
    printf("%d ",vetor[i]);
  }
  return 0;
}
