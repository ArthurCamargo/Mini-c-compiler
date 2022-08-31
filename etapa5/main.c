#include <stdio.h>
#include "tree.h"
#include "stack.h"

extern int yyparse(void);
extern int yylex_destroy(void);
extern int get_line_number();

void yyerror (char const *s) {
   int n = get_line_number();
   fprintf (stderr, "[!] %s -- line:%d\n", s, n);
}


tree *arvore = NULL;
stack *top = NULL;

int main (int argc, char **argv)
{
    push_new_table(&top); //Escopo global
    int ret = yyparse();
    exporta(arvore);
    libera(arvore);
    yylex_destroy();
    return ret;
}
