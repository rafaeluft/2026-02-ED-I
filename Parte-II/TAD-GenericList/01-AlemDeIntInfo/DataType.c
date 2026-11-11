#include "DataType.h"
#include <stdio.h>

void DT_print(DataType x){
    printf("[%d] -> ", x);
}
DataType DT_UI_read(){
    DataType x;
    printf("Digite o inteiro:");
    scanf("%d", &x);
    return x;
}
