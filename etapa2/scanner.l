%{
// Definicoes
#include <stdio.h>
#include "parser.tab.h"

int g_line_number = 1;

int get_line_number()
{
    return g_line_number;
}

%}

numbers [0-9]
letters [a-zA-Z]
integer {numbers}+
unsigned_integer {numbers}+
expoent [eE]{integer}
float {integer}("."{integer}){expoent}?
bool ("false"|"true")
white [ \t]+
%x IN_COMMENT

%%

{white} {}

"int"       { return TK_PR_INT;      }
"float"     { return TK_PR_FLOAT;    }
"bool"      { return TK_PR_BOOL;     }
"char"      { return TK_PR_CHAR;     }
"string"    { return TK_PR_STRING;   }
"if"        { return TK_PR_IF;       }
"then"      { return TK_PR_THEN;     }
"else"      { return TK_PR_ELSE;     }
"while"     { return TK_PR_WHILE;    }
"do"        { return TK_PR_DO;       }
"input"     { return TK_PR_INPUT;    }
"output"    { return TK_PR_OUTPUT;   }
"return"    { return TK_PR_RETURN;   }
"const"     { return TK_PR_CONST;    }
"static"    { return TK_PR_STATIC;   }
"foreach"   { return TK_PR_FOREACH;  }
"for"       { return TK_PR_FOR;      }
"switch"    { return TK_PR_SWITCH;   }
"case"      { return TK_PR_CASE;     }
"break"     { return TK_PR_BREAK;    }
"continue"  { return TK_PR_CONTINUE; }
"class"     { return TK_PR_CLASS;    }
"private"   { return TK_PR_PRIVATE;  }
"public"    { return TK_PR_PUBLIC;   }
"protected" { return TK_PR_PROTECTED;}
"end"       { return TK_PR_END;      }
"default"   { return TK_PR_DEFAULT;  }

"," { return (int)','; }
";" { return (int)';'; }
":" { return (int)':'; }
"(" { return (int)'('; }
")" { return (int)')'; }
"[" { return (int)'['; }
"]" { return (int)']'; }
"{" { return (int)'{'; }
"}" { return (int)'}'; }
"+" { return (int)'+'; }
"-" { return (int)'-'; }
"|" { return (int)'|'; }
"*" { return (int)'*'; }
"/" { return (int)'/'; }
"<" { return (int)'<'; }
">" { return (int)'>'; }
"=" { return (int)'='; }
"!" { return (int)'!'; }
"&" { return (int)'&'; }
"%" { return (int)'%'; }
"#" { return (int)'#'; }
"^" { return (int)'^'; }
"." { return (int)'.'; }
"$" { return (int)'$'; }
"?" { return (int)'?'; }

"<=" { return TK_OC_LE;  }
">=" { return TK_OC_GE;  }
"==" { return TK_OC_EQ;  }
"!=" { return TK_OC_NE;  }
"&&" { return TK_OC_AND; }
"||" { return TK_OC_OR;  }
">>" { return TK_OC_SL;  }
"<<" { return TK_OC_SR;  }

{integer}   { return TK_LIT_INT;   }
{float}     { return TK_LIT_FLOAT; }
"true"      { return TK_LIT_TRUE;  }
"false"     { return TK_LIT_FALSE; }
"'".?"'"    { return TK_LIT_CHAR;  }
"\"".*"\""  { return TK_LIT_STRING;}

({letters}|"_")({letters}|{numbers}|"_")* { return TK_IDENTIFICADOR;}

"//".*"\n" {g_line_number ++;}


<INITIAL>{
"/*"              BEGIN(IN_COMMENT);
}

<IN_COMMENT>{
"*/"      BEGIN(INITIAL);
[^*\n]+   // eat comment in chunks ;
"*"       // eat the lone star
\n        g_line_number++;
}

"\n" {g_line_number++;}

. { return TOKEN_ERRO; }

%%
