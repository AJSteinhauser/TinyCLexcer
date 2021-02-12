

#include <stdio.h>

extern int yylex();
extern int yylineno;
extern char* yyttext;


int main(void){

  int name_token, value_token;
  name_token = yylex();
  while (name_token){
    printf("%d\n",name_token);
    name_token = yylex();
  }
  return 0;
}

