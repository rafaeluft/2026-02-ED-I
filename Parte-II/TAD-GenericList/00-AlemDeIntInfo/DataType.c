#include "DataType.h"
#include <stdio.h>

void DT_print(DataType x){
    puts("-----------------");
    printf("ID: %d\nNome: %s\nTelefone: %s\n", x.id, x.nome,x.fone);
}
DataType DT_UI_read(){
    DataType x;
    static int id=1;
    printf("Digite seu nome e telefone:");
    scanf("%s %s", x.nome, x.fone);
    x.id = id++;
    return x;
}
