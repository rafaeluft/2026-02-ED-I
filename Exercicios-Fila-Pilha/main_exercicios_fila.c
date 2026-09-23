#include "Fila.h"
#include "pilha.h"
#include <stdio.h>
/**
 * Implemente a função reverso, que reposiciona os elementos na fila de tal forma que o início
da fila torna-se o fim, e vice-versa.
 */
void Fila_ex_1(Queue* fila){
    Stack* pilha  = Stack_create();
    int temp;
    while(Queue_dequeue(fila, &temp))
        Stack_push(pilha, temp);
    while(Stack_pop(pilha, &temp))
        Queue_enqueue(fila, temp);
    Stack_destroy(pilha);
}
/**
 * Ex. 5 Implemente uma função que imprima os elementos de uma fila. Após a impressão a fila
passada como parâmetro deverá permanecer do jeito que foi passado.
 */
void Fila_ex_4(Queue* fila){
    unsigned int i;
    int temp;
    for(i=0; i<Queue_get_qty(fila); i++){
        Queue_dequeue(fila, &temp);
        printf("%d->", temp);
        Queue_enqueue(fila, temp);
    }
    putchar('\n');
}

int main(){
    Queue* fila = Queue_create();
    int V[] = {3, 5, 7, 9};
    for(int i=0; i<4; i++)
        if(!Queue_enqueue(fila, V[i]))
            printf("Não foi possível enfileirar o valor V[%d]=%d\n", i, V[i]);
    //Imprime a fila
    puts("Contedudo da Fila: Ex 4:");
    Fila_ex_4(fila);
    //Devera inverter os elementos da fila
    Fila_ex_1(fila);
    puts("Fila Invertida:");
    Fila_ex_4(fila);
    int temp;
    while(Queue_dequeue(fila, &temp))
        printf("Proximo da fila: %d\n", temp);
    return 0;
}