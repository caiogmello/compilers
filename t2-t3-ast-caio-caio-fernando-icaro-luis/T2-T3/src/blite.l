%option noyywrap yylineno nodefault
%{
#include "blite.tab.h"
%}

%%

"//".*                      { /* no action */ }

void            { return VOID; }
/* etc */

/* ID pattern */ { return ID; }
[0-9]+           { return NUMBER; }

"+"		 { return PLUS; }
/* etc. */

"<="       	 { return LTE; }
/* etc */

"("   		 { return OPENP; }
/* etc */

[ \t\r\n]        { /* no action */ }
.                { return ERROR; }

%%

