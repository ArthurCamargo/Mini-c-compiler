// Authors
// Arthur Camargo && Joao Maieron

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
    temp->is_global = false;
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

    //Check vector of string
    if(t == TYPE_STRING && n == TYPE_VEC)
    {
        printf("'%s' is of type string and is being declared as a Vector at line %d\n", lexeme, line);
        exit(ERR_STRING_VECTOR);
    }

    symbol s = create_symbol(size_mult, t, n, line, v, lexeme);
    if(s.nat == TYPE_GLOBAL_VAR)
    {
        s.address = st->table->offset;
        st->table->offset += s.size; // Increases the offset
    }
    else if (s.nat == TYPE_VAR)
    {
        s.address = st->table->offset;
        st->table->offset += s.size; // Increases the offset
    }

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

void declare_function(stack* st, int size_mult, type t, nature n, int line, value v, char* lexeme)
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

symbol* find_variable(stack* st, symbol* var)
{
	bucket* current_bucket = search(st, *var);
	if(current_bucket)
	{
	} else {
        printf("Variable '%s' not declared at line %d", var->lexeme, var->location);
        exit(ERR_UNDECLARED);
    }

    symbol* symbol_in_table = current_bucket->data;

    return symbol_in_table;
}


symbol* assign_variable(stack* st, symbol* var, symbol* value)
{
	bucket* current_bucket = search(st, *var);
	if(current_bucket)
	{
	   current_bucket->data->literal_value = value->literal_value;
	} else {
        printf("Variable '%s' not declared at line %d", var->lexeme, var->location);
        exit(ERR_UNDECLARED);
    }

    symbol* symbol_in_table = current_bucket->data;
    //verify vector assignment
    if(symbol_in_table->nat == TYPE_VEC)
    {
        printf("Vector '%s' assigned with a variable at line %d", symbol_in_table->lexeme, symbol_in_table->location);
        exit(ERR_VECTOR);
    }

    if(symbol_in_table->nat == TYPE_FUNC)
    {
        printf("Function '%s' assigned with a variable at line %d", symbol_in_table->lexeme, symbol_in_table->location);
        exit(ERR_FUNCTION);
    }

    return symbol_in_table;
}

void call_function(stack* st, symbol* func_name)
{
	bucket* current_bucket = search(st, *func_name);
	if(current_bucket)
	{
	   current_bucket->data->literal_value = func_name->literal_value;
	} else {
        printf("Function '%s' not declared at line %d", func_name->lexeme, func_name->location);
        exit(ERR_UNDECLARED);
    }

    symbol* symbol_in_table = current_bucket->data;
    if(symbol_in_table->nat == TYPE_VEC)
    {
        printf("Vector '%s' being called as function at line %d", symbol_in_table->lexeme, symbol_in_table->location);
        exit(ERR_VECTOR);
    }
    if(symbol_in_table->nat == TYPE_VAR)
    {
        printf("Variable '%s' being called as function at line %d", symbol_in_table->lexeme, symbol_in_table->location);
        exit(ERR_VARIABLE);
    }
}

void assign_vector(stack* st, symbol* var, symbol* value)
{
	bucket* current_bucket = search(st, *var);
	if(current_bucket)
	{
	   current_bucket->data->literal_value = value->literal_value;
	} else {
        printf("Vector '%s' not declared at line %d", var->lexeme, var->location);
        exit(ERR_UNDECLARED);
    }
    symbol* symbol_in_table = current_bucket->data;
    if(symbol_in_table->nat == TYPE_VAR)
    {
        printf("Variable '%s' being used as a vector line %d", symbol_in_table->lexeme, symbol_in_table->location);
        exit(ERR_VARIABLE);
    }
    if(symbol_in_table->nat == TYPE_FUNC)
    {
        printf("Function '%s' being used as a vector line %d", symbol_in_table->lexeme, symbol_in_table->location);
        exit(ERR_FUNCTION);
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
				return current_bucket;
			}
			top = top->next;
        }
        else
        {
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
