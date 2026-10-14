#ifndef LIST_H
#define LIST_H
#include<stdbool.h>

typedef struct _list List;

List* List_create();
bool List_insert_begin(List*, int);
void List_print(List*);

#endif