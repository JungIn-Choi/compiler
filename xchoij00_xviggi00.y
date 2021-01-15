%{
#include <stdio.h>
#include <stdlib.h>
extern FILE *fp;
int yylex();
void yyerror(const char *s);

%}
	
%token INT SKIP IF THEN ELSE FI WHILE DO END

%token T_MAIN
%token T_INT
%token T_ID

%token TTYPE_INT
%token TTYPE_FLOAT
%token TTYPE_CHAR
%token TTYPE_DOUBLE
%token TTYPE_VOID
%token TTYPE_STRING

%token T_IF
%token T_ELSE
%token T_RETURN
%token T_VOID
%token T_WHILE
%token T_FOR
%token T_STRUCT
%token T_PRINTF

%token T_LB
%token T_RB
%token T_LP
%token T_RP

%token T_EXC
%token T_AST
%token T_DIV
%token T_ADD
%token T_MIN
%token T_LT
%token T_LET
%token T_GT
%token T_GET
%token T_EQ
%token T_DIF
%token T_AND
%token T_OR

%token T_ASSI
%token T_COM
%token T_DOT

%token NUM ID

%token T_PRINT T_READINT T_READSTRING T_LENGTH T_SUBSTR
%left	T_AST T_DIV T_ADD T_MIN T_LT T_GT T_LET T_GET T_EQ T_DIF T_AND T_OR

%%

start:	Function 
	| Declaration
	;

/* Declaration block */
Declaration: Type Assignment ';' 
	| Assignment ';'  	
	| FunctionCall ';' 	
	| ArrayUsage ';'	
	| Type ArrayUsage ';'   
	| StructStmt ';'	
	| error	
	;

/* Assignment block */
Assignment: ID '=' Assignment
	| ID '=' FunctionCall
	| ID '=' ArrayUsage
	| ArrayUsage '=' Assignment
	| ID ',' Assignment
	| NUM ',' Assignment
	| ID '+' Assignment
	| ID '-' Assignment
	| ID '*' Assignment
	| ID '/' Assignment	
	| NUM '+' Assignment
	| NUM '-' Assignment
	| NUM '*' Assignment
	| NUM '/' Assignment
	| '\'' Assignment '\''	
	| '(' Assignment ')'
	| '-' '(' Assignment ')'
	| '-' NUM
	| '-' ID
	|   NUM
	|   ID
	;

/* Function Call Block */
FunctionCall : ID'('')'
	| ID'('Assignment')'
	;

/* Array Usage */
ArrayUsage : ID'['Assignment']'
	;

/* Function block */
Function: Type ID '(' ArgListOpt ')' CompoundStmt 
	;
ArgListOpt: ArgList
	|
	;
ArgList:  ArgList ',' Arg
	| Arg
	;
Arg:	Type ID
	;
CompoundStmt:	'{' StmtList '}'
	;
StmtList:	StmtList Stmt
	|
	;
Stmt:	WhileStmt
	| Declaration
	| ForStmt
	| IfStmt
	| PrintFunc
	| ';'
	;

/* Type Identifier block */
Type:	TTYPE_INT 
	| TTYPE_FLOAT
	| TTYPE_CHAR
	| TTYPE_DOUBLE
	| TTYPE_VOID 
	;

/* Loop Blocks */ 
WhileStmt: T_WHILE '(' Expr ')' Stmt  
	| T_WHILE '(' Expr ')' CompoundStmt 
	;

/* For Block */
ForStmt: T_FOR '(' Expr ';' Expr ';' Expr ')' Stmt 
       | T_FOR '(' Expr ';' Expr ';' Expr ')' CompoundStmt 
       | T_FOR '(' Expr ')' Stmt 
       | T_FOR '(' Expr ')' CompoundStmt 
	;

/* IfStmt Block */
IfStmt : T_IF '(' Expr ')' 
	 	Stmt 
	;

/* Struct Statement */
StructStmt : T_STRUCT ID '{' Type Assignment '}'  
	;

/* Print Function */
PrintFunc : T_PRINTF '(' Expr ')' ';'
	;

/*Expression Block*/
Expr:	
	| Expr T_DIV Expr 
	| Expr T_ADD Expr 
	| Expr T_MIN Expr 
	| Expr T_LT Expr 
	| Expr T_LET Expr
	| Expr T_GT Expr
	| Expr T_GET Expr
	| Expr T_EQ Expr
	| Expr T_DIF Expr
	| Expr T_AND Expr
	| Expr T_OR Expr
	| Assignment
	| ArrayUsage
	;
%%
#include"lex.yy.c"
#include<ctype.h>
int count=0;

int main(int argc, char *argv[])
{
	yyin = fopen(argv[1], "r");
	
   if(!yyparse())
		printf("\nParsing complete\n");
	else
		printf("\nParsing failed\n");
	
	fclose(yyin);
    return 0;
}