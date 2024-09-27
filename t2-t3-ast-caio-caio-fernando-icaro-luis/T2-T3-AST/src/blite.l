%option noyywrap yylineno nodefault
%{
#include "blite.tab.h" 
%}

%%

\/\/[^\r\n]*  { /* no action */ }

"void"            { return VOID; }
"integer"         { return INT; }
"boolean"         { return BOOL; }
"if"              { return IF; }
"else"            { return ELSE; }
"while"           { return WHILE; }
"return"          { return RETURN; }
"true"            { return TRUE; }
"false"           { return FALSE; }
"function"        { return FUNCTION; }
"print"           { return PRINT; }

[a-zA-Z][a-zA-Z0-9_]* { yylval.name = strdup(yytext) ; return ID; }
[0-9]+           { yylval.d = atoi(yytext); return NUMBER;  }

"+"		 { return PLUS; }
"-"		 { return MINUS; }
"*"		 { return TIMES; }
"/"		 { return DIVIDE; }
"="		 { return ASSIGN; }
"<"      { return LT; }
">"      { return GT; }

"<="       	 { return LTE; } 
"=="       	 { return EQ; } 
"!="       	 { return NEQ; }
">="       	 { return GTE; }

"("   		 { return OPENP; }
")"          { return CLOSEP; }
":"          { return COLON; }
";"          { return SEMIC; }
","          { return COMMA; }
"{"          { return OPENB; }
"}"          { return CLOSEB; }
"\""         { return QUOTE; }

[ \t\r\n]        { /* no action */ }

.                { return ERROR; }

%%

