%{
#include <stdio.h>
#include <stdlib.h>

char* tokenType[] = {"Keyword", "Identifier", "Character", "String", "Integer", "Real number", "Comment", "Operator", "Punctuation symbol"};
enum tnumber {TEOF, TKEYWORD, TIDENTIFIER, TCHARACTER, TSTRING, TINTEGER, TREAL, TCOMMENT, TOPERATOR, TPUNCTUATION, TERROR};

union{
	int iVal;
	float rVal;
} yylval;

int line = 1;
int pos = 1;
// Change CHARCONST into ASCII code
int change_ASCII();
// check if COMMENT is more than one line
void check_COMMENT_line();
char* clean_COMMENT();

%}

WS		[ \t]
LINE		[\n]+
KEYWORD		break|case|char|default|else|float|for|if|int|return|switch|void|while
COMMENT		\/\*([^\*]|\*+[^\*\/])*\*+\/|\/\/[^\n]*
PUNCSYMBOL	\(|\)|\{|\}|\[|\]|;|:
OPERATOR	\+|\-|\*|\/|%|!|=|<|>|\+=|\-=|\*=|\/=|%=|==|!=|<=|>=|&&|\|\||\+\+|\-\-|,
IDENT		[A-Za-z_][A-Za-z0-9_]*
CHARCONST	\'(\\[abfnrtv0\\\'\"\?]|[^\'\"\n])\'
STRCONST	\"(\\[abfnrtv0\\\'\"\?]|[^\\\'\"\n])*\"
DECINT		[1-9][0-9]*|0
OCTINT		0[0-7]+
HEXINT		0[xX][A-Fa-f0-9]+
INTCONST	{DECINT}|{OCTINT}|{HEXINT}
REALCONST	[0-9]+\.[0-9]+|[0-9]+\.[0-9]+[eE]((\+|-)[0-9]+)?
OTHERS		.

%%

{WS}		{pos++;}
{LINE}		{line++; pos = 1;}
{KEYWORD}	{return TKEYWORD;}
{OPERATOR}	{return TOPERATOR;}
{COMMENT}	{return TCOMMENT;}
{PUNCSYMBOL}	{return TPUNCTUATION;}
{IDENT}		{return TIDENTIFIER;}
{CHARCONST}	{yylval.iVal = change_ASCII(); return TCHARACTER;}
{STRCONST}	{return TSTRING;}
{DECINT}	{yylval.iVal = atoi(yytext); return TINTEGER; }
{OCTINT}	{yylval.iVal = strtol(yytext, NULL, 8); return TINTEGER; }
{HEXINT}	{yylval.iVal = strtol(yytext, NULL, 16); return TINTEGER; }
{REALCONST}	{return TREAL;}
{OTHERS}	{return TERROR;}

%%

int main(int argc, char *argv[]){
	enum tnumber tn;
	if(!argc)	exit(0);
	yyin = fopen(argv[1], "r");

	// Insert source code here...
	while((tn = yylex()) != TEOF){
		switch(tn){
		case TCHARACTER:
		case TINTEGER:
			printf("%-15s:%19s, %3d,%3d,%5d\n", yytext, tokenType[tn-1], line, pos, yylval.iVal);
			break;
		case TREAL:
			yylval.rVal = atof(yytext);
			printf("%-15s:%19s, %3d,%3d,%5.2f\n", yytext, tokenType[5], line, pos, yylval.rVal);
			break;
		case TCOMMENT:
			yytext = clean_COMMENT();
			printf("%-25s:%29s, %3d,%3d\n", yytext, tokenType[tn-1], line, pos);
			check_COMMENT_line();
			break;
		case TERROR:
			printf("Error occurred in Line %d, Position %d\n", line, pos);
			fclose(yyin);
			return 0;
		default:
			printf("%-15s:%19s, %3d,%3d\n", yytext, tokenType[tn-1], line, pos);
			break;
		}
		if(tn!=TCOMMENT) //TCOMMENT move pos in check_COMMENT()
			pos += yyleng;
	}

	fclose(yyin);
	return 0;
}

int change_ASCII(){
	if(yyleng == 3)	// single word between single quotation
		return yytext[1];
	else{	// excape char
		switch(yytext[2]){
		case 'a': return '\a';
		case 'b': return '\b';
		case 'f': return '\f';
		case 'n': return '\n';
		case 'r': return '\r';
		case 't': return '\t';
		case 'v': return '\v';
		case '0': return '\0';
		case '\'': return '\'';
		case '\"': return '\"';
		case '\?': return '\?';
		case '\\': return '\\';	
		}
	}
}

char* clean_COMMENT(){
	if(yytext[yyleng-1] == '\n')
		yytext[yyleng-1] = 0;
	return yytext;
}
void check_COMMENT_line(){	// after printf
	// if one line comment
	if(yytext[1]=='/'){
		return;
	} 
	for(int i=0; i<yyleng; i++){
		if(yytext[i] == '\n'){
			// count lines
			line++;
			pos = 1;
		}
		else pos++;
	}
	return;	
}
