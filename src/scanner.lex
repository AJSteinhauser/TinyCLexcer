


%{
	int token_count = 0;	

%}

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


int yywrap(){
	return 1;
}
