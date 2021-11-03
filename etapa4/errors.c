#include "errors.h"

int check_errors_declaration(stack *s, symbol declared)
{
    if(!search(s, declared.tv.lexeme))
    {
        insert_symbol(s->table, declared);
        return 0;
    }
    else
    {
        return ERR_DECLARED;
    }
}

int check_errors_attribution(stack *s, symbol variable, symbol literal)
{
    return 0;
}

