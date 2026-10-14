#include "pilha.h"
#define MAX 10
#include<stdlib.h>
//Primeiro passo: definir o conteudo
struct _stack{
    int data[MAX];
    unsigned int qty;
};

Stack* Stack_create(){
    Stack* novo = malloc(sizeof(Stack));
    if(novo!=NULL){
        //Toda pilha inicia vazia
        novo->qty = 0;
    } return novo;
}

bool Stack_push(Stack* pilha, int elemento){
    if(pilha!=NULL && pilha->qty < MAX){
        pilha->data[pilha->qty++] = elemento;
        return true;
    }
    return false;
}

bool Stack_pop(Stack* pilha, int* pvalor){
    if(pilha!=NULL && pilha->qty>0){
        *pvalor = pilha->data[--(pilha->qty)];
        return true;
    } return false;
}

bool Stack_head(Stack* pilha, int* pvalor){
    if(pilha!=NULL && pilha->qty>0){
        //Sem decrementar a quantidade
        //Só copiando o valor do topo
        *pvalor = pilha->data[pilha->qty-1];
        return true;
    } return false;
}

void Stack_destroy(Stack* pilha){
    free(pilha);
}   

unsigned int Stack_qty(Stack* pilha){
    if(pilha!=NULL)
        return pilha->qty;
    return 0;
}