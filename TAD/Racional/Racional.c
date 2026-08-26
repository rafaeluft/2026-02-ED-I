#include "Racional.h"
#include <stdlib.h>
#include <stdio.h>

struct _racional{
    int num, den;
};

Racional* Racional_create(int n, int d){
    
    if(d==0)// não pode ser aceito
        return NULL;

    Racional* novo = malloc(sizeof(Racional));
    if(novo != NULL){//Consegui memória!
        novo->num = n;
        novo->den = d;
    } 
    return novo;
}

void Racional_print(Racional* fracao){
    if(fracao != NULL){
        printf("%d/%d\n", fracao->num, fracao->den);
    }
}
/**
 * Uma outra possibilidade, poderia ser
 * a interface migrar para algo assim
 * bool Racional_mult(Racional* result, Racional* f1, Racinoal* f2);
 * */
Racional* Racional_mult(Racional* f1, Racional* f2){
    if(f1!=NULL && f2!=NULL){
        int num = f1->num*f2->num;
        int den = f1->den*f2->den;
        return Racional_create(num, den);
    } return NULL;
}

//TODO: Finalizar a implementação das demais funções... e seu uso na main.c