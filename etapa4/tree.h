#ifndef TREE_H
#define TREE_H

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

typedef enum type
{
    TYPE_UNKNOWN,
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
} token_type;

typedef union value
{
    unsigned int vui; //unsigned int
    int vi;           //int
    float vf;         //float
    int vb;           //bool
    char* vs;         //string
    char vc;          //char
} value;

typedef struct literal_value
{
    type lt;
    value v;
} literal_value;

typedef struct token_value
{
    int line;
    token_type token_t;
    type t_type;
    char * lexeme;
    literal_value lv;
} token_value;

typedef struct tree
{
    token_value data;
    int child_number;
    struct tree** child;
} tree;

token_value create_token_value(int line, token_type t, char *lexeme);
token_value create_token_value_int(int line, token_type t, type lexeme_type, char *lexeme,  int n);
token_value create_token_value_uint(int line, token_type t, type lexeme_type, char *lexeme,  uint n);
token_value create_token_value_bool(int line, token_type t, type lexeme_type, char *lexeme,  bool n);
token_value create_token_value_char(int line, token_type t, type lexeme_type, char *lexeme,  char n);
token_value create_token_value_string(int line, token_type t, type lexeme_type, char *lexeme,  char* n);
token_value create_token_value_float(int line, token_type t, type lexeme_type, char *lexeme,  float n);
tree* empty_tree();
tree* insert_leaf(token_value data);
tree* insert_child(tree* t, tree* tc);
tree* create_insert_child(token_type type, tree * t, tree * child);
void print_data(token_value data);
void print_tree(tree * t);
void libera(tree * t);
void exporta(tree * t);

#endif
