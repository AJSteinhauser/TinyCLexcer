
%{
#include <stdio.h>
#include <stdlib.h>

#define YYERROR_VERBOSE 1

void yyerror(const char *msg);
extern int yylex();
extern int lineNum;
extern char* yytext;


%}

%union {
    float f;
    int i;
    char ch;
    char* ident;
}

%token EQUALS LESS_THAN_EQUALS GREATER_THAN_EQUALS NOT_EQUALS
%token COMMA ASSIGNMENT SEMI_COLON PERIOD POINTER
%token OPEN_BRACKET CLOSE_BRACKET OPEN_PAR CLOSE_PAR
%token LEFT_TRI RIGHT_TRI HASHTAG

%token INCLUDE RETURN VOID
%token IF ELSE FOR WHILE
%token PLUS MINUS MULTIPLY DIVIDE

%token <f> FLOAT_VALUE
%token <i> INT_VALUE
%token <ch> CHAR_VALUE
%token <ident> IDENTIFIER TYPE STRING

%start PROGRAM


%%

CONSTANT : FLOAT_VALUE
		 | STRING
		 | CHAR_VALUE
		 | INT_VALUE
		 ;

PRIMARY_EXPRESSION : CONSTANT
				   | IDENTIFIER
				   | FUNCTION_CALL
				   | OPEN_PAR EXPRESSION CLOSE_PAR
				   ;

FUNCTION_ARG_LIST : POINTER IDENTIFIER
				  | EXPRESSION
				  | EXPRESSION COMMA FUNCTION_ARG_LIST
				  ;

FUNCTION_CALL : IDENTIFIER OPEN_PAR FUNCTION_ARG_LIST CLOSE_PAR
			  | IDENTIFIER OPEN_PAR CLOSE_PAR
			  ;

UNARY_EXPRESSION : PRIMARY_EXPRESSION
				 | PLUS UNARY_EXPRESSION
				 | MINUS UNARY_EXPRESSION

MULTIPLICATIVE_EXPRESSION : UNARY_EXPRESSION
						  | MULTIPLICATIVE_EXPRESSION MULTIPLY UNARY_EXPRESSION
						  | MULTIPLICATIVE_EXPRESSION DIVIDE UNARY_EXPRESSION
						  ;

ADDITIVE_EXPRESSION : MULTIPLICATIVE_EXPRESSION
					| ADDITIVE_EXPRESSION PLUS ADDITIVE_EXPRESSION
					| ADDITIVE_EXPRESSION MINUS ADDITIVE_EXPRESSION
					;

COMPARISON_EXPRESSION : ADDITIVE_EXPRESSION
					  | ADDITIVE_EXPRESSION LEFT_TRI ADDITIVE_EXPRESSION
					  | ADDITIVE_EXPRESSION LESS_THAN_EQUALS ADDITIVE_EXPRESSION
					  | ADDITIVE_EXPRESSION RIGHT_TRI ADDITIVE_EXPRESSION
					  | ADDITIVE_EXPRESSION GREATER_THAN_EQUALS ADDITIVE_EXPRESSION
					  ;

EXPRESSION : COMPARISON_EXPRESSION
		   | COMPARISON_EXPRESSION EQUALS COMPARISON_EXPRESSION
		   | COMPARISON_EXPRESSION NOT_EQUALS COMPARISON_EXPRESSION
		   ;

ASSIGNMENT_STATEMENT : IDENTIFIER ASSIGNMENT EXPRESSION SEMI_COLON
					 | TYPE IDENTIFIER ASSIGNMENT EXPRESSION SEMI_COLON
					 ;

IF_STATEMENT : IF OPEN_PAR EXPRESSION CLOSE_PAR STATEMENT
			 | IF OPEN_PAR EXPRESSION CLOSE_PAR STATEMENT ELSE STATEMENT
			 ;

WHILE_STATMENT : WHILE OPEN_PAR EXPRESSION CLOSE_PAR STATEMENT
			   ;

RETURN_STATEMENT : RETURN SEMI_COLON
				 | RETURN EXPRESSION SEMI_COLON
				 ;

STATEMENT_LIST :
			   | STATEMENT STATEMENT_LIST
			   ;

BLOCK_STATEMENT : OPEN_BRACKET STATEMENT_LIST CLOSE_BRACKET
				;

EMPTY_STATEMENT : SEMI_COLON
				;

STATEMENT : ASSIGNMENT_STATEMENT
		  | IF_STATEMENT
		  | WHILE_STATMENT
		  | RETURN_STATEMENT
		  | BLOCK_STATEMENT
		  | EMPTY_STATEMENT  
		  | FUNCTION_CALL
		  ;

RETURN_TYPE : VOID 
			| TYPE
			;

FUNCTION_PARAMETER : TYPE IDENTIFIER
				   ;

FUNCTION_PARAMETER_LIST : 
						| FUNCTION_PARAMETER
						| FUNCTION_PARAMETER COMMA FUNCTION_PARAMETER_LIST
						;

VARIABLE_DEFINITION : TYPE IDENTIFIER ASSIGNMENT CONSTANT SEMI_COLON
					| TYPE IDENTIFIER ASSIGNMENT IDENTIFIER
					| IDENTIFIER ASSIGNMENT IDENTIFIER SEMI_COLON
					| FUNCTION_CALL
					;

VARIABLE_DEFINITION_LIST : 
						 | VARIABLE_DEFINITION VARIABLE_DEFINITION_LIST
						 ;

FUNCTION_STATEMENT_LIST : 
						| RETURN_STATEMENT
						| STATEMENT FUNCTION_STATEMENT_LIST
						;

FUNCTION_BODY : OPEN_BRACKET VARIABLE_DEFINITION_LIST FUNCTION_STATEMENT_LIST CLOSE_BRACKET
			  ;

FUNCTION_DEFINITION : RETURN_TYPE IDENTIFIER OPEN_PAR FUNCTION_PARAMETER_LIST CLOSE_PAR  FUNCTION_BODY 
					| RETURN_TYPE IDENTIFIER OPEN_PAR VOID CLOSE_PAR FUNCTION_BODY
					;

FUNCTION_DEFINITION_LIST : 
						 | FUNCTION_DEFINITION FUNCTION_DEFINITION_LIST
						 ;

HEADER : HASHTAG INCLUDE LEFT_TRI IDENTIFIER PERIOD IDENTIFIER RIGHT_TRI
	   | HASHTAG INCLUDE STRING
	   | HEADER HEADER
	   ;


PROGRAM	: FUNCTION_DEFINITION_LIST
		| HEADER FUNCTION_DEFINITION_LIST 
		;

%%

void yyerror(char *msg){
    fprintf(stderr,"Error on line #%d Token:[ %s ] : %s\n",lineNum,yytext,msg);
    exit(1);
};

int main(void){
	#ifdef YYDEBUG
	  //yydebug = 1;
	#endif
    yyparse();
    printf("%s\n", "No Syntax Errors Detected!");
    return 0;
};