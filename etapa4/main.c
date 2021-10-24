/*
  Função principal para realização da E3.
  Não modifique este arquivo.
*/
#include <stdio.h>
#include "tree.h"
#include "stack.h"
#include "symbol_table.h"

extern int yyparse(void);
extern int yylex_destroy(void);
extern int yyerror(char const *s);

tree *arvore = NULL;
stack *st = NULL;


int yyerror (char const *s) {
    printf("%s\n", s);
    return 1;
}

int main (int argc, char **argv)
{
    push(st, create_table()); // Global scope

    int ret = yyparse();
    exporta(arvore);
    libera(arvore);
    yylex_destroy();
    return ret;
}
