#ifndef PILHA_H
#define PILHA_H
#include <stdbool.h>

typedef struct _stack Stack;
/**
 * Tenta instanciar uma nova pilha.
 * @return Stack* ponteiro para a nova pilha
 */
Stack* Stack_create();
/**
 * Tenta inserir um elemento inteiro na pilha
 * @return bool informando o sucesso da operação
 * @param Stack* instância da pilha
 * @param int valor que se deseja adicionar na pilha
 */
bool Stack_push(Stack*, int);
/**
 * Tenta remover um elemento da pilha.
 * @param Stack* ponteiro para a instância da pilha
 * @param int* ponteiro para a variável inteira que receberá o valor removido da pilha
 * @return bool informando o sucesso da operação
 */
bool Stack_pop(Stack*, int*);

/**
 * Tenta copiar o valor do elemento do topo (sem remover da pilha)
 * @param Stack* ponteiro para a instância da pilha
 * @param int* ponteiro para a variável inteira que receberá o valor do elemento que está no topo da pilha
 * @return bool informando o sucesso da operação
 */
bool Stack_head(Stack*, int*);
/**
 * Faz a desalocação dos recursos de memória.
 * @param Stack* ponteiro para a instância da pilha
 */
void Stack_destroy(Stack*);
/**
 * Retorna a quantidade de elementos de uma stack.
 * OBS: Stacks nullas a resposta será 0;
 * @param Stack* instância da pilha
 * @return unsigned int Com a quantidade de elementos atualmente na pilha.
 */
unsigned int Stack_qty(Stack*);
#endif