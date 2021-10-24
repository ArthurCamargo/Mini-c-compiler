#ifndef TREE_H
#define TREE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum literal_type
{
    TYPE_UINT,
    TYPE_INT,
    TYPE_FLOAT,
    TYPE_BOOL,
    TYPE_STRING,
    TYPE_CHAR,
} literal_type;

typedef enum token_type
{
    SPECIAL_CHAR,
    COMPOSE_OP,
    ID,
    LITERAL,
}token_type;


typedef union value
{
    unsigned int vui; //unsigned int
    int vi;           //int
    float vf;         //float
    int vb;           //bool
    char* vs;         //string
    char vc;          //char
}value;

typedef struct literal_value
{
    literal_type lt;
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
    int child_number;
    struct tree** child; //copy of pointer to create an n-ary tree
} tree;



symbol create_symbol(int line, token_type t, literal_type literal);
symbol create_symbol_value_int_uint_bool(int line, token_type t, literal_type literal, int n);
symbol create_symbol_value_char(int line, token_type t, literal_type literal, char n);
symbol create_symbol_value_string(int line, token_type t, literal_type literal, char* n);
symbol create_symbol_value_float(int line, token_type t, literal_type literal, float n);
tree* empty_tree();
tree* insert_leaf(symbol data);
tree* insert_child(tree* t, tree* tc);
tree* create_insert_child(token_type type, tree * t, tree * child);
void print_data(symbol data);
void print_tree(tree * t);
void libera(tree * t);
void exporta(tree * t);

#endif
