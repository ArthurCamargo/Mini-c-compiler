#ifndef ERRORS
#define ERRORS

#define ERR_UNDECLARED       10
#define ERR_DECLARED         11
#define ERR_VARIABLE         20
#define ERR_VECTOR           21
#define ERR_FUNCTION         22
#define ERR_WRONG_TYPE       30
#define ERR_STRING_TO_X      31
#define ERR_CHAR_TO_X        32
#define ERR_STRING_MAX       33
#define ERR_STRING_VECTOR    34
#define ERR_MISSING_ARGS     40
#define ERR_EXCESS_ARGS      41
#define ERR_WRONG_TYPE_ARGS  42
#define ERR_FUNCTION_STRING  43
#define ERR_WRONG_PAR_INPUT  50
#define ERR_WRONG_PAR_OUTPUT 51
#define ERR_WRONG_PAR_RETURN 52
#define ERR_WRONG_PAR_SHIFT  53

#include <stdio.h>
#include "symbol_table.h"



int yyerror (char const * s) {
    fprintf(stderr, "%s", s);
    return 1;
}

int error_and_exit(int error_number, token_value tk)
{
    switch(error_number)
    {
        case ERR_UNDECLARED:
            printf("Variável não declarada %s: line (%d)", tk.lv.v.vs, tk.line);
            break;
    }
    exit(error_number);
}

#endif
