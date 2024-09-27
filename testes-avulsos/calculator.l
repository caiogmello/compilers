%{
    int line_count = 1;
%}
%%
"+" { printf("Line %d, PLUS\n", line_count); }
"-" { printf("Line %d, MINUS\n", line_count); }
"*" { printf("Line %d, TIMES\n", line_count);}
"/" { printf("Line %d, DIVIDE\n", line_count); }
"|" { printf("Line %d, ABS\n", line_count); }
[0-9]+ { printf("Line %d, NUMBER %s\n", line_count, yytext); }
\n { line_count++; printf("NEWLINE\n"); }
[ \t] { }
. { printf("Line %d, Mystery character %s\n", line_count, yytext); }
%%