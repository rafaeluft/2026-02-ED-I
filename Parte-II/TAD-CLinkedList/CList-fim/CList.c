#include "CList.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct _no{
    int info;
    struct _no *prox;
}TNo;

struct _list{
    TNo* fim;
};

List* CList_create(){
    List* nova = malloc(sizeof(List));
    if (nova!=NULL){
        nova->fim = NULL;
    } return nova;
}
bool CList_insert_begin(List* lista, int info){
    if(lista == NULL) 
        return false;
    TNo* novo = malloc(sizeof(TNo));
    if(novo == NULL) 
        return false;
    //Aqui o novo foi alocado
    novo->info = info;
    novo->prox = novo;//Mudança para circular

    if(lista->fim == NULL)
        lista->fim = novo;
    else{
        novo->prox = lista->fim->prox;
        lista->fim->prox = novo;
    }
    return true;
}

bool CList_insert_end(List* lista, int info){
    if(lista == NULL) 
        return false;
    TNo* novo = malloc(sizeof(TNo));
    if(novo == NULL) 
        return false;
    //Aqui o novo foi alocado
    novo->info = info;
    novo->prox = novo;//Mudança para circular    

    if(lista->fim != NULL){
        novo->prox = lista->fim->prox;
        lista->fim->prox = novo;
   }
    lista->fim = novo;

    return true;
}
bool CList_search_n_destroy(List* lista, int info){
    return false;
}
void CList_print(List* lista){
    if(lista != NULL && lista->fim != NULL)
    {
        TNo* aux = lista->fim->prox;
        do{
            printf("[End: %p] (%d, %p) ->\n", aux, aux->info, aux->prox);
            aux = aux->prox;
        }while(aux!=lista->fim->prox);
        putchar('\n');
    }
}
