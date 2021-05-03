
%{
#include <stdio.h>
#include <stdlib.h>
#include "codeGen.h"

#define YYERROR_VERBOSE 	 1

void yyerror(char *msg);
extern int yylex();
extern int lineNum;
extern char* yytext;



%}



%start PROGRAM

%union {
    float f;
    int i;
    char ch;
    char* ident;

	struct treeNode *bVal;
	//BINARY_TREE bVal;
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

%type <bVal> PROGRAM FUNCTION_DEFINITION_LIST FUNCTION_DEFINITION 
			FUNCTION_BODY FUNCTION_STATEMENT_LIST VARIABLE_DEFINITION_LIST 
			VARIABLE_DEFINITION FUNCTION_PARAMETER_LIST FUNCTION_PARAMETER 
			RETURN_TYPE STATEMENT EMPTY_STATEMENT BLOCK_STATEMENT STATEMENT_LIST 
			RETURN_STATEMENT WHILE_STATMENT IF_STATEMENT ASSIGNMENT_STATEMENT 
			EXPRESSION COMPARISON_EXPRESSION ADDITIVE_EXPRESSION MULTIPLICATIVE_EXPRESSION 
			UNARY_EXPRESSION FUNCTION_CALL FUNCTION_ARG_LIST PRIMARY_EXPRESSION CONSTANT

%%

CONSTANT : FLOAT_VALUE {$$ = newNode(addDataObject_float(yytext), CONSTANT, NULL , NULL, NULL);}
		 | STRING {$$ = newNode(addDataObject_str(yytext), CONSTANT, NULL , NULL, NULL); }
		 | CHAR_VALUE {$$ = newNode(-1, CONSTANT, NULL , NULL, NULL);}
		 | INT_VALUE {$$ = newNode(addDataObject_int(yytext), CONSTANT, NULL , NULL, NULL);}
		 ;

PRIMARY_EXPRESSION : CONSTANT {$$ = newNode(-1, PRIMARY_EXPRESSION, $1, NULL, NULL);}
				   | IDENTIFIER {$$ = newNode(-1, PRIMARY_EXPRESSION, NULL, NULL, NULL);}
				   | FUNCTION_CALL {$$ = newNode(-1, PRIMARY_EXPRESSION, $1, NULL, NULL);}
				   | OPEN_PAR EXPRESSION CLOSE_PAR {$$ = newNode(-1, PRIMARY_EXPRESSION, $2, NULL, NULL);}
				   ;

FUNCTION_ARG_LIST : POINTER IDENTIFIER {$$ = newNode(-1, FUNCTION_ARG_LIST, NULL, NULL, NULL);}
				  | EXPRESSION {$$ = newNode(-1, FUNCTION_ARG_LIST, $1, NULL, NULL);}
				  | EXPRESSION COMMA FUNCTION_ARG_LIST {$$ = newNode(-1, FUNCTION_ARG_LIST, $1, $3, NULL );}
				  ;

FUNCTION_CALL : IDENTIFIER OPEN_PAR FUNCTION_ARG_LIST CLOSE_PAR {$$ = newNode(-1, FUNCTION_CALL, $3,NULL,NULL);}
			  | IDENTIFIER OPEN_PAR CLOSE_PAR {$$ = newNode(-1, FUNCTION_CALL, NULL, NULL, NULL);}
			  ;

UNARY_EXPRESSION : PRIMARY_EXPRESSION {$$ = newNode(0, UNARY_EXPRESSION, $1, NULL, NULL);}
				 | PLUS UNARY_EXPRESSION {$$ = newNode(1, UNARY_EXPRESSION, $2, NULL, NULL);}
				 | MINUS UNARY_EXPRESSION {$$ = newNode(2, UNARY_EXPRESSION, $2, NULL,NULL);}

MULTIPLICATIVE_EXPRESSION : UNARY_EXPRESSION {$$ = newNode(0, MULTIPLICATIVE_EXPRESSION, $1, NULL, NULL);}
						  | MULTIPLICATIVE_EXPRESSION MULTIPLY UNARY_EXPRESSION {$$ = newNode(1, MULTIPLICATIVE_EXPRESSION, $1, $3,NULL);}
						  | MULTIPLICATIVE_EXPRESSION DIVIDE UNARY_EXPRESSION {$$ = newNode(2, MULTIPLICATIVE_EXPRESSION, $1, $3,NULL);}
						  ;

ADDITIVE_EXPRESSION : MULTIPLICATIVE_EXPRESSION {$$ = newNode(0, ADDITIVE_EXPRESSION, $1, NULL,NULL);}
					| ADDITIVE_EXPRESSION PLUS ADDITIVE_EXPRESSION {$$ = newNode(1, ADDITIVE_EXPRESSION, $1, $3, NULL);}
					| ADDITIVE_EXPRESSION MINUS ADDITIVE_EXPRESSION {$$ = newNode(2, ADDITIVE_EXPRESSION, $1, $3, NULL);}
					;

COMPARISON_EXPRESSION : ADDITIVE_EXPRESSION {$$ = newNode(0, COMPARISON_EXPRESSION, $1, NULL,NULL);}
					  | ADDITIVE_EXPRESSION LEFT_TRI ADDITIVE_EXPRESSION {$$ = newNode(1, COMPARISON_EXPRESSION, $1, $3,NULL);}
					  | ADDITIVE_EXPRESSION LESS_THAN_EQUALS ADDITIVE_EXPRESSION {$$ = newNode(2, COMPARISON_EXPRESSION, $1, $3,NULL);}
					  | ADDITIVE_EXPRESSION RIGHT_TRI ADDITIVE_EXPRESSION {$$ = newNode(3, COMPARISON_EXPRESSION, $1, $3,NULL);}
					  | ADDITIVE_EXPRESSION GREATER_THAN_EQUALS ADDITIVE_EXPRESSION {$$ = newNode(4, COMPARISON_EXPRESSION, $1, $3,NULL);}
					  ;

EXPRESSION : COMPARISON_EXPRESSION {$$ = newNode(0, EXPRESSION, $1, NULL,NULL);}
		   | COMPARISON_EXPRESSION EQUALS COMPARISON_EXPRESSION {$$ = newNode(1, EXPRESSION, $1, $3,NULL);}
		   | COMPARISON_EXPRESSION NOT_EQUALS COMPARISON_EXPRESSION {$$ = newNode(2, EXPRESSION, $1, $3 ,NULL);}
		   ;

ASSIGNMENT_STATEMENT : IDENTIFIER ASSIGNMENT EXPRESSION SEMI_COLON {$$ = newNode(-1, ASSIGNMENT_STATEMENT, $3,NULL,NULL);}
					 | TYPE IDENTIFIER ASSIGNMENT EXPRESSION SEMI_COLON {$$ = newNode(-1, ASSIGNMENT_STATEMENT,$4,NULL,NULL);}
					 ;

IF_STATEMENT : IF OPEN_PAR EXPRESSION CLOSE_PAR STATEMENT {$$ = newNode(-1, IF_STATEMENT, $3, $5,NULL);}
			 | IF OPEN_PAR EXPRESSION CLOSE_PAR STATEMENT ELSE STATEMENT {$$ = newNode(-1, IF_STATEMENT, $3, $5, $7);}
			 ;

WHILE_STATMENT : WHILE OPEN_PAR EXPRESSION CLOSE_PAR STATEMENT {$$ = newNode(-1, WHILE_STATMENT, $3, $5,NULL);}
			   ;

RETURN_STATEMENT : RETURN SEMI_COLON {$$ = newNode(-1, RETURN_STATEMENT, NULL,NULL,NULL);}
				 | RETURN EXPRESSION SEMI_COLON {$$ = newNode(-1, RETURN_STATEMENT, $2,NULL,NULL);}
				 ;

STATEMENT_LIST :
			   | STATEMENT STATEMENT_LIST {$$ = newNode(-1, STATEMENT_LIST, $1,$2,NULL);}
			   ;

BLOCK_STATEMENT : OPEN_BRACKET STATEMENT_LIST CLOSE_BRACKET {$$ = newNode(-1, BLOCK_STATEMENT, $2,NULL,NULL);}
				;

EMPTY_STATEMENT : SEMI_COLON {$$ = newNode(-1, EMPTY_STATEMENT, NULL,NULL,NULL);}
				;

STATEMENT : ASSIGNMENT_STATEMENT {$$ = newNode(-1, STATEMENT,$1,NULL,NULL);}
		  | IF_STATEMENT {$$ = newNode(-1, STATEMENT,$1,NULL,NULL);}
		  | WHILE_STATMENT {$$ = newNode(-1, STATEMENT,$1,NULL,NULL);}
		  | RETURN_STATEMENT {$$ = newNode(-1, STATEMENT,$1,NULL,NULL);}
		  | BLOCK_STATEMENT {$$ = newNode(-1, STATEMENT,$1,NULL,NULL);}
		  | EMPTY_STATEMENT {$$ = newNode(-1, STATEMENT,$1,NULL,NULL);}
		  | FUNCTION_CALL {$$ = newNode(-1, STATEMENT,$1,NULL,NULL);}
		  ;

RETURN_TYPE : VOID {$$ = newNode(-1, RETURN_TYPE,NULL,NULL,NULL);}
			| TYPE {$$ = newNode(-1, RETURN_TYPE,NULL,NULL,NULL);}
			;

FUNCTION_PARAMETER : TYPE IDENTIFIER {$$ = newNode(-1, FUNCTION_PARAMETER,NULL,NULL,NULL);}
				   ;

FUNCTION_PARAMETER_LIST : 
						| FUNCTION_PARAMETER {$$ = newNode(-1, FUNCTION_PARAMETER_LIST,$1,NULL,NULL);}
						| FUNCTION_PARAMETER COMMA FUNCTION_PARAMETER_LIST {$$ = newNode(-1, FUNCTION_PARAMETER_LIST,$1,$3,NULL);}
						;

VARIABLE_DEFINITION : TYPE IDENTIFIER ASSIGNMENT CONSTANT SEMI_COLON {$$ = newNode(-1, VARIABLE_DEFINITION,NULL,NULL,NULL);} 
					| TYPE IDENTIFIER ASSIGNMENT IDENTIFIER {$$ = newNode(-1, VARIABLE_DEFINITION,NULL,NULL,NULL);} 
					| IDENTIFIER ASSIGNMENT IDENTIFIER SEMI_COLON {$$ = newNode(-1, VARIABLE_DEFINITION,NULL,NULL,NULL);} 
					| FUNCTION_CALL {$$ = newNode(-1, VARIABLE_DEFINITION,$1,NULL, NULL);} 
					;

VARIABLE_DEFINITION_LIST : 
						 | VARIABLE_DEFINITION VARIABLE_DEFINITION_LIST {$$ = newNode(-1, VARIABLE_DEFINITION_LIST,$1,$2, NULL);}  
						 ;

FUNCTION_STATEMENT_LIST : 
						| RETURN_STATEMENT	{$$ = newNode(-1, FUNCTION_STATEMENT_LIST,$1,NULL, NULL);}
						| STATEMENT FUNCTION_STATEMENT_LIST {$$ = newNode(-1, FUNCTION_STATEMENT_LIST,$1,$2, NULL);}
						;

FUNCTION_BODY : OPEN_BRACKET VARIABLE_DEFINITION_LIST FUNCTION_STATEMENT_LIST CLOSE_BRACKET {$$ = newNode(-1, FUNCTION_BODY,$2,$3,NULL);}
			  ;

FUNCTION_DEFINITION : RETURN_TYPE IDENTIFIER OPEN_PAR FUNCTION_PARAMETER_LIST CLOSE_PAR  FUNCTION_BODY {$$ = newNode(addSymbol($2), FUNCTION_DEFINITION,$4,$6,NULL); printf("%s\tTESTING\n",yylval.ident);}
					| RETURN_TYPE IDENTIFIER OPEN_PAR VOID CLOSE_PAR FUNCTION_BODY {$$ = newNode(addSymbol($2), FUNCTION_DEFINITION,NULL,$6, NULL); printf("%s\tTESTING, %s\n",yylval.ident, $2);}
					;

FUNCTION_DEFINITION_LIST : 
						 | FUNCTION_DEFINITION FUNCTION_DEFINITION_LIST {$$ = newNode(-1, FUNCTION_DEFINITION_LIST,$1,$2, NULL);}
						 ;

HEADER : HASHTAG INCLUDE LEFT_TRI IDENTIFIER PERIOD IDENTIFIER RIGHT_TRI
	   | HASHTAG INCLUDE STRING
	   | HEADER HEADER
	   ;


PROGRAM	: FUNCTION_DEFINITION_LIST	{BINARY_TREE parseTree; parseTree = newNode(-1,PROGRAM,$1, NULL, NULL);  }
		| HEADER FUNCTION_DEFINITION_LIST {BINARY_TREE parseTree; parseTree = newNode(-1,PROGRAM,$2, NULL, NULL); gen_everything(parseTree);}
		;



%%

BINARY_TREE newNode(int iValue, int identifier, BINARY_TREE b1, BINARY_TREE b2, BINARY_TREE b3){
	BINARY_TREE n;
	n = (BINARY_TREE)malloc(sizeof(TREE_NODE));
	n->item = iValue;
	n->ident = identifier;
	n->left = b1;
	n->middle = b2;
	n->right = b3;
	return n;
}

void print_tree(BINARY_TREE b){
	if (b == NULL) return;
	printf("Item %d ", b->item);
	printf("Node identifier: %d\n", b->ident);
	print_tree(b->right);
	print_tree(b->middle);
	print_tree(b->left);
}

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
	//printAllSymbols();
    return 0;
};
