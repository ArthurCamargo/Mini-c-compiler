#include "tree.h"

tree* insert_leaf(token_value data)
{
    tree* t = (tree *) malloc(sizeof(tree)); //allocate space for the tree
    t->data = data;
    t->child_number = 0;
    t->child = (tree **) malloc(sizeof(tree*));
    return t;
}

tree* insert_child(tree* t, tree* child)
{
    if(t == NULL)
    {
        return child;
    }
    if(child != NULL && child != t)
    {
        t->child_number ++;
        t->child = (tree**)realloc(t->child, t->child_number * sizeof(tree*)); //reallocates for fitting the new baby
        t->child[t->child_number - 1] = child;
    }

    return t;
}

void print_tree(tree * t)
{
    if(t == NULL)
        return;
    for(int i = 0; i < t->child_number; i ++)
    {
        print_data(t->child[i]->data);
    }

    for(int i = 0; i < t->child_number; i ++)
    {
        print_tree(t->child[i]);
    }
}

void print_data(token_value data)
{
    switch(data.token_t)
    {
        case SPECIAL_CHAR:
            printf("[label=\"%c\"];\n", data.lv.v.vc);
            break;
        case COMPOSE_OP:
            printf("[label=\"%s\"];\n", data.lv.v.vs);
            break;
        case ID:
            printf("[label=\"%s\"];\n", data.lv.v.vs);
            break;
        case LITERAL:
            switch(data.lv.lt)
            {
                case TYPE_UINT:
                    printf("[label=\"%d\"];\n",data.lv.v.vb);
                    break;
                case TYPE_INT:
                    printf("[label=\"%d\"];\n",data.lv.v.vb);
                    break;
                case TYPE_FLOAT:
                    printf("[label=\"%f\"];\n",data.lv.v.vf);
                    break;
                case TYPE_BOOL:
                    printf("[label=\"%s\"];\n",data.lv.v.vb ? "true" : "false");
                    break;
                case TYPE_STRING:
                    printf("[label=\"%s\"];\n",data.lv.v.vs);
                    break;
                case TYPE_CHAR:
                    printf("[label=\"%c\"];\n",data.lv.v.vc);
                    break;
            }
            break;
    }
}

void exporta(tree* arvore)
{
    if(arvore == NULL)
        return;

    printf("%p\n", arvore);
    for(int i = 0; i < arvore->child_number; i ++)
    {
        printf("%p, %p\n", arvore, arvore->child[i]);
    }

    for(int i = 0; i < arvore->child_number; i ++)
    {
        exporta(arvore->child[i]);
    }
    switch(arvore->data.token_t)
    {
        case SPECIAL_CHAR:
            printf("%p [label=\"%c\"];\n", arvore, arvore->data.lv.v.vc);
            break;
        case COMPOSE_OP:
            printf("%p [label=\"%s\"];\n", arvore, arvore->data.lv.v.vs);
            break;
        case ID:
            printf("%p [label=\"%s\"];\n", arvore, arvore->data.lv.v.vs);
            break;
        case LITERAL:
            switch(arvore->data.lv.lt)
            {
                case TYPE_UINT:
                    printf("%p [label=\"%d\"];\n", arvore, arvore->data.lv.v.vb);
                    break;
                case TYPE_INT:
                    printf("%p [label=\"%d\"];\n", arvore, arvore->data.lv.v.vb);
                    break;
                case TYPE_FLOAT:
                    printf("%p [label=\"%f\"];\n", arvore, arvore->data.lv.v.vf);
                    break;
                case TYPE_BOOL:
                    printf("%p [label=\"%s\"];\n", arvore, arvore->data.lv.v.vb ? "true" : "false");
                    break;
                case TYPE_STRING:
                    printf("%p [label=%s];\n", arvore, arvore->data.lv.v.vs);
                    break;
                case TYPE_CHAR:
                    printf("%p [label=\"%c\"];\n", arvore, arvore->data.lv.v.vc);
                    break;
            }
            break;
    }
}

token_value create_token_value(int line, token_type t, type literal)
{
    token_value s;
    s.line = line;
    s.token_t = t;
    s.lv.lt = literal;

    return s;
}

token_value create_token_value_int_uint_bool(int line, token_type t, type literal, int n)
{ token_value s;
    s.token_t = t;
    s.lv.lt = literal;
    s.lv.v.vb = n;

    return s;
}

token_value create_token_value_char(int line, token_type t, type literal, char n)
{
    token_value s;
    s.token_t = t;
    s.lv.lt = literal;
    s.lv.v.vc = n;

    return s;
}

token_value create_token_value_string(int line, token_type t, type literal, char* n)
{
    token_value s;
    s.token_t = t;
    s.lv.lt = literal;
    s.lv.v.vs = n;

    return s;
}

token_value create_token_value_float(int line, token_type t, type literal, float n)
{
    token_value s;
    s.token_t = t;
    s.lv.lt = literal;
    s.lv.v.vf = n;

    return s;
}


void libera(tree * t)
{
    if(t == NULL)
        return;

    for(int i = 0; i < t->child_number; i ++)
    {
        libera(t->child[i]);
    }

    if(t->data.lv.lt == TYPE_STRING || t->data.token_t == ID)
        free(t->data.lv.v.vs);
    free(t->child);
    free(t);
}
