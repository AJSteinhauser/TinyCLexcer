


%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "parser.tab.h" // generated via -d

	int lineNum = 1;

	extern char* tokenString;
	extern int tokenInt;
	extern float tokenFloat;
	extern void yyerror(char *msg);

%}

%option noyywrap

%%	
"int"			|
"char"			|
"float"			|
"void*"         |
"int*"          |
"char*"         |
"float*"					{return TYPE;}

"void"						{return VOID;}
"include"					{return INCLUDE;}
"return"					{return RETURN;}
"if"						{return IF;}
"else"						{return ELSE;}
"while"						{return WHILE;}

[a-zA-Z_]+[a-zA-Z0-9_]*		{	
								
								yylval.ident = strdup(yytext);
								//yylval.ident = tokenString;
								tokenString = yylval.ident;
								return IDENTIFIER;}
[0-9]+						{	
								tokenString = strdup(yytext);
								return INT_VALUE;
							}
[0-9]*\.?[0-9]+				{
								tokenString = strdup(yytext);
								return FLOAT_VALUE;
							}
["].*["]					{
								tokenString = strdup(yytext);
								return STRING;
							}
"=" 						{return ASSIGNMENT;}
"=="						{return EQUALS;}
">="						{return GREATER_THAN_EQUALS;}
['][.]['] 					{return STRING;}
"<="						{return LESS_THAN_EQUALS;}
"!="						{return NOT_EQUALS;}
"+" 						{return PLUS;}
"-" 						{return MINUS;}
"#"							{return HASHTAG;}
"<"							{return LEFT_TRI;}
">"							{return RIGHT_TRI;}
"*"							{return MULTIPLY;}
","							{return COMMA;}
"/" 						{return DIVIDE;}
"&"							{return POINTER;}
";"							{return SEMI_COLON;}
"{"							{return OPEN_BRACKET;}
"}"							{return CLOSE_BRACKET;}
"("							{return OPEN_PAR;}
")"							{return CLOSE_PAR;}
"."							{return PERIOD;}
[ \t]
[\n]						{lineNum++;}
.							{yyerror("Invalid character ");}
%%



