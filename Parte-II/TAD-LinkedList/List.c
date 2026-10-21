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

List* List_create(){
    List* nova = malloc(sizeof(List));
    if (nova!=NULL){
        nova->inicio = NULL;
    } return nova;
}
bool List_insert_begin(List* lista, int info){
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

bool List_insert_end(List* lista, int info){
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
bool List_search_n_destroy(List* lista, int info){

    TNo* x;
    if (info == lista->inicio->info)
    {
        x = lista->inicio;
        lista->inicio = x->prox;
    }
    else{
        TNo* y=lista->inicio;
        x = lista->inicio->prox;
        while(x!=NULL && x->info!=info){
            y = x;
            x = x->prox;
        }
        //1: x se tornou NULL
        if(x==NULL) return false; //nao encontrei
        //2: x->info é info que procuro
        y->prox = x->prox;
    }
    //x deve ser excluído
    free(x);
    return true;
}
void List_print(List* lista){
    if(lista != NULL)
    {
        TNo* aux = lista->inicio;
        while(aux != NULL){
            printf("[End: %p] (%d, %p) ->\n", aux, aux->info, aux->prox);
            aux = aux->prox;
        }
        putchar('\n');
    }
}
