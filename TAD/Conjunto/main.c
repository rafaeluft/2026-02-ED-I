#include "IntSet.h"
int main(){
    IntSet* Z = IntSet_create();
    IntSet_print(Z);
    
    IntSet_insert(Z, 1);
    IntSet_insert(Z, 4);
    IntSet_insert(Z, 5);
    IntSet_print(Z);
    
    IntSet_insert(Z, 5);
    IntSet_insert(Z, 6);
    IntSet_print(Z);
    return 0;
}