%{
#include "y.tab.h"
%}

%%

[0-9]+ { yylval = atoi(yytext); return ID; }
"+"    { return '+'; }
"("    { return '('; }
")"    { return ')'; }
[ \t\n] ;
.      { yyerror("Invalid character"); }

%%

int yywrap() {
    return 1;
}