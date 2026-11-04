#include "CList.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct _no{
    int info;
    struct _no *prox;
}TNo;

struct _list{
    TNo* inicio;
};

List* CList_create(){
    List* nova = malloc(sizeof(List));
    if (nova!=NULL){
        nova->inicio = NULL;
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

    if(lista->inicio != NULL){
        //Como teremos um novo inicio, temos que percorrer até o último
        TNo* aux = lista->inicio;
        while(aux->prox != lista->inicio)
            aux = aux->prox;
        //aux vai parar no último nó
        aux->prox = novo;
        novo->prox = lista->inicio;    
    }
    lista->inicio = novo;
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
    if(lista->inicio == NULL)
        lista->inicio = novo;
    else{
        //Como teremos um novo inicio, temos que percorrer até o último
        TNo* aux = lista->inicio;
        while(aux->prox != lista->inicio)
            aux = aux->prox;
        //aux vai parar no último nó
        aux->prox = novo;
        novo->prox = lista->inicio;
    }
    return true;
}
bool CList_search_n_destroy(List* lista, int info){

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
void CList_print(List* lista){
    if(lista != NULL && lista->inicio != NULL)
    {
        TNo* aux = lista->inicio;
        do{
            printf("[End: %p] (%d, %p) ->\n", aux, aux->info, aux->prox);
            aux = aux->prox;
        }while(aux!=lista->inicio);
        putchar('\n');
    }
}

int CList_sim_edmundo(List* list, int m){
    while(list->inicio->prox != list->inicio){
        int current_m = m;
        TNo* aux = list->inicio;
        while(current_m-- > 1){
            aux = aux->prox;
        }
        //Excluir o aux->prox...
        TNo* to_delete = aux->prox;
        aux->prox = to_delete->prox;
        //printf("Deletando o %d\n", to_delete->info);
        free(to_delete);
        list->inicio = aux->prox;
    }
    return list->inicio->info;
}