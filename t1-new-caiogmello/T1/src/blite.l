%option noyywrap yylineno nodefault
%{

// noyywrap    - no need to deal with multiple input files
// yylineno    - variable to track line numbers 
// nodefault   - do not add a default rule at the end of the scanner 
//               that copies otherwise unmatched input to yyout.

#include "blite.tab.h"
%}

%%
"boolean"|"else"|"false"|"function"|"if"|"integer"|"print"|"return"|"string"|"true"|"void"|"while" {return KEY;}
\"([^\"\n])*\" {return STRING;}
"+"|"-"|"*"|"/"|"%"|"!"|"<"|">"|"="|":"|";"|","|"("|")"|"{"|"}" {return SYM;}
"<="|">="|"=="|"!="|"&&"|"||" {return SYMC;}
\/\/[^\r\n]* { }
[ \t\r\n] { }
[0-9]+ {return NUM;}
[a-zA-Z][a-zA-Z0-9_]* {return ID;}
. {return ERROR;}
%%

