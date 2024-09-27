%{
#include <stdio.h>
#include <stdlib.h>
%}

%token ID

%%

start: expr { printf("Input is syntactically correct.\n"); };

expr: expr '+' term | term;

term: ID '(' expr ')' | ID;

%%

extern int yylex();
void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}

int main() {
    return yyparse();
}
