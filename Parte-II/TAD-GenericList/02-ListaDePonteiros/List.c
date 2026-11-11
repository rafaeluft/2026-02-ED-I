#include "List.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct _no{
    void* info;
    struct _no *prox;
}TNo;

struct _list{
    TNo* inicio;
    void (*print)(void*);//Ponteiro para funcao print
};

List* List_create(void (*print)(void*)){
    List* nova = malloc(sizeof(List));
    if (nova!=NULL){
        nova->inicio = NULL;
        nova->print = print;
    } return nova;
}
bool List_insert_begin(List* lista, void* info){
    if(lista == NULL) 
        return false;
    TNo* novo = malloc(sizeof(TNo));
    if(novo == NULL) 
        return false;
    //Aqui o novo foi alocado
    novo->info = info;
    novo->prox = NULL;

    if (lista->inicio != NULL)
        novo->prox = lista->inicio;
    lista->inicio = novo;
    return true;
}

bool List_insert_end(List* lista, void* info){
    if(lista == NULL) 
        return false;
    TNo* novo = malloc(sizeof(TNo));
    if(novo == NULL) 
        return false;
    //Aqui o novo foi alocado
    novo->info = info;
    novo->prox = NULL;
    //O novo foi preenchido
    if(lista->inicio==NULL)
	    lista->inicio = novo;
    else{
        TNo* aux = lista->inicio;
        while(aux->prox!=NULL)
            aux = aux->prox;
        aux->prox = novo;
    }
    return true;
}

void List_print(List* lista){
    if(lista != NULL)
    {
        TNo* aux = lista->inicio;
        while(aux != NULL){
            lista->print(aux->info);
            aux = aux->prox;
        }
        putchar('\n');
    }
}
