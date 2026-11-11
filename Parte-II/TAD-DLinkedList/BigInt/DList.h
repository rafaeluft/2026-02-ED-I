#ifndef D_LIST_H
#define D_LIST_H
#include<stdbool.h>
/*
Lista duplamente encadeada 
*/
typedef struct _list DList;

DList* DList_create();
bool DList_insert_begin(DList*, int);
/**
 * TODO: Fazer a implementação da seguinte função.
 * Faz a inserção no final da lista.
 * @param List* ponteiro para uma lista 
 * @param int inteiro que se deseja adicionar na lista
 * @return bool informando do sucesso da operação
 */
bool DList_insert_end(DList*, int);
/**
 * TODO: Fazer a implementação da seguinte função.
 * Busca por um nó com a informação igual ao parâmetro. 
 * Caso encontre, exclui (e libera a memória) do nó, 
 * mantendo a lista funcionando corretamente.
 * @param List* ponteiro para uma lista 
 * @param int inteiro que se deseja remover da lista
 * @return bool informando do sucesso da operação
 */
bool DList_search_n_destroy(DList*, int);
void DList_print(DList*);
//Reverse print imprime a lista do fim para o início
void DList_r_print(DList*);
/**
 * Soma duas listas criando uma terceira lista como resultado
 * @param DList* Primeira lista de inteiros
 * @param DList* Segunda lista de inteiros
 * @return DList* a lista contendo o resultado da soma
 */
DList* DList_soma(DList*, DList*);

#endif