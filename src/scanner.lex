


%{
  int token_count = 0;	
	
%}

%option nounput yylineno

%%
[a-zA-Z_][a-zA-Z0-9_]*	token_count++;
[0-9]*	token_count++;
[ \t\n]	;
["].*["]	token_count++;
"=" token_count++;
"=="	token_count++;
">="	token_count++;
['][.]['] token_count++;
"<="	token_count++;
"!="	token_count++;
"+" token_count++;
"-" token_count++;
"#"	token_count++;
"<"	token_count++;
">"	token_count++;
"*"	token_count++;
","	token_count++;
"/" token_count++;
"|" token_count++;
";"	token_count++;
"{"	token_count++;
"}"	token_count++;
"("	token_count++;
")"	token_count++;
"&"	token_count++;
"."	token_count++;
"%"	token_count++;
%%


int yywrap(void){
  return 1;
}

int main(int argc, char* argv[]) {
    FILE *fh;

    if (argc == 2 && (fh = fopen(argv[1], "r")))
        yyin = fh;
    yylex();
    printf("\nTokens in %s: %d\n",argv[1],token_count);
    return 0;
}
