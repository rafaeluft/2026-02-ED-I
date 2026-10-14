#include "Racional.h"
#include <stdio.h>
#include <stdlib.h>
int main(){
    Racional* f1 = Racional_create(2,5);
    Racional* f2 = Racional_create(3,6);
    
    Racional_print(f1);
    Racional_print(f2);
    puts("Multiplicacao: ");
    Racional* mult = Racional_mult(f1, f2);
    Racional_print(mult);
    free(mult);
    free(f1);
    free(f2);
    return 0;
}