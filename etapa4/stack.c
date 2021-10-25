#include "stack.h"

stack* create_stack()
{
    stack *s;
    s = NULL;

    return s;
}

symbol_table* pop(stack **s)
{
    symbol_table *table;
    if(s)
    {
        stack * temp;
        temp = *s;
        table = temp->table;
        *s = (*s)->next;
        free(temp);
    }

    return table;
}



void push(stack **s, symbol_table *table)
{
    stack *temp;
    temp = malloc(sizeof(stack));
    temp->table = table;
    temp->next = *s;
    *s = temp;
}

int search(stack *s, char* string)
{
    stack *temp;
    temp = s;
    while(!verify_symbol(s->table, string))
    {
        s = s->next;
    }
    if(s)
    {
        s = temp;
        return 1;
    }
    else
    {
        s = temp;
        return 0;
    }
}

void destroy_stack(stack *s)
{
    while(s != NULL)
        pop(&s);
}

void print_stack(stack *s)
{
    int i = 0;
    while(s)
    {
        s = s->next;
        printf("%d\n", i++);
    }
}
