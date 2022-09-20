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


tree *arvore = NULL;
stack *top = NULL;

int main (int argc, char **argv)
{
    push_new_table(&top); //Escopo global
    int ret = yyparse();
    exporta(arvore);


    {
        //TODO Remove tests
        //TEST AREA
        code_line cl;

        cl = create_code_line(create_register(), create_register(), create_register(), ADD);
        list l = create_code_list(&cl);

        arvore->code_list->body = &l;

        code_line code_line_test1;
        code_line_test1 = create_normal_code_line(SUB);
        concat(arvore->code_list->body, &code_line_test1);

        code_line code_line_test2;
        code_line_test2 = create_immediate_code_line(10, ADDI);
        concat(arvore->code_list->body, &code_line_test2);

        code_line code_line_test4;
        code_line_test4 = create_immediate_load_code_line(30, LOADI);
        concat(arvore->code_list->body, &code_line_test4);

        code_line code_line_test3;
        code_line_test3 = create_two_register_code_line(LOAD);
        concat(arvore->code_list->body, &code_line_test3);


        code_line code_line_test5;
        code_line_test5 = create_immediate_jump_code_line(5, JUMPI);
        concat(arvore->code_list->body, &code_line_test5);

        code_line code_line_test6;
        code_line_test6 = create_one_register_code_line(JUMP);
        concat(arvore->code_list->body, &code_line_test6);

        code_line code_line_test7;
        code_line_test7 = create_conditional_branch_code_line(1, 2, CBR);
        concat(arvore->code_list->body, &code_line_test7);


        /*


        */

        print_tree(arvore);
    }

    libera(arvore);
    yylex_destroy();
    return ret;
}
