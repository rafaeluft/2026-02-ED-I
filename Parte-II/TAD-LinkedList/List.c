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
