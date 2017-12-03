#include "pilhathreads.h"

pthread_t primeiroItem(node_t *head){
  return head->thread;
}

void adicionarInicio(node_t ** head, pthread_t thread) {
    node_t * new_node;
    new_node = malloc(sizeof(node_t));// new Node n()

    new_node->thread = thread;//n.setValor(val)
    new_node->next = *head;//n.setNext(head)
    *head = new_node;
}

void removerInicio(node_t ** head) {
    node_t * next_node = NULL;

    if (*head == NULL) {
        printf("Erro ao remover\n");
    }
    next_node = (*head)->next;
    free(*head);
    *head = next_node;
}
