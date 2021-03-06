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

int yyerror(const char *s)
{
    fprintf(stderr, "%s\n",s);
    return 0;
}

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
