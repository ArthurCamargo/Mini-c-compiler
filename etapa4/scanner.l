%{
// Definicoes
#include <stdio.h>
#include "tree.h"
#include "symbol_table.h"
#include "parser.tab.h"
#define YYSTYPE tree

int g_line_number = 1;

int get_line_number()
{
    return g_line_number;
}

%}

numbers [0-9]
letters [a-zA-Z]
integer {numbers}+
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

"if"        {  yylval.valor_lexico = create_token_value_string(get_line_number(), COMPOSE_OP, TYPE_STRING, strdup(yytext), strdup(yytext));
    return TK_PR_IF;       }
"then"      { return TK_PR_THEN;     }
"else"      { return TK_PR_ELSE;     }

"while"    { yylval.valor_lexico = create_token_value_string(get_line_number(), COMPOSE_OP, TYPE_STRING, strdup(yytext), strdup(yytext));
                return TK_PR_WHILE;   }

"do"        { return TK_PR_DO;       }

"input"    { yylval.valor_lexico = create_token_value_string(get_line_number(), COMPOSE_OP, TYPE_STRING, strdup(yytext), strdup(yytext));
                return TK_PR_INPUT;   }

"output"    { yylval.valor_lexico = create_token_value_string(get_line_number(), COMPOSE_OP, TYPE_STRING, strdup(yytext), strdup(yytext));
                return TK_PR_OUTPUT;   }

"return"    { yylval.valor_lexico = create_token_value_string(get_line_number(), COMPOSE_OP, TYPE_STRING, strdup(yytext), strdup(yytext));
                return TK_PR_RETURN;   }

"const"     { return TK_PR_CONST;    }
"static"    { return TK_PR_STATIC;   }
"foreach"   { return TK_PR_FOREACH;  }

"for"       { yylval.valor_lexico = create_token_value_string(get_line_number(), COMPOSE_OP, TYPE_STRING, strdup(yytext), strdup(yytext));
                return TK_PR_FOR;}

"switch"    { return TK_PR_SWITCH;   }
"case"      { return TK_PR_CASE;     }
"break"     { yylval.valor_lexico = create_token_value_string(get_line_number(), COMPOSE_OP, TYPE_STRING, strdup(yytext), strdup(yytext));
                return TK_PR_BREAK;}
"continue"  { yylval.valor_lexico = create_token_value_string(get_line_number(), COMPOSE_OP, TYPE_STRING, strdup(yytext), strdup(yytext));
                return TK_PR_CONTINUE; }
"class"     { return TK_PR_CLASS;    }
"private"   { return TK_PR_PRIVATE;  }
"public"    { return TK_PR_PUBLIC;   }
"protected" { return TK_PR_PROTECTED;}
"end"       { return TK_PR_END;      }
"default"   { return TK_PR_DEFAULT;  }

[\,\;\:\(\)\[\]\{\}\+\-\|\*\/\<\>\=\!\&\%\#\^\.\$\?] {
    yylval.valor_lexico = create_token_value_char(get_line_number(), SPECIAL_CHAR, TYPE_CHAR, strdup(yytext), yytext[0]);
    return yytext[0];
}

"<=" { yylval.valor_lexico = create_token_value_string(get_line_number(), COMPOSE_OP, TYPE_STRING, strdup(yytext), strdup(yytext));
        return TK_OC_LE;}
">=" { yylval.valor_lexico = create_token_value_string(get_line_number(), COMPOSE_OP, TYPE_STRING, strdup(yytext), strdup(yytext));
        return TK_OC_GE;  }
"==" { yylval.valor_lexico = create_token_value_string(get_line_number(), COMPOSE_OP, TYPE_STRING, strdup(yytext), strdup(yytext));
        return TK_OC_EQ;  }
"!=" { yylval.valor_lexico = create_token_value_string(get_line_number(), COMPOSE_OP, TYPE_STRING, strdup(yytext), strdup(yytext));
        return TK_OC_NE;  }
"&&" { yylval.valor_lexico = create_token_value_string(get_line_number(), COMPOSE_OP, TYPE_STRING, strdup(yytext), strdup(yytext));
        return TK_OC_AND; }
"||" { yylval.valor_lexico = create_token_value_string(get_line_number(), COMPOSE_OP, TYPE_STRING, strdup(yytext), strdup(yytext));
        return TK_OC_OR;  }
">>" { yylval.valor_lexico = create_token_value_string(get_line_number(), COMPOSE_OP, TYPE_STRING, strdup(yytext), strdup(yytext));
        return TK_OC_SL;  }
"<<" { yylval.valor_lexico = create_token_value_string(get_line_number(), COMPOSE_OP, TYPE_STRING, strdup(yytext), strdup(yytext));
        return TK_OC_SR;  }

{integer}          { yylval.valor_lexico = create_token_value_int(get_line_number(), LITERAL, TYPE_INT, strdup(yytext), atoi(yytext));
                         return TK_LIT_INT;}

{float}            { yylval.valor_lexico = create_token_value_float(get_line_number(), LITERAL, TYPE_FLOAT, strdup(yytext), atof(yytext));
                         return TK_LIT_FLOAT;}

"true"             { yylval.valor_lexico = create_token_value_bool(get_line_number(), LITERAL, TYPE_BOOL, strdup(yytext), 1);
                         return TK_LIT_TRUE;}

"false"            { yylval.valor_lexico = create_token_value_bool(get_line_number(), LITERAL, TYPE_BOOL, strdup(yytext), 0);
                         return TK_LIT_FALSE;}

"'".?"'"           { yylval.valor_lexico = create_token_value_char(get_line_number(), LITERAL, TYPE_CHAR, strdup(yytext), yytext[1]);
                        return TK_LIT_CHAR;}

"\"".*"\""         { yylval.valor_lexico = create_token_value_string(get_line_number(), LITERAL, TYPE_STRING, strdup(yytext), strdup(yytext));
                        return TK_LIT_STRING;}

({letters}|"_")({letters}|{numbers}|"_")* { yylval.valor_lexico = create_token_value_string(get_line_number(), ID, TYPE_STRING, strdup(yytext), strdup(yytext));
                                            return TK_IDENTIFICADOR;}

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
