#ifndef TREE_H
#define TREE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum type
{
    TYPE_INT,
    TYPE_FLOAT,
    TYPE_BOOL,
    TYPE_STRING,
    TYPE_CHAR,

} type;

typedef enum token_type
{
    SPECIAL_CHAR,
    COMPOSE_OP,
    ID,
    LITERAL,

}token_type;


typedef union value
{
    int vi;           //int
    float vf;         //float
    int vb;           //bool (represented as int)
    char* vs;         //string
    char vc;          //char
}value;

typedef struct literal_value
{
    type literal_type;
    value v;

}literal_value;

typedef struct symbol
{
    int line;
    token_type token_t;
    literal_value lv;
} symbol;

typedef struct tree
{
    symbol data;
    type node_type;
    int child_number;
    struct tree** child; //copy of pointer to create an n-ary tree
} tree;


symbol create_symbol_value_int_bool(int line, token_type t, type literal, int n);
symbol create_symbol_value_char(int line, token_type t, type literal, char n);
symbol create_symbol_value_string(int line, token_type t, type literal, char* n);
symbol create_symbol_value_float(int line, token_type t, type literal, float n);
tree* empty_tree();
tree* insert_leaf(symbol data);
tree* insert_child(tree* t, tree* tc);
tree* create_insert_child(token_type type, tree * t, tree * child);
void print_data(symbol data);
void print_tree(tree * t);
void libera(tree * t);
void exporta(tree * t);
char * prepend(char* string_var, const char* prepend_string);

#endif
