%option noyywrap yylineno nodefault
%{

// noyywrap    - no need to deal with multiple input files
// yylineno    - variable to track line numbers 
// nodefault   - do not add a default rule at the end of the scanner 
//               that copies otherwise unmatched input to yyout.

#include "blite.tab.h"

%}

%%

%%

