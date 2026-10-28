#include "List.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct _no{
    int info;
    struct _no *prox;
}TNo;

struct _list{
    TNo* inicio;
};

TSLinkedList* TSLinkedList_create(){
    TSLinkedList* nova = malloc(sizeof(TSLinkedList));
    if (nova!=NULL){
        nova->inicio = NULL;
    } return nova;
}
bool TSLinkedList_insert(TSLinkedList* list, int info){
    //Substitua a linha a seguir pela implementação
    puts("bool TSLinkedList_insert(TSLinkedList*, int); nao implementada!");
    return false;
}
void TSLinkedList_print(TSLinkedList* lista){
    if(lista != NULL)
    {
        TNo* aux = lista->inicio;
        while(aux != NULL){
            printf("(%d, %p)->", aux->info, aux->prox);
            aux = aux->prox;
        }
        putchar('\n');
    }
}
