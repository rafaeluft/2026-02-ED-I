#include "CList.h"
#include <stdio.h>
int main(){
    int M, N, i;
    scanf("%d %d", &N, &M);
    //printf("Lidos: N: %d M:%d\n", N, M);

    List* lista = CList_create();
    for(i=1; i<=N; i++){
        if (!CList_insert_end(lista, i))
            printf("Erro ao inserir %i\n", i);
    }
    //CList_print(lista);
    printf("%d\n", CList_sim_edmundo(lista, M));
    /*
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
    */
    return 0;
}