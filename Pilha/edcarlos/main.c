#include<stdio.h>
#include "../pilha.h"
#include <stdbool.h>

void estacionar(Stack* principal, int placa){
    if(!Stack_push(principal, placa))
        puts("overflow");
}

void remover(Stack* principal, Stack* auxiliar, int placa){
    //Passo 1: procuro o carro
    int placa_estacionado;
    bool found = false;
    while(Stack_pop(principal, &placa_estacionado))
    {
        printf("%d,", placa_estacionado);
        if(placa_estacionado==placa){
            found = true;
            break;
        }
            
        Stack_push(auxiliar, placa_estacionado);
    }
    if(!found)
        printf("underflow");
    putchar('\n');
    while(Stack_pop(auxiliar, &placa_estacionado))
        Stack_push(principal, placa_estacionado);
}

int main(){
    char op; int placa;
    Stack* principal = Stack_create();
    Stack* auxiliar = Stack_create();

    do{
        if(scanf("%c %d\n", &op, &placa)<2 || op=='0')
            break;
        
        switch(op){
            case 'i': 
                estacionar(principal, placa);
                break;
            case 'r': 
                remover(principal, auxiliar, placa);
                break;
        }
        //printf("Lido: %c %d\n", op, placa);
        
    }while(1);
    //puts("Até outra hora!");
    return 0;
}