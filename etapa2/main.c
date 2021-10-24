/*
Função principal para realização da análise sintática.

Este arquivo será posterioremente substituído, não acrescente nada.
*/
#include <stdio.h>
#include "parser.tab.h" //arquivo gerado com bison -d parser.y
extern int yylex_destroy(void);
extern int get_line_number(void);

int yyerror (char const *s) {
    printf("%s\n", s);
    return 1;
}


int main (int argc, char **argv)
{
  int ret = yyparse();
  int line = get_line_number();
  fprintf(stderr, "%d error found. Line of the error: %d\n", ret, line);
  yylex_destroy();
  return ret;
}
