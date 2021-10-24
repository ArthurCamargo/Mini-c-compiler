#ifndef STACK
#define STACK

#include "symbol_table.h"

typedef struct stack
{
    symbol_table data;
    struct stack *next;
}stack;


stack *create_stack();
symbol_table pop(stack *s);
void push(stack *s, symbol_table table);
void destroy_stack(stack *s);

#endif
