#ifndef SYMBOL_TABLE
#define SYMBOL_TABLE

#include "tree.h"
#include <limits.h>

#define MAX_SIZE 1000

typedef struct arguments
{
    int number; // Number of arguments starting with this one
    token_type type;
    struct arguments *next;
} arguments;

typedef struct symbol
{
    int location;
    token_type nature; // {Literal, Variable, Function ...}
    type t_type; // {uInt, Int, Float, Bool, Char, String ...}
    uint vector_size; // if it's a vector there is a multiplicative value
    int size; // Devirated from type, vector multiply
    arguments args; // Arguments linked list
    token_value tv; //Token_value
} symbol;

typedef struct symbol_table
{
    char* key[MAX_SIZE];    // key
    symbol data[MAX_SIZE]; // symbol of the table
} symbol_table;

arguments create_args();
symbol_table create_table();
int set_type();
symbol create_symbol(int size_mult, type t, arguments *args, token_value tv);
void set_symbol_type(symbol *s, type t);
void set_symbol_size(symbol *s, int size_mult);
uint hash(char * str);
void insert_symbol();
symbol get_symbol(symbol_table *table, char * string);
uint verify_symbol(symbol_table *table, char *string);

#endif

