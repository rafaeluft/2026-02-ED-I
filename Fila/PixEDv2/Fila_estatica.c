#include "Fila.h"
#include <stdlib.h>

 struct _queue {
    //Apenas positivos para quantidade e os índices
    //Variáveis de controle do estado da minha fila
    unsigned int qty, tail, head, MAX;
    //Dados..
    DataType *data;
 };
/**
 * Cria instâncias de uma fila vazia;
 * @return Queue* ponteiro com o objeto Fila ou NULL
 */
Queue* Queue_create(unsigned int max){
    Queue* nova = malloc(sizeof(Queue));
    if(nova!=NULL){
        //Configurar uma fila vazia:
        nova->qty = 0;
        nova->head = 0;
        nova->tail = 0;
        nova->MAX = max;
        nova->data = malloc(sizeof(DataType)*max);
        //Se eu nao conseguir alocar o vetor de dados
        //Tenho que desistir...
        if(nova->data == NULL){
            free(nova);
            nova = NULL;
        }
    } return nova;
}
/**
 * Tenta fazer a inserção de um elemento inteiro na fila
 * @param Queue* ponteiro para uma fila instanciada
 * @param int inteiro que se deseja inserir na fila
 * @return bool informando o sucesso da operação
 */
bool Queue_enqueue(Queue* fila, DataType valor){
    if(Queue_is_full(fila))
        return false;
    fila->data[fila->tail] = valor;
    fila->tail = (fila->tail + 1) % fila->MAX;
    fila->qty++;
    return true;
}
/**
 * Tenta fazer a remoção de um elemento inteiro na fila
 * @param Queue* ponteiro para uma fila instanciada
 * @param int* ponteiro para escrita do inteiro removido da fila
 * @return bool informando o sucesso da operação
 */
bool Queue_dequeue(Queue* fila, DataType* pvalor){
    if(Queue_is_empty(fila))
        return false;
    *pvalor = fila->data[fila->head];
    fila->head = (fila->head + 1) % fila->MAX;
    fila->qty--;
    return true;
}
/**
 * Retorna verdadeiro se a fila estiver cheia.
 */
bool Queue_is_full(Queue* fila){
    return (fila->qty == fila->MAX);
}
/**
 * Retorna verdadeiro se a fila estiver vazia.
 */
bool Queue_is_empty(Queue* fila){
    return (fila->qty == 0);
}
/**
 * Retorna a quantidade atual de elementos de uma fila.
 */
unsigned int Queue_get_qty(Queue* fila){
    return fila->qty;
}
