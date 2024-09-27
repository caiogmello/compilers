%{
#include <stdio.h>
#include <stdlib.h>
#include "blite.tab.h"

extern int yylex();
extern int yylineno;
void yyerror(const char *s);

%}

%token VOID 
%token INT  
%token BOOL
%token IF
%token ELSE
%token WHILE
%token RETURN
%token TRUE
%token FALSE
%token FUNCTION
%token PRINT
%token ID
%token NUMBER
%token PLUS
%token MINUS
%token TIMES
%token DIVIDE
%token ASSIGN
%token LT
%token GT
%token LTE
%token EQ
%token NEQ
%token GTE
%token OPENP
%token CLOSEP
%token COLON
%token SEMIC
%token COMMA
%token OPENB
%token CLOSEB
%token QUOTE
%token ERROR

%%

program
: declarations
; 


declarations
: declaration 
| declarations declaration 
;

declaration
: func_declaration
| var_declaration
;

type
: INT
| BOOL
;

func_declaration
: ID COLON FUNCTION type OPENP params CLOSEP ASSIGN
block
| ID COLON FUNCTION VOID OPENP params CLOSEP ASSIGN
block
;


/* PARAMETRO DE FUNCAO */
params
: /* empty */
| param_list
;

param_list
: parameter
| param_list COMMA parameter
;

parameter
: ID COLON type
;
/* PARAMETRO DE FUNCAO */


/* VARIAVEIS */
var_declaration 
: ID COLON type SEMIC
| ID COLON type ASSIGN expression SEMIC
;
/* VARIAVEIS */


/* BLOCO */
block
: OPENB statements CLOSEB
;
/* BLOCO */

/* STATEMENT */

statements
: statement
| statements statement
;

statement
: if_statement 
| while_statement
| print_statement
| assign_statement
| var_declaration statement
| return_statement
| function_call
| SEMIC
;
/* STATEMENT */


/* IF ELSE */
if_statement
: IF OPENP condition CLOSEP if_continue
;

if_continue
: block /* if simples com bloco */
| statement /* if simples só c uma linha */
| block ELSE block /* if bloco else bloco */
| block ELSE statement /* if bloco else só linha */
| statement ELSE block /* if linha else bloco */
| statement ELSE statement /* if linha else linha */
;
/* IF ELSE */


function_call
: ID OPENP argument_list CLOSEP
;

argument_list
: 
| expression_list
;


/* WHILE */
while_statement
: WHILE OPENP condition CLOSEP block
;
/* WHILE */


/* FUNÇAO PRINT */
print_statement
: PRINT expression_list SEMIC
;

expression_list
: expression
| expression_list COMMA expression
;
/* FUNÇAO PRINT */

assign_statement
: ID ASSIGN expression SEMIC
;

return_statement
: RETURN expression SEMIC
| RETURN SEMIC
;


expression
: term 
| expression PLUS term 
| expression MINUS term 
| term LT term
| term GT term
| term LTE term
| term EQ term
| term NEQ term
| term GTE term
| expression ASSIGN expression
;

condition
: term 
| condition PLUS term 
| condition MINUS term 
| term LT term
| term GT term
| term LTE term
| term EQ term
| term NEQ term
| term GTE term
;

term
: term TIMES factor 
| term DIVIDE factor
| factor            
;

factor
: NUMBER   
| TRUE
| FALSE
| ID
| OPENP expression CLOSEP 
| function_call
;

%%

void yyerror(const char *s) {
   fprintf(stdout, "%s\n", s);
}