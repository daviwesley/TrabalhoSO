#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct node {
    pthread_t thread;
    struct node * next;
} node_t;

void imprimirLista(node_t * head);
void adicionarInicio(node_t ** head, pthread_t thread);
void removerInicio(node_t ** head);
pthread_t primeiroItem(node_t *head);
