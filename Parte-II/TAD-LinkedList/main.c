#include "List.h"
#include <stdio.h>
int main(){
    int V[] = {1, 2, 3, 4, 5}, i;
    List* lista = List_create();
    for(i=0; i<5; i++){
        if (!List_insert_end(lista, V[i]))
            printf("Erro ao inserir V[%i]=%i\n", i, V[i]);
    }
    List_print(lista);
    puts("Deletando o 4");
    if(!List_search_n_destroy(lista, 4))
        puts("Nao encontrei o 4");
    List_print(lista);
    puts("Deletando o 1");
    if(!List_search_n_destroy(lista, 1))
        puts("Nao encontrei o 1");
    List_print(lista);
    puts("Deletando o 50");
    if(!List_search_n_destroy(lista, 50))
        puts("Nao encontrei o 50");
    List_print(lista);
    return 0;
}