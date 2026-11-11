#include "List.h"
#include <stdio.h>

int menu(){
    int op;
    printf("1 - Inserir\n2-> Imprimir\n0 - Sair\nQual vai ser?");
    scanf("%d", &op);
    return op;
}
int main(){
    List* lista = List_create();
    int op;
    do{
        op = menu();
        switch(op){
            case 1: List_insert_end(lista, DT_UI_read());
            break;
            case 2: List_print(lista);
            break;
            case 0: puts("Bye!"); break;
            default: 
                puts("Opcao invalida.");
        }
    }while(op != 0);
    return 0;
}