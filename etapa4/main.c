/*
  Função principal para realização da E3.
  Não modifique este arquivo.
*/
#include <stdio.h>
#include "tree.h"
extern int yyparse(void);
extern int yylex_destroy(void);
extern int yyerror(char const *s);

tree *arvore = NULL;


int yyerror (char const *s) {
    printf("%s\n", s);
    return 1;
}

int main (int argc, char **argv)
{
    int ret = yyparse();
    exporta(arvore);
    libera(arvore);
    yylex_destroy();
    return ret;
}
