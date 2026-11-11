#include "DList.h"
#include <stdio.h>
#include <string.h>
/**
 * Tenta converter um caractere em seu valor inteiro
 * correspondente. Ex char2int('1', &valor); retornará true 
 * e o inteiro valor será atribuido o valor inteiro 1;
 * @return bool
 * @param char 
 * @param int* Ponteiro para um inteiro para ser escrita a resposta
 */
bool char2int(char c, int *p){
    *p = c - '0';
    if(*p>=0 && *p <=9)
        return true;
    return false;
}

DList* string2DList(char *buffer){
    DList* lista = DList_create();
    int temp;
    unsigned long i;
    for(i =0; i<strlen(buffer); i++)
        if(char2int(buffer[i], &temp)){
            //Inserir temp na lista
            if(!DList_insert_end(lista, temp))
                printf("Nao foi possivel inserir %d na lista \n", temp);
        }
    return lista;
}

int main(){
    char buffer[4096], i;
    fgets(buffer, 4096, stdin);
    DList* n1 = string2DList(buffer);
    DList_print(n1);
    fgets(buffer, 4096, stdin);
    DList* n2 = string2DList(buffer);
    DList_print(n2);
    DList* soma = DList_soma(n1, n2);
    DList_print(soma);
    return 0;
    /*
    DList* lista = DList_create();
    for(i=0; i<5; i++){
        if (!DList_insert_end(lista, V[i]))
            printf("Erro ao inserir V[%i]=%i\n", i, V[i]);
    }
    DList_print(lista);
    puts("Fim para o inicio");
    DList_r_print(lista);
    return 0;
    */
}