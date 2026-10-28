#include "List.h"
#include <stdio.h>
int main(){
    int V[] = {4, 2, 3, 5, 4}, i;
    TSLinkedList* lista = TSLinkedList_create();
    for(i=0; i<5; i++){
        if (!TSLinkedList_insert(lista, V[i]))
            printf("Erro ao inserir V[%i]=%i\n", i, V[i]);
    }
    //Aqui deverá imprimir a lista de maneira ordenada
    TSLinkedList_print(lista);
    return 0;
}