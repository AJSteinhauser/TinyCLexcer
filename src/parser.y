
%{
#include <stdio.h>
#include <stdlib.h>


void yyerror(char *msg);

extern int yylex();

%}

%union {
    float f;
    int i;
    char ch;
}


%token <f> FLOAT
%token <i> INT
%token <ch> CHAR

%%



%%



void yyerror(char *msg){
    fprintf(stderr,"%s\n",msg);
    exit(1);
};

int main(){
    yyparse();
    return 0;
};