%{
#include <stdio.h>

int yylex(void);
int get_line_number(void);

void yyerror (char const *s) {
   int n = get_line_number();
   fprintf (stderr, "[!] %s -- line:%d\n", s, n);
}

%}

%token TK_PR_INT
%token TK_PR_FLOAT
%token TK_PR_BOOL
%token TK_PR_CHAR
%token TK_PR_STRING
%token TK_PR_IF
%token TK_PR_THEN
%token TK_PR_ELSE
%token TK_PR_WHILE
%token TK_PR_DO
%token TK_PR_INPUT
%token TK_PR_OUTPUT
%token TK_PR_RETURN
%token TK_PR_CONST
%token TK_PR_STATIC
%token TK_PR_FOREACH
%token TK_PR_FOR
%token TK_PR_SWITCH
%token TK_PR_CASE
%token TK_PR_BREAK
%token TK_PR_CONTINUE
%token TK_PR_CLASS
%token TK_PR_PRIVATE
%token TK_PR_PUBLIC
%token TK_PR_PROTECTED
%token TK_PR_END
%token TK_PR_DEFAULT
%token TK_OC_LE
%token TK_OC_GE
%token TK_OC_EQ
%token TK_OC_NE
%token TK_OC_AND
%token TK_OC_OR
%token TK_OC_SL
%token TK_OC_SR
%token TK_LIT_INT
%token TK_LIT_FLOAT
%token TK_LIT_FALSE
%token TK_LIT_TRUE
%token TK_LIT_CHAR
%token TK_LIT_STRING
%token TK_IDENTIFICADOR
%token TOKEN_ERRO

%%
start:
     program;

program
    :  declaration program
    |
    ;

declaration
    : function
    | global_variable
    ;

global_variable
    : static type id vector_declaration global_fotter ';'
    ;

global_fotter
    : ',' id vector_declaration global_fotter
    |
    ;

vector_declaration
    : '[' TK_LIT_INT ']'
    |
    ;

static
    : TK_PR_STATIC
    |
    ;

id
    : TK_IDENTIFICADOR
    ;

function
    : func_header command_block
    ;

func_header
    : static type id list
    ;

list
    : '(' parameters ')'
    | '(' ')'
    ;

parameters
    : parameters ',' const type id
    | const type id
    ;

const
    : TK_PR_CONST
    |
    ;

command_block
    : '{' command '}'
    ;

command
    : simple_command ';' command

    | flux_control ';' command
    |
    ;

simple_command
    : local_variable
    | attribution
    | input
    | output
    | return
    | command_block
    | shift
    | break
    | continue
    | func_call
    ;

local_variable
    : static const type id_list
    ;

id_list
    : id initialization
    | id_list ',' id  initialization
    | id_list ',' id
    | id
    ;

initialization
    : TK_OC_LE id
    | TK_OC_LE literal
    ;

literal
    : TK_LIT_INT
    | TK_LIT_FLOAT
    | TK_LIT_FALSE
    | TK_LIT_TRUE
    | TK_LIT_CHAR
    | TK_LIT_STRING
    ;

attribution
    : id '=' expr
    | vector_attribution '=' expr
    ;

vector_attribution
    : id '[' expr ']'
    ;


expr
    : ternary
    ;

ternary
    : unary_minus '?' unary_minus ':' ternary
    | unary_minus
    ;

unary_minus
    : '+' unary_minus
    | '-' unary_minus
    | or
    ;

or
    : or TK_OC_OR and
    | and
    ;

and
    : and TK_OC_AND or_log
    | or_log
    ;

or_log
    : or_log '|' and_log
    | and_log
    ;

and_log
    : and_log '&' equal
    | equal
    ;

equal
    : equal TK_OC_EQ rel
    | equal TK_OC_NE rel
    | rel
    ;

rel
    : rel TK_OC_LE soma_sub
    | rel TK_OC_GE soma_sub
    | rel '>' soma_sub
    | rel '<' soma_sub
    | soma_sub
    ;

soma_sub
    : soma_sub '+' mult_div
    | soma_sub '-' mult_div
    | mult_div
    ;

mult_div
    : mult_div '*' unary
    | mult_div '/' unary
    | mult_div '%' unary
    | exponential
    ;

exponential
    : exponential '^' unary
    | unary
    ;

unary
    : '*' unary
    | '&' unary
    | '#' unary
    | '?' unary
    | '!' unary
    | parenthesis
    ;

parenthesis
    : '(' expr ')'
    | operand_arit
    ;

flux_control
    : conditional
    | iterative
    ;

conditional
    : TK_PR_IF '(' expr ')' command_block
    | TK_PR_IF '(' expr ')' command_block TK_PR_ELSE command_block
    ;

iterative
    : TK_PR_FOR '(' attribution ':' expr ':' attribution ')' command_block
    | TK_PR_WHILE '(' expr ')' TK_PR_DO command_block
    ;

input
    : TK_PR_INPUT id
    ;

output
    : TK_PR_OUTPUT id
    | TK_PR_OUTPUT literal
    ;

return
    : TK_PR_RETURN expr
    ;

break
    : TK_PR_BREAK
    ;

continue
    : TK_PR_CONTINUE
    ;

shift
    : id TK_OC_SL TK_LIT_INT
    | id TK_OC_SR TK_LIT_INT
    | vector_attribution TK_OC_SL TK_LIT_INT
    | vector_attribution TK_OC_SR TK_LIT_INT
    ;

func_call
    : id '(' args ')'
    ;

args
    : expr ',' args
    | expr
    |
    ;

operand_arit
    : vector_attribution
    | id
    | TK_LIT_INT
    | TK_LIT_FLOAT
    | TK_LIT_TRUE
    | TK_LIT_FALSE
    | func_call
    ;

type
    : TK_PR_INT
    | TK_PR_FLOAT
    | TK_PR_BOOL
    | TK_PR_CHAR
    | TK_PR_STRING
    ;
%%
