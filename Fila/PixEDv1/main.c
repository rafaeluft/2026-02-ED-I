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
    Queue* fila = Queue_create();
    unsigned int buffer_size;
    scanf("%u", &buffer_size);
    //printf("Tamanho do buffer: %u\n", buffer_size);
    DataType transacao;
    while(1){
        scanf("%d %d %f", &transacao.conta_origem, &transacao.conta_destino, &transacao.valor);
        if(transacao.conta_origem==0 || transacao.conta_destino==0)
            break;
        //Restrição caso alcance o tamanho máximo da fila!
        if(!Queue_enqueue(fila, transacao)){
            puts("Atingi o máximo da fila: ");
            return 0;
        }
        if (Queue_get_qty(fila) == buffer_size)
            clean_queue(fila);
    }
    clean_queue(fila);
    return 0;
}