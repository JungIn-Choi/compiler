id 		[a-zA-Z]
integerliteral	[0-9]

%%
[ \t]		;
[ \n]   { yylineno = yylineno + 1;}

"int" return(TTYPE_INT);
"float" return(TTYPE_FLOAT);
"char" return(TTYPE_CHAR);
"double" return(TTYPE_DOUBLE);
"void" return(TTYPE_VOID);
"string" return(TTYPE_STRING);

"if" return(T_IF);
"else" return(T_ELSE);
"return" return(T_RETURN);
"while" return(T_WHILE);
"for" return(T_FOR);
"struct" return(T_STRUCT);
"print" return(T_PRINTF);

^"#include ".+ ;

"/"	return(T_DIV);
"+"	return(T_ADD);
"-"	return(T_MIN);
"<"	return(T_LT);
"<="	return(T_LET);
">"	return(T_GT);
">="	return(T_GET);
"=="	return(T_EQ);
"!="	return(T_DIF);
"&&"	return(T_AND);
"||"	return(T_OR);

","	return(T_COM);
"."     return(T_DOT);

{integerliteral}+       return NUM;
{id}({id}|{integerliteral})* return ID;


\/\/.* ;
\/\*(.*\n)*.*\*\/ ;
.       return yytext[0];
%%
