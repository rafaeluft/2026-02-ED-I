#include "Fila.h"
#include <stdio.h>
#include "DataType.h"

void clean_queue(Queue* fila){
    if(!Queue_is_empty(fila)){
        DataType temp;
        while(Queue_dequeue(fila, &temp))
            DataType_print(temp);
        putchar('\n');
    }
}

int main(){
    
    unsigned int buffer_size;
    scanf("%u", &buffer_size);
    Queue* fila = Queue_create(buffer_size);
    if(fila == NULL){
        printf("ERRO: Nao consegui criar a fila\n");
        return -1;
    }
    //printf("Tamanho do buffer: %u\n", buffer_size);
    DataType transacao;
    while(1){
        scanf("%d %d %f", &transacao.conta_origem, &transacao.conta_destino, &transacao.valor);
        if(transacao.conta_origem==0 || transacao.conta_destino==0)
            break;
        if(Queue_enqueue(fila, transacao))
            continue;
        else{
            clean_queue(fila);
            Queue_enqueue(fila, transacao);
        }
    }
    clean_queue(fila);
    return 0;
}