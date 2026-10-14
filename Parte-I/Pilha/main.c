#include "pilha.h"
#include <stdio.h>

int main(){
    //Exemplo de uso da pilha
    Stack* piula = Stack_create();
    Stack_push(piula, 1);
    Stack_push(piula, 2);
    Stack_push(piula, 3);

    int temp;
    Stack_head(piula, &temp);
    printf("O elemento do topo atual é: %d\n", temp);
    //Aqui remove os elementos
    while(Stack_pop(piula, &temp))
        printf("Valor removido: %d, Qtde atual na pilha: %u\n", temp, Stack_qty(piula));
    
    Stack_destroy(piula);
    return 0;
}