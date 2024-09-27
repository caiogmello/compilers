%{
#include <stdio.h>
#include <stdlib.h>

/* interface to the lexer */
 
extern int yylineno; /* from lexer */
void yyerror(char *s, ...);
int yylex();
%}

/* declare tokens */ 
%token NUMBER
%token ERROR
%token EOL
%token PLUS
%token MINUS
%token TIMES
%token DIV
%token OPENP
%token CLOSEP

%start program

%%
program
: expr EOL { return 1; }
;

/* resposta aqui */

%%

