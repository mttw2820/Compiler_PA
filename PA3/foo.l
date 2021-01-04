%{
#include "y.tab.h"

// Change CHARCONST into ASCII code
int change_ASCII();
int bar = 0;
%}

WS		[ \t\n]+

BREAK		break
CASE		case
CHAR		char
DEFAULT		default
ELSE		else
FLOAT		float
FOR		for
IF		if
INT		int
RETURN		return
SWITCH		switch
VOID		void
WHILE		while

IDENT		[A-Za-z_][A-Za-z0-9_]*

DECINT		[1-9][0-9]*|0
OCTINT		0[0-7]+
HEXINT		0[xX][A-Fa-f0-9]+
REALCONST	[0-9]+\.[0-9]+|[0-9]+\.[0-9]+[eE]((\+|\-)[0-9]+)?
CHARCONST	\'(\\[abfnrtv0\\\'\"\?]|[^\'\"\n])\'
STRCONST	\"(\\[abfnrtv0\\\'\"\?]|[^\\\'\"\n])*\"

PUNCSYMBOL	\(|\)|\{|\}|\[|\]|;|:|,|\.

ASGNOP		=
ADDORIGIN	\+=
SUBORIGIN	\-=
MULORIGIN	\*=
DIVORIGIN	\/=
MODORIGIN	%=
OR		\|\|
AND		&&
RIGHTBIG	<
LEFTBIG		>
RIGHTEQBIG	<=
LEFTEQBIG	>=
EQUAL		==
NEQUAL		!=
ADDOP		\+
SUBOP		\-
MULOP		\*
DIVOP		\/
MODOP		%
INCRE		\+\+
DECRE		\-\-

OTHERS		.

%%

{WS}		{}

{BREAK}		{if(bar<=0) return ERROR;
		 else return BREAK;}
{CASE}		{return CASE;}
{CHAR}		{return CHAR;}
{DEFAULT}	{return DEFAULT;}
{ELSE}		{return ELSE;}
{FLOAT}		{return FLOAT;}
{FOR}		{bar++;
		 return FOR;}
{IF}		{return IF;}
{INT}		{return INT;}
{RETURN}	{return RETURN;}
{SWITCH}	{bar++;
		 return SWITCH;}
{VOID}		{return VOID;}
{WHILE}		{bar++;
		 return WHILE;}

{IDENT}		{char *id = 0;	int i = 0;
		 id = (char*)malloc(yyleng+1);
		 for(i=0;i<yyleng;i++)
			id[i] = yytext[i];
		 id[i] = '\0';
		 yylval.sVal = id;
		 return ID;}

{DECINT}	{yylval.iVal = atoi(yytext); return INTEGER;}
{OCTINT}	{yylval.iVal = strtol(yytext, NULL, 8); return INTEGER;}
{HEXINT}	{yylval.iVal = strtol(yytext, NULL, 16); return INTEGER;}
{REALCONST}	{yylval.rVal = atof(yytext); return REAL;}
{CHARCONST}	{yylval.iVal = change_ASCII(); return CHARACTER;}
{STRCONST}	{char *str; int i=0;
		 str = (char*)malloc(yyleng+1);
		 for(i=0; i<yyleng; i++)
			str[i] = yytext[i];
		 str[i] = '\0';
		 yylval.sVal = str;
		 return STRING;}

{PUNCSYMBOL}	{return yytext[0];}

{ASGNOP}	{return ASGNOP;}
{ADDORIGIN}	{return ADDORIGIN;}
{SUBORIGIN}	{return SUBORIGIN;}
{MULORIGIN}	{return MULORIGIN;}
{DIVORIGIN}	{return DIVORIGIN;}
{MODORIGIN}	{return MODORIGIN;}
{OR}		{return OR;}
{AND}		{return AND;}
{RIGHTBIG}	{return RIGHTBIG;}
{LEFTBIG}	{return LEFTBIG;}
{RIGHTEQBIG}	{return RIGHTEQBIG;}
{LEFTEQBIG}	{return LEFTEQBIG;}
{EQUAL}		{return EQUAL;}
{NEQUAL}	{return NEQUAL;}
{ADDOP}		{return ADDOP;}
{SUBOP}		{return SUBOP;}
{MULOP}		{return MULOP;}
{DIVOP}		{return DIVOP;}
{MODOP}		{return MODOP;}
{INCRE}		{return INCRE;}
{DECRE}		{return DECRE;}

{OTHERS}	{return ERROR;}

%%

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
