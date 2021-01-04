%{
#include <stdio.h>
#include <stdlib.h>
int yylex(void);
int yyerror(char*);
%}
%union{
	int iVal;
	float rVal;
	char* sVal;
}
%token <sVal> IDENTIFIER STRING
%token <iVal> INTEGER CHARACTER
%token <rVal> REAL
%token BREAK CASE CHAR DEFAULT ELSE FLOAT FOR IF INT RETURN SWITCH VOID WHILE ERROR
%token ASGNOP ADDORIGIN SUBORIGIN MULORIGIN DIVORIGIN MODORIGIN OR AND RIGHTBIG LEFTBIG RIGHTEQBIG LEFTEQBIG EQUAL NEQUAL ADDOP SUBOP MULOP DIVOP MODOP INCRE DECRE

%%
Program : DeclarationList {printf("Program -> DeclarationList\n");}
	;
DeclarationList : DeclarationList Declaration {printf("DeclarationList -> DeclarationList Declaration\n");}
		| Declaration {printf("DeclarationList -> Declaration\n");}
		;
Declaration 	: VarDeclaration {printf("Declaration -> VarDeclaration\n");}
	    	| FuncDeclaration {printf("Declaration -> FuncDeclaration\n");}
		;
FuncDeclaration : Type IDENTIFIER '(' Params ')' CompoundStmt {printf("FuncDeclaration -> Type %s ( Params ) CompoundStmt\n", $2);}
		| Type IDENTIFIER '(' Params ')' ';' {printf("FuncDeclaration -> Type %s ( Params ) ;\n", $2);}
		;
Params	: ParamList {printf("Params -> ParamList\n");}
      	| VOID {printf("Params -> void\n");}
	| {printf("Params -> Empty\n");}
	;
ParamList	: ParamList ',' Param {printf("ParamList -> ParamList , Param\n");}
	 	| Param {printf("ParamList -> Param\n");}
		;
Param : Type Value {printf("Param -> Type Value\n");}
      ;
CompoundStmt : '{' LocalDeclarationList StmtList '}' {printf("CompoundStmt -> { LocalDeclarationList StmtList }\n");}
	     ;
LocalDeclarationList	: LocalDeclarationList VarDeclaration {printf("LocalDeclarationList -> LocalDeclarationList VarDeclaration\n");}
		    	| {printf("LocalDeclarationList -> Empty\n");}
			;
VarDeclaration : Type IDs ';' {printf("VarDeclaration -> Type IDs ;\n");}
	       ;
Type	: INT {printf("Type -> int\n");}
    	| VOID {printf("Type -> void\n");}
	| CHAR {printf("Type -> char\n");}
	| FLOAT {printf("Type -> float\n");}
	;
IDs	: IDs ',' Value {printf("IDs -> IDs , Value\n");}
  	| Value {printf("IDs -> Value\n");}
	;
Value	: IDENTIFIER '[' INTEGER ']' {printf("Value -> %s [ %d ]\n", $1, $3);}
     	| IDENTIFIER {printf("Value -> %s\n", $1);}
	;
StmtList	: StmtList Stmt {printf("StmtList -> StmtList Stmt\n");}
		| {printf("StmtList -> Empty\n");}
		;
Stmt	: MatchedStmt {printf("Stmt -> MatchedStmt\n");}
    	| OpenStmt {printf("Stmt -> OpenStmt\n");}
	;
MatchedStmt	: ExprStmt {printf("MatchedStmt -> ExprStmt\n");}
	   	| ForStmt {printf("MatchedStmt -> ForStmt\n");}
		| WhileStmt {printf("MatchedStmt -> WhileStmt\n");}
		| ReturnStmt {printf("MatchedStmt -> ReturnStmt\n");}
		| CompoundStmt {printf("MatchedStmt -> CompoundStmt\n");}
		| BreakStmt {printf("MatchedStmt -> BreakStmt\n");}
		| SwitchStmt {printf("MatchedStmt -> SwitchStmt\n");}
		| IF '(' Expr ')' MatchedStmt ELSE MatchedStmt {printf("MatchedStmt -> if ( Expr ) MatchedStmt else MatchedStmt\n");}
		;
OpenStmt	: IF '(' Expr ')' Stmt {printf("OpenStmt -> if ( Expr ) Stmt\n");}
		| IF '(' Expr ')' MatchedStmt ELSE OpenStmt {printf("OpenStmt -> if ( Expr ) MatchedStmt else OpenStmt\n");}
		;
SwitchStmt : SWITCH '(' Expr ')' '{' CaseList DefaultCase '}' {printf("SwitchStmt -> switch ( Expr ) { CaseList DefaultCase }\n");}
	   ;
CaseList	: CaseList CASE INTEGER ':' StmtList {printf("CaseList -> CaseList case %d : StmtList\n", $3);}
		| CASE INTEGER ':' StmtList {printf("CaseList -> case %d : StmtList\n", $2);}
		;
DefaultCase	: DEFAULT ':' StmtList {printf("DefaultCase -> default : StmtList\n");}
	   	| {printf("DefaultCase -> Empty\n");}
		;
ReturnStmt	: RETURN Expr ';' {printf("ReturnStmt -> return Expr ;\n");}
	  	| RETURN ';' {printf("ReturnStmt -> return ;\n");}
		;
BreakStmt : BREAK ';' {printf("BreakStmt -> break ;\n");}
	  ;
ExprStmt	: Expr ';' {printf("ExprStmt -> Expr ;\n");}
		| ';' {printf("ExprStmt -> ;\n");}
		;
Expr	: AssignExpr {printf("Expr -> AssignExpr\n");}
    	| SimpleExpr {printf("Expr -> SimpleExpr\n");}
	;
AssignExpr	: Variable ASGNOP Expr {printf("AssignExpr -> Variable = Expr\n");}
	  	| Variable ADDORIGIN Expr {printf("AssignExpr -> Variable += Expr\n");}
		| Variable SUBORIGIN Expr {printf("AssignExpr -> Variable -= Expr\n");}
		| Variable MULORIGIN Expr {printf("AssignExpr -> Variable *= Expr\n");}
		| Variable DIVORIGIN Expr {printf("AssignExpr -> Variable /= Expr\n");}
		| Variable MODORIGIN Expr {printf("AssignExpr -> Variable %%= Expr\n");}
		;
Variable	: IDENTIFIER '[' Expr ']' {printf("Variable -> %s [ Expr ]\n", $1);}
		| IDENTIFIER {printf("Variable -> %s\n", $1);} 
		;
SimpleExpr	: SimpleExpr OR AndExpr {printf("SimpleExpr -> SimpleExpr || AndExpr\n");}
	  	| AndExpr	{printf("SimpleExpr -> AndExpr\n");}
		;
AndExpr : AndExpr AND RelExpr {printf("AndExpr -> AndExpr && RelExpr\n");}
	| RelExpr {printf("AndExpr -> RelExpr\n");}
	;
RelExpr : RelExpr RIGHTBIG AddExpr {printf("RelExpr -> RelExpr < AddExpr\n");}
	| RelExpr RIGHTEQBIG AddExpr {printf("RelExpr -> RelExpr <= AddExpr\n");}
	| RelExpr LEFTBIG AddExpr {printf("RelExpr -> RelExpr > AddExpr\n");}
	| RelExpr LEFTEQBIG AddExpr {printf("RelExpr -> RelExpr >= AddExpr\n");}
	| RelExpr EQUAL AddExpr {printf("RelExpr -> RelExpr == AddExpr\n");}
	| RelExpr NEQUAL AddExpr {printf("RelExpr -> RelExpr != AddExpr\n");}
	| AddExpr {printf("RelExpr -> AddExpr\n");}
	;
AddExpr : AddExpr ADDOP Term {printf("AddExpr -> AddExpr + Term\n");}
	| AddExpr SUBOP Term {printf("AddExpr -> AddExrp - Term\n");}
	| Term {printf("AddExpr -> Term\n");}
	;
Term	: Term MULOP Factor {printf("Term -> Term * Factor\n");}
    	| Term DIVOP Factor {printf("Term -> Term / Factor\n");}
	| Term MODOP Factor {printf("Term -> Term %% Factor\n");}
	| Factor {printf("Term -> Factor\n");}
	;
Factor	: '(' Expr ')' {printf("Factor -> ( Expr )\n");}
      	| FunctionCall {printf("Factor -> FunctionCall\n");}
	| SUBOP Factor {printf("Factor -> - Factor\n");}
	| Variable {printf("Factor -> Variable\n");}
	| Variable IncDec {printf("Factor -> Variable IncDec\n");}
	| IncDec Variable {printf("Factor -> IncDec Variable\n");}
	| NumberLiteral {printf("Factor -> NumberLiteral\n");}
	;
NumberLiteral	: INTEGER {printf("NumberLiteral -> %d\n", $1);}
	      	| REAL {printf("NumberLiteral -> %f\n", $1);}
		;
IncDec	: INCRE {printf("IncDec -> ++\n");}
      	| DECRE {printf("IncDec -> --\n");}
	;
WhileStmt	: WHILE '(' Expr ')' CompoundStmt {printf("WhileStmt -> while ( Expr ) CompoundStmt\n");}
	 	| WHILE '(' Expr ')' ';' {printf("WhileStmt -> while ( Expr ) ;\n");}
		;
ForStmt : FOR '(' Expr ';' Expr ';' Expr ')' CompoundStmt {printf("ForStmt -> for ( Expr ; Expr ; Expr ) CompoundStmt\n");}
	| FOR '(' Expr ';' Expr ';' Expr ')' ';' {printf("ForStmt -> for ( Expr ; Expr ; Expr ) ;\n");}
	;
FunctionCall	: IDENTIFIER '(' Arguments ')' {printf("FunctionCall -> %s ( Arguments )\n", $1);}
Arguments	: ArgumentList {printf("Arguments -> ArgumentList\n");}
	    	| {printf("FunctionCall -> Empty\n");}
		;
ArgumentList	: ArgumentList ',' Expr {printf("ArgumentList -> ArgumentList , Expr\n");}
	    	| ArgumentList ',' STRING {printf("ArgumentList -> ArgumentList , %s\n", $3);}
		| Expr {printf("ArgumentList -> Expr\n");}
		| STRING {printf("ArgumentList -> %s\n", $1); } 
		;


%%
int main(int argc, char *argv[]){	
	extern FILE *yyin;
	yyin = fopen(argv[1], "r");
	yyparse();
	fclose(yyin);
	return 0;
}

