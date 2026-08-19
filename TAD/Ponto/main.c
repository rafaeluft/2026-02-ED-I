#include "Ponto.h"
#include <stdio.h>

int main(){
    Ponto* p1 = Ponto_create(10, 20);
    Ponto* p2 = Ponto_create(-5, -3);
    
    Ponto_print(p1);
    putchar('\n');
    Ponto_print(p2);
    putchar('\n');
    return 0;
}