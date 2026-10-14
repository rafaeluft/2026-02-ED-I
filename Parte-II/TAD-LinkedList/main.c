#include "List.h"
#include <stdio.h>
int main(){
    int V[] = {1, 2, 3, 4, 5}, i;
    List* lista = List_create();
    for(i=0; i<5; i++){
        if (!List_insert_begin(lista, V[i]))
            printf("Erro ao inserir V[%i]=%i\n", i, V[i]);
    }
    List_print(lista);
    return 0;
}