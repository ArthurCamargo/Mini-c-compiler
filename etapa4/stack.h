#ifndef STACK
#define STACK

#include "symbol_table.h"

typedef struct stack
{
    symbol_table *table;
    struct stack *next;
}stack;



void print_stack(stack *s);
void push_new_table(stack **s);
stack *create_stack();
symbol_table *pop(stack **s);
void push(stack **s, symbol_table* table);
void destroy_stack(stack *s);
int search(stack *s, char* string);

#endif
