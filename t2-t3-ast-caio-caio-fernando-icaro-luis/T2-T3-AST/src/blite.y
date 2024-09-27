%{
#include <stdio.h>
#include <stdlib.h>
#include "decl.h"
#include "param_list.h"
#include "expr.h"
#include "type.h"
#include "stmt.h"

extern int yylineno;
void yyerror(const char *);
extern int yylex();

struct decl *parser_result;

%}

%union {
   int d;
   char *name;
   struct expr *expr;
   struct stmt *stmt;
   struct decl *decl;
   struct type *type;
   struct param_list *param;
}

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
%token <name> ID
%token <d> NUMBER
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


%type <expr> factor expression term condition function_call argument_list expression_list var
%type <stmt> expression_statement statement statements if_statement while_statement print_statement  return_statement block 
%type <decl> local_declarations declaration declarations func_declaration var_declaration program
%type <param> parameter params param_list 
%type <type> type void_type

%%

program
: declarations { parser_result = $1; $$ = $1;}
; 


declarations
: declaration { $$ = $1;}
| declarations declaration { $$ = insert_decl($1, $2); }
;

declaration
: func_declaration { $$ = $1; }
| var_declaration { $$ = $1; }
;

type
: INT { $$ = type_create(TYPE_INTEGER,0,0); }
| BOOL { $$ = type_create(TYPE_BOOLEAN,0,0); }
;

void_type
: VOID { $$ = type_create(TYPE_VOID,0,0); }

func_declaration
: ID COLON FUNCTION type OPENP params CLOSEP ASSIGN block { $$ = func_decl_create($1, $4, $6, $9); }
| ID COLON FUNCTION void_type OPENP params CLOSEP ASSIGN block { $$ = func_decl_create($1, $4, $6, $9); }
;


/* PARAMETRO DE FUNCAO */
params
: /* empty */ { $$ = (struct param_list *) 0; }
| param_list { $$ = $1; }
;

param_list
: parameter { $$ = $1;}
| param_list COMMA parameter { $$ = insert_param($1, $3);}
;

parameter
: ID COLON type { $$ = param_create($1, $3);}
;
/* PARAMETRO DE FUNCAO */

local_declarations
: var_declaration { $$ = $1; }
| local_declarations var_declaration { $$ = insert_decl($1, $2); }
;


/* VARIAVEIS */
var_declaration 
: ID COLON type SEMIC { $$ = var_decl_create($1, $3, 0); }
| ID COLON type ASSIGN expression SEMIC { $$ = var_decl_create($1, $3, $5); }
;
/* VARIAVEIS */


/* BLOCO */
block
: OPENB local_declarations statements CLOSEB { $$ = compound_stmt_create(STMT_BLOCK, $2, $3); }
| OPENB statements CLOSEB { $$ = stmt_create(STMT_BLOCK, 0, 0, 0, 0,$2,0,0); }
;
/* BLOCO */

/* STATEMENT */

statements
: statement { $$ = $1;}
| statements statement { $$ = insert_stmt($1, $2); }
;

statement
: if_statement { $$ = $1;}
| while_statement { $$ = $1;}
| print_statement { $$ = $1;}
| return_statement { $$ = $1;}
| block { $$ = $1;}
| expression_statement  { $$ = $1;}
;
/* STATEMENT */


expression_statement
: expression SEMIC { $$ = stmt_create(STMT_EXPR, 0, 0, $1, 0,0,0,0);}
;

/* IF ELSE */
if_statement
: IF OPENP condition CLOSEP statement { $$ = if_create($3, $5);}
| IF OPENP condition CLOSEP statement ELSE statement { $$ = if_else_create($3, $5, $7);}
/* IF ELSE */


function_call
: ID OPENP argument_list CLOSEP { $$ = expr_create_call($1, $3); }
;

argument_list
: { $$ = (struct expr *) 0; }
| expression_list { $$ = $1;}
;


/* WHILE */
while_statement
: WHILE OPENP condition CLOSEP block { $$ = while_create($3, $5);}
;
/* WHILE */

var
: ID { $$ = expr_create_var($1); }
;


/* FUNÇAO PRINT */
print_statement
: PRINT expression_list SEMIC { $$ = print_stmt_create($2);}
;

expression_list
: expression { $$ = expr_create_arg($1,0);}
| expression_list COMMA expression { $$ = expr_create_arg($3,$1);}
;
/* FUNÇAO PRINT */

return_statement
: RETURN expression SEMIC { $$ = stmt_create(STMT_RETURN,0,0,$2,0,0,0,0); }
| RETURN SEMIC { $$ = stmt_create(STMT_RETURN,0,0,0,0,0,0,0); }
;


expression
: term { $$ = $1;}
| expression PLUS term { $$ = expr_create(EXPR_ADD, $1, $3);}
| expression MINUS term  { $$ = expr_create(EXPR_SUB, $1, $3); }
| term LT term { $$ = expr_create(EXPR_LT, $1, $3); }
| term GT term { $$ = expr_create(EXPR_GT, $1, $3); }
| term LTE term { $$ = expr_create(EXPR_LTEQ, $1, $3); }
| term EQ term { $$ = expr_create(EXPR_EQ, $1, $3); }
| term NEQ term { $$ = expr_create(EXPR_NEQ, $1, $3); }
| term GTE term { $$ = expr_create(EXPR_GTEQ, $1, $3); }
| var ASSIGN expression { $$ = expr_create(EXPR_ASSIGN, $1, $3); }
;

condition
: term { $$ = $1;}
| condition PLUS term { $$ = expr_create(EXPR_ADD, $1, $3);}
| condition MINUS term  { $$ = expr_create(EXPR_SUB, $1, $3); }
| term LT term { $$ = expr_create(EXPR_LT, $1, $3); }
| term GT term { $$ = expr_create(EXPR_GT, $1, $3); }
| term LTE term { $$ = expr_create(EXPR_LTEQ, $1, $3); }
| term EQ term { $$ = expr_create(EXPR_EQ, $1, $3); }
| term NEQ term { $$ = expr_create(EXPR_NEQ, $1, $3); }
| term GTE term { $$ = expr_create(EXPR_GTEQ, $1, $3); }
;

term
: term TIMES factor { $$ = expr_create(EXPR_MUL, $1, $3); }
| term DIVIDE factor { $$ = expr_create(EXPR_DIV, $1, $3); }
| factor { $$ = $1; }  
;

factor
: NUMBER { $$ = create_integer_literal($1); }
| TRUE { $$ = create_boolean_literal(1); }
| FALSE { $$ = create_boolean_literal(0); }
| var { $$ = $1; }
| OPENP expression CLOSEP { $$ = $2;}
| function_call  { $$ = $1;}
;

%%

void yyerror(const char *s) {
   fprintf(stdout, "%s\n", s);
}

