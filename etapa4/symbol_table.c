#include "symbol_table.h"

arguments create_args(int n, token_type _type, arguments * _next)
{
    arguments args;
    args.number = n;
    args.type = _type;
    args.next = _next;

    return args;
}

symbol create_symbol(int size_mult, type t, arguments *args, token_value tv)
{
    symbol s;
    s.location = tv.line;
    s.nature = tv.token_t;
    set_symbol_type(&s, t);
    set_symbol_size(&s, size_mult);

    //s.args = *args;
    s.tv = tv;

    return s;
}

void set_symbol_type(symbol *s, type t)
{
    s->t_type = t;
}

void set_symbol_size(symbol *s, int size_mult)
{
    switch(s->t_type)
    {
        case TYPE_UNKNOWN:
            break;
        case TYPE_UINT:
            s->size = 32 * size_mult;
            break;
        case TYPE_INT:
            s->size = 32 * size_mult;
            break;
        case TYPE_BOOL:
            s->size = 8 * size_mult;
            break;
        case TYPE_FLOAT:
            s->size = 64 * size_mult;
            break;
        case TYPE_CHAR:
            s->size = 8 * size_mult;
            break;
        case TYPE_STRING:
            s->size = 1 * size_mult;
            break;
    }
}

symbol_table create_table()
{
    symbol_table table;
    for(int i = 0; i < MAX_SIZE; i ++)
    {
        table.key[i]  = NULL;
        table.data[i].location = -1;
    }

    return table;
}

void insert_symbol(symbol_table * table, symbol sym)
{
    int pos = hash(sym.tv.lv.v.vs);

    while(table->data[pos].location != - 1)
    {
        pos ++;
        pos = pos % MAX_SIZE;
    }
    table->data[pos] = sym;
}

uint verify_symbol(symbol_table *table, char *string)
{
    uint key = hash(string);

    while(table->data[key].location != -1 && strcmp(table->data[key].tv.lexeme, string))
    {
        key ++;
        key = key % MAX_SIZE;
    }
    if(table->data[key].location == -1)
        return 0;
    else
    {
        return key;
    }
}

symbol get_symbol(symbol_table *table, char *string)
{
    uint key;
    if((key = verify_symbol(table, string)))
       return table->data[key];

    return table->data[0];
}

uint hash(char *str)
{
    uint hash = 5381;

    int n = strlen(str);
    for(int i = 0; i < n; i ++)
        hash = (hash * 33) + str[n]; /* hash * 33 + c */

    return hash % MAX_SIZE;
}
