#include "DataType.h"
#include <stdio.h>

void DataType_print(DataType transacao){
    printf("(%d, %d, %0.2f),", transacao.conta_origem, 
        transacao.conta_destino, transacao.valor);
}