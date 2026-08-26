#include "Ponto.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct _ponto{
    float x, y;
};
/**
 * Cria instâncias de ponto.
 * @param float x
 * @param float y
 * @return Ponto* instância para um ponto preenchido ou NULL
 */
Ponto* Ponto_create(float x, float y){
    Ponto* novo = malloc(sizeof(Ponto));
    if(novo!=NULL){//conseguimos memória
        novo->x = x;
        novo->y = y;
    }
    return novo;
}
/**
 * Imprime um ponto formatado com até duas casas.
 * @param Ponto* instância válida para um ponto
 */
void Ponto_print(Ponto* ponto){
    if(ponto != NULL){
        printf("(%0.2f,%0.2f)", ponto->x, ponto->y);
    }
}

void Ponto_delete(Ponto* ponto){
    free(ponto);
}

float Ponto_dist_eucl(Ponto* p1, Ponto* p2){
    float dx = p2->x - p1->x;
    float dy = p2->y - p1->y;
    return sqrtf(dx*dx + dy*dy);
}

void Ponto_get_x(Ponto* ponto, float* p_x){
    if(ponto != NULL)
        *p_x = ponto->x;
}
void Ponto_set_x(Ponto* ponto, float x){
    if(ponto != NULL){
        ponto->x = x;
    }
}