%{
#include "tree.h"
#include "stack.h"
#include "symbol_table.h"
#include "error.h"

int yylex(void);
int yyerror(const char*);
extern tree* arvore;
extern stack* st;

%}

%start start

%union {
    token_value valor_lexico;
    tree* ast;
    type tipo;
}

%type<ast> start program declaration global_variable_body global_fotter close_block open_block
%type<ast> static id function func_header list parameters const command_block command
%type<ast> simple_command local_variable id_list initialization literal attribution
%type<ast> operand_arit expr ternary unary_minus or and or_log and_log equal rel soma_sub mult_div
%type<ast> exponential unary parenthesis flux_control conditional iterative vector_attribution
%type<ast> input output return break continue shift func_call args

%type<valor_lexico> vector_declaration
%type<tipo> type

//Literals
%token<valor_lexico> TK_LIT_UINT  TK_LIT_INT TK_LIT_FLOAT TK_LIT_FALSE TK_LIT_TRUE TK_LIT_CHAR TK_LIT_STRING

//Identifiers
%token<valor_lexico> TK_IDENTIFICADOR

//Reserved words
%token<tipo> TK_PR_INT TK_PR_FLOAT TK_PR_BOOL TK_PR_STRING TK_PR_CHAR TK_PR_UINT
%token<valor_lexico> TK_PR_IF TK_PR_THEN TK_PR_ELSE TK_PR_WHILE TK_PR_DO TK_PR_INPUT
%token<valor_lexico> TK_PR_OUTPUT TK_PR_RETURN TK_PR_CONST TK_PR_STATIC TK_PR_FOREACH
%token<valor_lexico> TK_PR_FOR TK_PR_SWITCH TK_PR_CASE TK_PR_BREAK TK_PR_CONTINUE TK_PR_CLASS
%token<valor_lexico> TK_PR_PRIVATE TK_PR_PUBLIC TK_PR_PROTECTED TK_PR_END TK_PR_DEFAULT
%token<valor_lexico> TK_OC_LE TK_OC_GE TK_OC_EQ TK_OC_NE TK_OC_AND TK_OC_OR TK_OC_SL TK_OC_SR TOKEN_ERRO

//Special chars
%token <valor_lexico> ')' '(' ']' '[' '}' '{' '-' '+' '?' '*' '/' '|' '>' '<' '!' '=' '&' '%' '#' '^' '$' ',' ';' ':' '.'

%%
start:
     program {arvore = $1;}

program
    : declaration program {$$ = $1; $$ = insert_child($$, $2);}
    |                     {$$ = NULL;}
    ;

declaration
    : function             {$$ = $1;}
    | global_variable_body {$$ = NULL;}
    ;

global_variable_body
    : static type id vector_declaration global_fotter ';' {symbol s = create_symbol($4, $2, NULL, $3->data);
                                                           insert_symbol(st->table, s);} //declare
    ;

global_fotter
    : ',' id vector_declaration global_fotter {} //declare
    |       {$$ = NULL;}
    ;

vector_declaration
    : '[' TK_LIT_UINT ']' {$$ = $2;}
    |                     {}
    ;

static
    : TK_PR_STATIC        {$$ = NULL;}
    |                     {$$ = NULL;}
    ;

id
    : TK_IDENTIFICADOR    {$$ = insert_leaf($1);}
    ;

function
    : func_header command_block {$$ = $1; $$ = insert_child($$, $2);}
    ;

func_header
    : static type id list       {$$ = $3;}
    ;

list
    : '(' parameters ')'        {$$ = NULL;}
    | '(' ')'                   {$$ = NULL;}
    ;

parameters
    : parameters ',' const type id  {$$ = NULL;}
    | const type id                 {$$ = NULL;}
    ;

const
    : TK_PR_CONST                 {$$ = NULL;}
    |                             {$$ = NULL;}
    ;

command_block
    : open_block command  close_block {$$ = $2;}
    ;

open_block
    : '{'                         {symbol_table table = create_table(); push(&st, &table);}
    ;

close_block
    : '}'                         {pop(&st);}
    ;

command
    : simple_command ';' command  {$$ = $1; $$ = insert_child($$, $3);}

    | flux_control ';' command    {$$ = $1; $$ = insert_child($$, $3);}
    |                             {$$ = NULL;}
    ;

simple_command
    : local_variable  {$$ = $1;}
    | attribution     {$$ = $1;}
    | input           {$$ = $1;}
    | output          {$$ = $1;}
    | return          {$$ = $1;}
    | command_block   {$$ = $1;}
    | shift           {$$ = $1;}
    | break           {$$ = $1;}
    | continue        {$$ = $1;}
    | func_call       {$$ = $1;}
    ;

local_variable
    : static const type id_list {$$ = $4;}
    ;

id_list
    : static const type id  id_list{ $$ = $2; $$ = insert_child($$, $1);
                                       symbol s = create_symbol(1, NULL, $1->data);
                                       insert_symbol(st->table, s);}

    | id_list ',' id  initialization { $$ = $3; $$ = insert_child($$, $1); $$ = insert_child($$, $3);}

    | id                             { symbol s = create_symbol(1, NULL, $1->data);
                                       insert_symbol(st->table, s);}
    ;

initialization
    : TK_OC_LE id                    {$$ = insert_leaf($1); $$ = insert_child($$, $2);}
    | TK_OC_LE literal               {$$ = insert_leaf($1); $$ = insert_child($$, $2);}
    ;

literal
    : TK_LIT_UINT   {$$ = insert_leaf($1);}
    | TK_LIT_INT    {$$ = insert_leaf($1);}
    | TK_LIT_FLOAT  {$$ = insert_leaf($1);}
    | TK_LIT_FALSE  {$$ = insert_leaf($1);}
    | TK_LIT_TRUE   {$$ = insert_leaf($1);}
    | TK_LIT_CHAR   {$$ = insert_leaf($1);}
    | TK_LIT_STRING {$$ = insert_leaf($1);}
    ;

attribution
    : id '=' expr   {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);
                     check_errors_attribution($1->data, $3->data);
                     }
    | vector_attribution '=' expr  {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    ;

vector_attribution
    : id '[' expr ']' {$$ = insert_leaf($2); $$->data.lv.v.vs = "[]"; $$->data.token_t = COMPOSE_OP;
                       $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    ;

expr
    : ternary       {$$ = $1;}

ternary
        : ternary '?' ternary ':' or {$$ = insert_leaf($2); $$->data.lv.v.vs = "?:";
                                       $$->data.token_t = COMPOSE_OP;
                                       $$ = insert_child($$, $1); $$ = insert_child($$, $3);
                                       $$ = insert_child($$, $5);}
    | unary_minus                {$$ = $1;}
    ;

unary_minus
    : '+' unary_minus            {$$ = insert_leaf($1); $$ = insert_child($$, $2);}
    | '-' unary_minus            {$$ = insert_leaf($1); $$ = insert_child($$, $2);}
    | or                         {$$ = $1;}
    ;

or
    : or TK_OC_OR and            {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    | and                        {$$ = $1;}
    ;

and
    : and TK_OC_AND or_log {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    | or_log               {$$ = $1;}
    ;

or_log
    : or_log '|' and_log   {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    | and_log              {$$ =  $1;}
    ;

and_log
    : and_log '&' equal    {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    | equal                {$$ = $1;}
    ;

equal
    : equal TK_OC_EQ rel   {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    | equal TK_OC_NE rel   {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    | rel                  {$$ = $1;}
    ;

rel
    : rel TK_OC_LE soma_sub {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    | rel TK_OC_GE soma_sub {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    | rel '>' soma_sub      {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    | rel '<' soma_sub      {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    | soma_sub              {$$ = $1;}
    ;

soma_sub
    : soma_sub '+' mult_div {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    | soma_sub '-' mult_div {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    | mult_div              {$$ = $1;}
    ;

mult_div
    : mult_div '*' unary    {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    | mult_div '/' unary    {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    | mult_div '%' unary    {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    | exponential           {$$ = $1;}
    ;

exponential
    : exponential '^' unary {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    | unary                 {$$ = $1;}
    ;

unary
    : '*' unary   {$$ = insert_leaf($1); $$ = insert_child($$, $2);}
    | '&' unary   {$$ = insert_leaf($1); $$ = insert_child($$, $2);}
    | '#' unary   {$$ = insert_leaf($1); $$ = insert_child($$, $2);}
    | '?' unary   {$$ = insert_leaf($1); $$ = insert_child($$, $2);}
    | '!' unary   {$$ = insert_leaf($1); $$ = insert_child($$, $2);}
    | parenthesis {$$ = $1;}
    ;

parenthesis
    : '(' expr ')' {$$ = $2;}
    | operand_arit {$$ = $1;}
    ;

flux_control
    : conditional  {$$ = $1;}
    | iterative    {$$ = $1;}
    ;

conditional
    : TK_PR_IF '(' expr ')' command_block {$$ = insert_leaf($1); $$ = insert_child($$, $3); $$ = insert_child($$, $5);}

    | TK_PR_IF '(' expr ')' command_block TK_PR_ELSE command_block {
        $$ = insert_leaf($1);
        $$ = insert_child($$, $3); $$ = insert_child($$, $5); $$ = insert_child($$, $7);}
    ;

iterative
    : TK_PR_FOR '(' attribution ':' expr ':' attribution ')' command_block {
        $$ = insert_leaf($1);
        $$ = insert_child($$, $3); $$ = insert_child($$, $5); $$ = insert_child($$, $7);
        $$ = insert_child($$, $9);}
    | TK_PR_WHILE '(' expr ')' TK_PR_DO command_block {
        $$ = insert_leaf($1);
        $$ = insert_child($$, $3);
        $$ = insert_child($$, $6);}
    ;

input
    : TK_PR_INPUT id       {$$ = insert_leaf($1); $$ = insert_child($$, $2);}
    ;

output
    : TK_PR_OUTPUT id      {$$ = insert_leaf($1); $$ = insert_child($$, $2);}
    | TK_PR_OUTPUT literal {$$ = insert_leaf($1); $$ = insert_child ($$, $2);}
    ;

return
    : TK_PR_RETURN expr    {$$ = insert_leaf($1); $$ = insert_child($$, $2);}
    ;

break
    : TK_PR_BREAK          {$$ = insert_leaf($1);}
    ;

continue
    : TK_PR_CONTINUE       {$$ = insert_leaf($1);}
    ;

shift
    : id TK_OC_SL TK_LIT_UINT  {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, insert_leaf($3));}
    | id TK_OC_SR TK_LIT_UINT  {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, insert_leaf($3));}
    | vector_attribution TK_OC_SL TK_LIT_UINT  {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, insert_leaf($3));}
    | vector_attribution TK_OC_SR TK_LIT_UINT  {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, insert_leaf($3));}
    ;

func_call
    : id '(' args ')' {$$ = $1; $$ = insert_child($$, $3);}
    ;

args
    : expr ',' args  {$$ = $1; $$ = insert_child($$, $3);}
    | expr           {$$ = $1;}
    |                {$$ = NULL;}
    ;

operand_arit
    : vector_attribution { $$ = $1;}
    | id                 { $$ = $1;}
    | TK_LIT_UINT        { $$ = insert_leaf($1);}
    | TK_LIT_INT         { $$ = insert_leaf($1);}
    | TK_LIT_FLOAT       { $$ = insert_leaf($1);}
    | TK_LIT_TRUE        { $$ = insert_leaf($1);}
    | TK_LIT_FALSE       { $$ = insert_leaf($1);}
    | func_call          { $$ = $1;}
    ;

type
    : TK_PR_INT     {$$ = TYPE_INT;}
    | TK_PR_UINT    {$$ = TYPE_UINT;}
    | TK_PR_FLOAT   {$$ = TYPE_FLOAT;}
    | TK_PR_BOOL    {$$ = TYPE_BOOL;}
    | TK_PR_CHAR    {$$ = TYPE_CHAR;}
    | TK_PR_STRING  {$$ = TYPE_STRING;}
    ;
%%
