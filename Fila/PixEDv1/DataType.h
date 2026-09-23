#ifndef DATA_TYPE_H
#define DATA_TYPE_H

typedef struct {
    int conta_origem, conta_destino;
    float valor;
}DataType;

void DataType_print(DataType);

#endif
