#ifndef DATATYPE_H
#define DATATYPE_H

typedef struct {
    int id;
    char fone[16];
    char nome[128];
}DataType;

void DT_print(DataType);
DataType DT_UI_read();

#endif