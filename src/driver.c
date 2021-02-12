

#include <stdio.h>

extern int yylex();
extern int yylineno;
extern char* yyttext;
//extern FILE* yyin;

int main(void){

  //yyin = fopen("../sample_inputs.sample1.c","r");
  int ntoke;
  ntoke = yylex();
  printf("%d\n",ntoke);
  while (1){
    printf("%d\n",ntoke);
    ntoke = yylex();
  }
  return 0;
}

