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
    if(list==NULL) return false;
    TNo* novo = malloc(sizeof(TNo));
    if(novo == NULL) return false;
    
    novo->info = info;
    
    if(list->inicio == NULL || info <= list->inicio->info){
        novo->prox = list->inicio;
        list->inicio = novo;
    }
    else{
        TNo* ant = list->inicio;
        while(ant->prox!=NULL && ant->prox->info < info)
            ant = ant->prox;
        novo->prox = ant->prox;
        ant->prox = novo;
    }
    return true;
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
