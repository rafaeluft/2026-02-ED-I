#include "pilha.h"
#include <stdio.h>

int main(){
    //Exemplo de uso da pilha
    Stack* piula = Stack_create();
    Stack_push(piula, 1);
    Stack_push(piula, 2);
    Stack_push(piula, 3);

    int temp;
    while(Stack_pop(piula, &temp))
        printf("%d\n", temp);

    return 0;
}