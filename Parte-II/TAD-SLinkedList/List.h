#ifndef SLIST_H
#define SLIST_H
#include<stdbool.h>

typedef struct _list TSLinkedList;

TSLinkedList* TSLinkedList_create();
/**
 * TODO: Fazer a implementação da seguinte função.
 * Faz a inserção ordenadamente crescente.
 * @param TSLinkedList* ponteiro para uma lista 
 * @param int inteiro que se deseja adicionar na lista
 * @return bool informando do sucesso da operação
 */
bool TSLinkedList_insert(TSLinkedList*, int);
/**
 * Percorre a lista imprimindo o campo informação
 */
void TSLinkedList_print(TSLinkedList*);

#endif