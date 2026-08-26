#include "IntSet.h"
#include <stdlib.h>
#include <stdio.h>
#define MAX 100
struct _int_set{
    unsigned int qty;
    int data[MAX];
};

IntSet* IntSet_create(){
    IntSet* novo = malloc(sizeof(IntSet));
    if(novo!=NULL){
        novo->qty = 0;
    } return novo;
}

bool IntSet_insert(IntSet* set, int elemento){
    if(set!=NULL && set->qty<MAX){
        //Checar se elemento esta em data
        bool estah = false;
        for(int i=0; !estah && i<set->qty; i++)
            if(set->data[i] == elemento)
                estah = true;

        if (!estah){
            set->data[set->qty++] = elemento;
            return true;        
        }
    }
    return false;
}

void IntSet_print(IntSet* set){
    if(set){
        printf("Qty: %u ", set->qty);
        putchar('{');
        for(int i=0; i<set->qty; i++)
            printf("%d, ", set->data[i]);
        printf("}\n");
    }
}