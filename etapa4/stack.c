#include "stack.h"
#include "errors.h"

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
    symbol_table *new_table = create_table();
    push(s, new_table);
}

void declare_variable(stack* st, int size_mult, type t, nature n, int line, value v, char* lexeme)
{
    symbol s = create_symbol(size_mult, t, n, line, v, lexeme);
    if(insert_symbol(st->table, s))
    {
        return;
    }
    else
    {
        printf("'%s' already declared, line %d\n", v.vs, line);
        exit(ERR_DECLARED);
    }
}

void assign_variable(stack* st, symbol* ps, )
{
	bucket* current_bucket = search(st, ps);
	if(current_bucket)
	{
		current_bucket->data.
	}
}

bucket* search(stack* top, symbol s)
{
    stack* temp;
	bucket* current_bucket;
    temp = top;
    
	while(1)
    {
        if(top)
        {
			current_bucket = search_symbol_in_table(top->table, s);
			if(current_bucket)
			{
				printf("Achei\n");
				return current_bucket;
			}
			top = top->next;
        }
        else
        {
			printf("Nao achei\n");
            top = temp;
            return NULL;
        }
    }
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
