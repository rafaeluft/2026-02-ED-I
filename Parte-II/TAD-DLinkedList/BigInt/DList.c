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
            printf("%d", aux->info);
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
            printf("%d", aux->info);
            aux = aux->ant;
        }
        putchar('\n');
    }
}
/*
* OBS: O Código a seguir tem propósito didático e não representa
* o código mais otimizado.
*/
DList* DList_soma(DList* n1, DList* n2){
    DList* soma_list = DList_create();
    TNo* aux_n1 = n1->fim;
    TNo* aux_n2 = n2->fim;
    int soma, carry=0;
    //vai somar na interseção de posições
    while(aux_n1!=NULL && aux_n2 != NULL){
        soma = carry + aux_n1->info + aux_n2->info;
        DList_insert_begin(soma_list, soma % 10);
        carry = soma/10;
        aux_n1 = aux_n1->ant;
        aux_n2 = aux_n2->ant;
    }
    //Se os números tem tamanhos iguais porém sobrou o último carry
    if(aux_n1 == NULL && aux_n2 == NULL && carry)
        DList_insert_begin(soma_list, carry);
    else{
        //Se o primeiro número tiver mais dígitos do que o segundo
        while(aux_n1!=NULL){
            soma = carry + aux_n1->info;
            DList_insert_begin(soma_list, soma % 10);
            carry = soma/10;
            aux_n1 = aux_n1->ant;
        }
        //Se o segundo número tiver mais dígitos do que o primeiro
        while(aux_n2!=NULL){
            soma = carry + aux_n2->info;
            DList_insert_begin(soma_list, soma % 10);
            carry = soma/10;
            aux_n2 = aux_n2->ant;
        }
    }
    return soma_list;
}