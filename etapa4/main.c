#include <stdio.h>
#include "tree.h"
#include "stack.h"

extern int yyparse(void);
extern int yylex_destroy(void);

int yyerror(const char *s)
{
    fprintf(stderr, "%s\n",s);
    return 0;
}

tree *arvore = NULL;
stack *top = NULL;

int main (int argc, char **argv)
{
    push_new_table(&top); //Escopo global
    printf("%d", top->table->capacity);
    int ret = yyparse();
    exporta(arvore);
    libera(arvore);
    yylex_destroy();
    return ret;
}
