#include "stack.h"

stack* create_stack()
{
    stack *s;
    s = NULL;

    return s;
}

symbol_table* pop(stack **s)
{
    symbol_table* table;
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
    bool verifing = true;
    while(verifing)
    {
        if(s)
        {
            key_object key;
            key.key_string = string;
            key.size = strlen(string);
            key.hash_value = hash_string(string, strlen(string));
            verifing = find_symbol_in_table(s->table->buckets, s->table->capacity, &key);
            s = s->next;
        }
        else
        {
            verifing = false;
            s = temp;
            return 0;
        }
    }
    s = temp;
    return 1;
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
