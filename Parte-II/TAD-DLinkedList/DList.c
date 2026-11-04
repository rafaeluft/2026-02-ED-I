#include "DList.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct _no{
    int info;
    struct _no *prox, *ant;
}TNo;

struct _list{
    TNo* inicio, *fim;
};

DList* DList_create(){
    DList* nova = malloc(sizeof(DList));
    if (nova!=NULL){
        nova->inicio = NULL;
        nova->fim = NULL;
    } return nova;
}
bool DList_insert_begin(DList* lista, int info){
    if(lista == NULL) 
        return false;
    TNo* novo = malloc(sizeof(TNo));
    if(novo == NULL) 
        return false;
    //Aqui o novo foi alocado
    novo->info = info;
    novo->prox = NULL;
    novo->ant = NULL;

    if (lista->inicio != NULL){
        novo->prox = lista->inicio;
        lista->inicio->ant = novo;
    }
    lista->inicio = novo;
    if(lista->fim == NULL)
        lista->fim = novo;
    return true;
}

bool DList_insert_end(DList* lista, int info){
    if(lista == NULL) 
        return false;
    TNo* novo = malloc(sizeof(TNo));
    if(novo == NULL) 
        return false;
    //Aqui o novo foi alocado
    novo->info = info;
    novo->prox = NULL;
    novo->ant = NULL;
    //O novo foi preenchido
    if(lista->inicio==NULL)
	    lista->inicio = novo;
    else{
        lista->fim->prox = novo;
        novo->ant = lista->fim;
    }
    lista->fim = novo;
    return true;
}

void DList_print(DList* lista){
    if(lista != NULL)
    {
        TNo* aux = lista->inicio;
        while(aux != NULL){
            printf("[%d]-> ", aux->info);
            aux = aux->prox;
        }
        putchar('\n');
    }
}
void DList_r_print(DList* lista){
    if(lista != NULL)
    {
        TNo* aux = lista->fim;
        while(aux != NULL){
            printf("[%d]-> ", aux->info);
            aux = aux->ant;
        }
        putchar('\n');
    }
}
