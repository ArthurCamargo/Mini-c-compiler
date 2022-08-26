#ifndef SYMBOL_TABLE
#define SYMBOL_TABLE

#include "tree.h"
#include "utils.h"
#include <limits.h>

#define MAX_SIZE 1000

typedef struct arguments
{
    int number; // Number of arguments starting with this one
    token_type type;
    struct arguments *next;
} arguments;

typedef enum nature
{
    TYPE_LIT,   // Literal
    TYPE_VAR,   // Variable
    TYPE_FUNC,  // Function TYPE_OP,    // Operator

} nature;

typedef struct symbol
{
    unsigned int location; // Location (line) of the symbol in the code
    nature nat; // {Literal, Variable, Function ...}
    type t_type; // {uInt, Int, Float, Bool, Char, String ...}
    uint vector_size; // if it's a vector there is a multiplicative value
    int size; // Devirated from type, vector multiply
    char * lexeme; // String of the lexeme found by the yylex
    value literal_value; // Literal Value
} symbol;

typedef struct key_object
{
    int hash_value;
    char* key_string;
    int size;

}key_object;

typedef struct bucket
{
    key_object* key;
    symbol* data;
} bucket;

typedef struct symbol_table
{
    unsigned int count; // How many itens in the hash table
    unsigned int capacity; // How much can we support
    bucket* buckets; // Itens ("name", data)
} symbol_table;

symbol_table create_table();
void destroy_table(symbol_table* table);
bucket* find_symbol_in_table(bucket * buckets, uint capacity, key_object* key);
int set_type();
bool insert_symbol(symbol_table* table, symbol* s);
symbol create_symbol(int size_mult, type t, nature n, unsigned int line, value v, char * lexeme);
void set_symbol_type(symbol *s, type t);
void set_symbol_size(symbol *s, int size_mult);
uint hash_string(char *str, int size);
symbol get_symbol(symbol_table *table, char * string);
uint verify_symbol(symbol_table *table, char *string);

#endif
