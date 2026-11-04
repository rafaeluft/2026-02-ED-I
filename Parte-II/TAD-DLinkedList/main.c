#include "DList.h"
#include <stdio.h>
int main(){
    int V[] = {1, 2, 3, 4, 5}, i;
    DList* lista = DList_create();
    for(i=0; i<5; i++){
        if (!DList_insert_end(lista, V[i]))
            printf("Erro ao inserir V[%i]=%i\n", i, V[i]);
    }
    DList_print(lista);
    puts("Fim para o inicio");
    DList_r_print(lista);
    return 0;
}