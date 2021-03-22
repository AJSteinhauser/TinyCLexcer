


%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "parser.tab.h" // generated via -d
	
%}

%option noyywrap
%option yylineno

%%	
"void"			|
"int"			|
"char"			|
"float"			|
"void*"         |
"int*"          |
"char*"         |
"float*"					{return TYPE;}

"include"					{return INCLUDE;}
"return"					{return RETURN;}
"if"						{return IF_STATEMENT;}
"else"						{return ELSE_STATEMENT;}
"for"						{return FOR_STATEMENT;}

[a-zA-Z_]+[a-zA-Z0-9_]*		{return IDENTIFIER;}
[-+]?[0-9]+					{return INT_VALUE;}
[-+]?[0-9]*\.?[0-9]+		{return FLOAT_VALUE;}
["].*["]					{return STRING;}
"=" 						{return ASSIGNMENT;}
"=="						{return EQUALS;}
">="						{return GREATER_THAN_EQUALS;}
['][.]['] 					{;}
"<="						{return LESS_THAN_EQUALS;}
"!="						{return NOT_EQUALS;}
"+" 						{;}
"-" 						{;}
"#"							{return HASHTAG;}
"<"							{return LEFT_TRI;}
">"							{return RIGHT_TRI;}
"*"							{;}
","							{return COMMA;}
"/" 						{;}
"|" 						{;}
";"							{return SEMI_COLON;}
"{"							{return OPEN_BRACKET;}
"}"							{return CLOSE_BRACKET;}
"("							{return OPEN_PAR;}
")"							{return CLOSE_PAR;}
"&"							{;}
"."							{return PERIOD;}
"%"							{;}
[ \t\n]

%%


