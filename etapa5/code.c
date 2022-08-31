#include "code.h"

//List operations

list create_code_list(code_line* c)
{
    list l;
    l.size = 1;
    l.count = 0;

    l.data = (code_line*) c;
    l.next = NULL;

    return l;
}
