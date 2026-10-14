#ifndef FILA_H
#define FILA_H
#include <stdbool.h>
#include "DataType.h"

typedef struct _queue Queue;
/**
 * Cria instâncias de uma fila vazia;
 * @param unsigned int tamanho desejado para o vetor de dados
 * @return Queue* ponteiro com o objeto Fila ou NULL
 */
Queue* Queue_create(unsigned int);
/**
 * Tenta fazer a inserção de um elemento inteiro na fila
 * @param Queue* ponteiro para uma fila instanciada
 * @param int inteiro que se deseja inserir na fila
 * @return bool informando o sucesso da operação
 */
bool Queue_enqueue(Queue*, DataType);
/**
 * Tenta fazer a remoção de um elemento inteiro na fila
 * @param Queue* ponteiro para uma fila instanciada
 * @param int* ponteiro para escrita do inteiro removido da fila
 * @return bool informando o sucesso da operação
 */
bool Queue_dequeue(Queue*, DataType*);
/**
 * Retorna verdadeiro se a fila estiver cheia.
 */
bool Queue_is_full(Queue*);
/**
 * Retorna verdadeiro se a fila estiver vazia.
 */
bool Queue_is_empty(Queue*);
/**
 * Retorna a quantidade atual de elementos de uma fila.
 */
unsigned int Queue_get_qty(Queue*);

#endif