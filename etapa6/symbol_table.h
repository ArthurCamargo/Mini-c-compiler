// Authors
// Arthur Camargo && Joao Maieron


#ifndef SYMBOL_TABLE
#define SYMBOL_TABLE

#include "tree.h"
#include "utils.h"
#include <limits.h>

typedef enum nature
{
    TYPE_LIT,   // Literal
    TYPE_VAR,   // Variable
    TYPE_VEC,   // Vector
    TYPE_FUNC,  // Function TYPE_OP,    // Operator

} nature;

typedef struct symbol
{
    int location; // Location (line) of the symbol in the code
    int address; // Addres of the symbol if is a variable to be stored
    nature nat; // {Literal, Variable, Function ...}
    type t_type; // {uInt, Int, Float, Bool, Char, String ...}
    uint vector_size; // if it's a vector there is a multiplicative value
    int size; // Devirated from type, vector multiply
    char * lexeme; // String of the lexeme found by the yylex
    value literal_value; // Literal Value
} symbol;

typedef struct key_object
{
    unsigned int hash_value;
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
    unsigned int offset; //Offset for address
    unsigned int count; // How many itens in the hash table
    unsigned int capacity; // How much can we support
    bucket* buckets; // Itens ("name", data)
} symbol_table;

symbol_table* create_table();
void destroy_table(symbol_table* table);
bucket* find_symbol_in_table(bucket* buckets, int capacity, key_object* key);
int set_type();
bool insert_symbol(symbol_table* table, symbol s);
symbol create_symbol(int size_mult, type t, nature n, int line, value v, char* lexeme);
void set_symbol_type(symbol* s, type t);
void set_symbol_size(symbol* s, int size_mult);
uint hash_string(char* str, int size, int capacity);
symbol get_symbol(symbol_table* table, char* string);
uint verify_symbol(symbol_table* table, char* string);
bucket* search_symbol_in_table(symbol_table* table, symbol s);

#endif
