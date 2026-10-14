#ifndef INT_SET_H
#define INT_SET_H
#include<stdbool.h>

typedef struct _int_set IntSet;

IntSet* IntSet_create();

bool IntSet_insert(IntSet*, int);
void IntSet_print(IntSet*);

#endif