#include <stdio.h>
#include "code.h"
#include "tree.h"
#include "stack.h"

extern int yyparse(void);
extern int yylex_destroy(void);
extern int get_line_number();


void yyerror (char const *s) {
   int n = get_line_number();
   fprintf (stderr, "[!] %s -- line:%d\n", s, n);
}


bool optimization_flag = false;

tree *arvore = NULL;
stack *top = NULL;

int main (int argc, char **argv)
{

    // Optimizations
    if(argc > 1)
    {
        // see there if exists the -o
        char* optimization = argv[1];

        if(strcmp(optimization, "-O") == -1)
        {
            //Activate optimization
            optimization_flag = true;
        }
    }
    push_new_table(&top); //Escopo global
    top->is_global = true;
    int ret = yyparse();
    print_tree(arvore);
    yylex_destroy();
    return ret;
}
