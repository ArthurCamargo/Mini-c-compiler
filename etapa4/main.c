/*
  Função principal para realização da E3.
  Não modifique este arquivo.
*/
#include <stdio.h>
#include "tree.h"
#include "stack.h"
#include "errors.h"
#include "symbol_table.h"

extern int yyparse(void);
extern int yylex_destroy(void);
extern int yyerror(char const* str);

tree *arvore = NULL;
stack *st = NULL;

int main (int argc, char **argv)
{
    st = create_stack();

    symbol_table table = create_table();
    push(&st, &table); // Global scope

    int ret = yyparse();
    exporta(arvore);
    libera(arvore);
    yylex_destroy();
    return ret;
}
