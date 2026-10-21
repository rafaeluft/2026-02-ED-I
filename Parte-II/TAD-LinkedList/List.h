#ifndef LIST_H
#define LIST_H
#include<stdbool.h>

typedef struct _list List;

List* List_create();
bool List_insert_begin(List*, int);
/**
 * TODO: Fazer a implementação da seguinte função.
 * Faz a inserção no final da lista.
 * @param List* ponteiro para uma lista 
 * @param int inteiro que se deseja adicionar na lista
 * @return bool informando do sucesso da operação
 */
bool List_insert_end(List*, int);
/**
 * TODO: Fazer a implementação da seguinte função.
 * Busca por um nó com a informação igual ao parâmetro. 
 * Caso encontre, exclui (e libera a memória) do nó, 
 * mantendo a lista funcionando corretamente.
 * @param List* ponteiro para uma lista 
 * @param int inteiro que se deseja remover da lista
 * @return bool informando do sucesso da operação
 */
bool List_search_n_destroy(List*, int);
void List_print(List*);

#endif