#include "List.h"
#include <stdio.h>

void print_int(void* info){
    int* pi = (int*) info;
    printf("[%d]->", *pi);
}
void print_float(void* info){
    float* pf = (float*) info;
    printf("[%0.2f]->", *pf);
}

int main(){
    List* lista = List_create(print_float);
    float V[] = {1.4, 1.6, 1.9};
    List_insert_end(lista, &V[0]);
    List_insert_end(lista, &V[1]);
    List_insert_end(lista, &V[2]);
    List_print(lista);
    //O que ocorrera? 
    V[0] = 10.5;
    List_print(lista);

    List* lista_int = List_create(print_int);
    int V_int[] = {10, 20, 30};
    List_insert_end(lista_int, &V_int[0]);
    List_insert_end(lista_int, &V_int[1]);
    List_insert_end(lista_int, &V_int[2]);
    List_print(lista_int);

    return 0;
}