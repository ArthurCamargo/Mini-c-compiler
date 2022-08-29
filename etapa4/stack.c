#include "stack.h"

symbol_table* pop(stack** s)
{
    symbol_table* table;
    if(s)
    {
        stack* temp;
        temp = *s;
        table = temp->table;
        *s = (*s)->next;
        free(temp);
    }

    return table;
}

void push(stack** s, symbol_table* table)
{
    stack* temp;
    temp = malloc(sizeof(stack));
    temp->table = table;
    temp->next = *s;
    *s = temp;
}

void push_new_table(stack** s)
{
    symbol_table* p;
    symbol_table new_table = create_table();
    p = &new_table;
    push(s, p);
}

bool declare_symbol(stack* st, int size_mult, type t, nature n, unsigned int line, value v, char* lexeme)
{
    //Declare a symbol and return the result, if true: it was successfully declared
    //else error already declared
    symbol new_symbol = create_symbol(size_mult, t, n, line, v, lexeme);
    return insert_symbol(st->table, &new_symbol);
}

int search(stack* s, char* string)
{
    stack* temp;
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

void destroy_stack(stack* s)
{
    while(s != NULL)
        pop(&s);
}

void print_stack(stack* s)
{
    int i = 0;
    while(s)
    {
        s = s->next;
        i++;
    }
    printf("%d\n", i);
}
