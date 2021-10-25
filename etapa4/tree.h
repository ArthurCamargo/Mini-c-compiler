#ifndef TREE_H
#define TREE_H

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

typedef enum type
{
    TYPE_UINT,
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
    unsigned int vui; //unsigned int
    int vi;           //int
    float vf;         //float
    int vb;           //bool
    char* vs;         //string
    char vc;          //char
}value;

typedef struct literal_value
{
    type lt;
    value v;
}literal_value;

typedef struct token_value
{
    int line;
    token_type token_t;
    literal_value lv;
} token_value;

typedef struct tree
{
    token_value data;
    int child_number;
    struct tree** child;
} tree;

token_value create_token(int line, token_type t, type literal);
token_value create_token_value_int(int line, token_type t, type literal, int n);
token_value create_token_value_uint(int line, token_type t, type literal, uint n);
token_value create_token_value_bool(int line, token_type t, type literal, bool n);
token_value create_token_value_char(int line, token_type t, type literal, char n);
token_value create_token_value_string(int line, token_type t, type literal, char* n);
token_value create_token_value_float(int line, token_type t, type literal, float n);
tree* empty_tree();
tree* insert_leaf(token_value data);
tree* insert_child(tree* t, tree* tc);
tree* create_insert_child(token_type type, tree * t, tree * child);
void print_data(token_value data);
void print_tree(tree * t);
void libera(tree * t);
void exporta(tree * t);

#endif
