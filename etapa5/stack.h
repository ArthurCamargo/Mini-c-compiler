// Authors
// Arthur Camargo && Joao Maieron

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
bucket* search(stack* top, symbol s);
void declare_variable(stack* st, int size_mult, type t, nature n, int line, value v, char* lexeme);
void declare_function(stack* st, int size_mult, type t, nature n, int line, value v, char* lexeme);
symbol* assign_variable(stack* st, symbol* var, symbol* value);
void assign_vector(stack* st, symbol* var, symbol* value);
void call_function(stack* st, symbol* func_name);

#endif
