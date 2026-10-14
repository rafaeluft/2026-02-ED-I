#include "Fila.h"
#include <stdio.h>

void print_queue(Queue* fila){
    unsigned int i;
    int temp;
    for(i=0; i<Queue_get_qty(fila); i++){
        Queue_dequeue(fila, &temp);
        printf("%d->", temp);
        Queue_enqueue(fila, temp);
    }
    putchar('\n');
}

int main(){
    Queue* fila = Queue_create();
    int V[] = {3, 5, 7, 9};
    for(int i=0; i<4; i++)
        if(!Queue_enqueue(fila, V[i]))
            printf("Não foi possível enfileirar o valor V[%d]=%d\n", i, V[i]);
    
    print_queue(fila);
    int temp;
    while(Queue_dequeue(fila, &temp))
        printf("Proximo da fila: %d\n", temp);
    return 0;
}