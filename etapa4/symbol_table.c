#include "symbol_table.h"

arguments create_args(int n, token_type _type, arguments * _next)
{
    arguments args;
    args.number = n;
    args.type = _type;
    args.next = _next;

    return args;
}

symbol create_symbol(int location, int nature, int type, int size, arguments args, token_value tv)
{
    symbol s;
    s.location = location;
    s.nature = nature;
    s.t_type = type ;
    s.size = size ;
    s.args = args;
    s.tv = tv;

    return s;
}

symbol_table create_table()
{
    symbol_table table;
    for(int i = 0; i < MAX_SIZE; i ++)
    {
        table.key[i]  = NULL;
        table.data[i] = NULL;
    }

    return table;
}
void insert_symbol(symbol_table * table, symbol sym)
{
    int pos = hash(sym.tv.lv.v.vs);

    while(table->data[pos] != NULL)
    {
        pos ++;
        pos = pos % MAX_SIZE;
    }
    table->data[pos] = &sym;
}

int get_symbol(symbol_table *table, char *string, symbol *new_symbol)
{
    uint key = hash(string);
    while(table->data[key] != NULL && table->data[key]->tv.lv.v.vs != string)
    {
        key ++;
        key = key % MAX_SIZE;
    }
    if(table->data[key] == NULL)
        return 0;
    else
    {
        new_symbol = table->data[key];
        return 1;
    }
}

uint hash(char *str)
{
    uint hash = 5381;
    uint c;

    while ((c = *str++))
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

    return hash;
}
