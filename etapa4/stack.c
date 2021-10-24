#include "stack.h"

stack* create_stack()
{
    stack *s;
    s = NULL;

    return s;
}

symbol_table pop(stack *s)
{
    symbol_table table;
    stack * temp;
    temp = s;
    table = temp->data;
    s = s->next;
    free(temp);

    return table;
}

void push(stack *s, symbol_table table)
{
    stack *temp;
    temp = malloc(sizeof(stack));
    temp->data = table;
    temp->next = s;
    s = temp;
}

void destroy_stack(stack *s)
{
    while(s != NULL)
        pop(s);
}
