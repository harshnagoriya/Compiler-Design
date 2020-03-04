DIGIT [0-9]
ID [a-zA-Z][a-zA-Z0-9]*



%%

"**"({ID}[ \n\t]*{ID}[ \n\t]*)*"**"	{printf("Multiline comment: %s\n",yytext);}

{DIGIT}+	{printf("Integer: %s\n",yytext);}

{DIGIT}*"."{DIGIT}+	{printf("Float: %s\n",yytext);}

"if"|"for"|"while"|"do"|"exit"|"else"|"case"|"switch"|"until"	{printf("Keyword: %s\n",yytext);}

{ID}	{printf("Identifier: %s\n",yytext);}

"***"[a-zA-Z0-9_.,"]*	{printf("Single line comment: %s\n",yytext);}

[ \t]	{printf("WhiteSpace: %s\n",yytext);}

"'"[a-zA-Z0-9]*"'"	{printf("String constant: %s\n");}

"("|")"|"{"|"}"|";"|","|"["|"]"	{printf("Punctuation: %s\n",yytext);}

"="|"<>"|"=="|"!="|"<="|">="|"+"|"-"|"*"|"%"|"\""	{printf("Operator: %s\n",yytext);}

%%

int yywrap(){}
int main()
{
	printf(Enter: );
	yylex();
	return 0;
}