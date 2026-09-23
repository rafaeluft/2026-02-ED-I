#include "pilha.h"
#include <stdio.h>
#include <string.h>

void ex_1_inverter(){
    Stack* pilha = Stack_create();
    char frase[1024];
    fgets(frase, 1024, stdin);
    int temp;
    for(int i=0; i<strlen(frase); i++)
    {
        char current = frase[i];
        if (current == ' ' || current == '.'){
            while(Stack_pop(pilha, &temp))
                putchar(temp);
            putchar(' ');
        }
        else
            Stack_push(pilha, current);
    }
}
int main(){
    ex_1_inverter();
    return 0;
}