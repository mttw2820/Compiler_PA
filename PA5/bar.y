%{
#include <stdio.h>
#include <stdlib.h>
#include "tac.h"
STACK *stack;
extern int bar;
int yylex(void);
int yyerror(char*);
%}
%union{
	int iVal;
	float rVal;
	char* sVal;
}
%token <sVal> ID STRING
%token <iVal> INTEGER CHARACTER
%token <rVal> REAL
%token BREAK CASE CHAR DEFAULT ELSE FLOAT FOR IF INT RETURN SWITCH VOID WHILE ERROR
%token ASGNOP ADDORIGIN SUBORIGIN MULORIGIN DIVORIGIN MODORIGIN OR AND RIGHTBIG LEFTBIG RIGHTEQBIG LEFTEQBIG EQUAL NEQUAL ADDOP SUBOP MULOP DIVOP MODOP INCRE DECRE

%%
Program : DeclarationList {
		ASTNode *prog = makeASTNode(_PROG, NO_TYPE);
		ASTNode *dec = pop(stack);
		setChild(prog, dec);
		push(stack, prog); }
	;

DeclarationList : DeclarationList Declaration {
			ASTNode *dec = pop(stack);
			ASTNode *declist = pop(stack);
			setLastSibling(declist, dec);
			push(stack, declist); }
		| Declaration { }
		;

Declaration 	: VarDeclaration { }
	    	| FuncDeclaration { }
		;

FuncDeclaration : TypeSpecifier ID '(' Params ')' CompoundStmt {
				ASTNode *funcdec = makeASTNode(_FUNCDEC, NO_TYPE);
				ASTNode *cmpdstmt = pop(stack);
				ASTNode *params = pop(stack);
				ASTNode *funcid = makeASTNodeID($2, NO_TYPE);
				ASTNode *types = pop(stack);
				setSibling(params, cmpdstmt);
				setSibling(funcid, params);
				setSibling(types, funcid);
				setChild(funcdec, types);
				push(stack, funcdec); }
		;

Params	: ParamList {
       		ASTNode *params = makeASTNode(_PARAMS, NO_TYPE);
		ASTNode *paramlist = pop(stack);
		setChild(params, paramlist);
		push(stack, params); }
      	| VOID {
		ASTNode *params = makeASTNode(_PARAMS, NO_TYPE);
		setChild(params, makeASTNode(_TYPE, TYPE_VOID));
		push(stack, params); }
	| { push(stack, makeASTNode(_PARAMS, NO_TYPE)); }
	;

ParamList	: ParamList ',' Param {
	  		ASTNode *param = pop(stack);
			ASTNode *paramlist = pop(stack);
			setLastSibling(paramlist, param);
			push(stack, paramlist); }
	 	| Param { }
		;

Param : TypeSpecifier Value { 
      		ASTNode *value = pop(stack);
		ASTNode *types = pop(stack);
		ASTNode *params = makeASTNode(_PARAM, NO_TYPE);
		setSibling(types, value);
		setChild(params, types);
		push(stack, params); }
      ;

CompoundStmt : '{' LocalDeclarationList StmtList '}' {
	     		ASTNode *stmtlist = pop(stack);
			ASTNode *ldeclist = pop(stack);
			ASTNode *cmpdstmt = makeASTNode(_CPDSTMT, NO_TYPE);
			setSibling(ldeclist, stmtlist);
			setChild(cmpdstmt, ldeclist);
			push(stack, cmpdstmt); }
	     ;

LocalDeclarationList	: LocalDeclarationList VarDeclaration {
		     		ASTNode *vardec = pop(stack);
		     		ASTNode *ldeclist = pop(stack);
				if(getChild(ldeclist)==0){
					setChild(ldeclist, vardec);
				}
				else {
					setLastSibling(getChild(ldeclist), vardec);
				}
				push(stack, ldeclist); }
		    	| {push(stack, makeASTNode(_LDECLIST, NO_TYPE));}
			;

VarDeclaration : TypeSpecifier IDs ';' {
	       		ASTNode *ids = pop(stack);
			ASTNode *types = pop(stack);
			ASTNode *varDec = makeASTNode(_VARDEC, NO_TYPE);
			setSibling(types, ids);
			setChild(varDec, types);
			push(stack, varDec); }
	       ;

TypeSpecifier	: INT {push(stack, makeASTNode(_TYPE, TYPE_INT));}
    		| VOID {push(stack, makeASTNode(_TYPE, TYPE_VOID));}
		| CHAR {push(stack, makeASTNode(_TYPE, TYPE_INT));}
		| FLOAT {push(stack, makeASTNode(_TYPE, TYPE_FLOAT));}
		;

IDs	: IDs ',' Value {
    		ASTNode *value = pop(stack);
		ASTNode *ids = pop(stack);
		setLastSibling(ids, value);
		push(stack, ids);}
  	| Value { }
	;

Value	: ID '[' INTEGER ']' {
      			ASTNode *value = makeASTNode(_VALUE, NO_TYPE);
			ASTNode *id = makeASTNodeID($1, NO_TYPE);
			setSibling(id, makeASTNodeINT($3));
			setChild(value, id);
			push(stack, value); }
     	| ID {	ASTNode *id = makeASTNodeID($1, NO_TYPE);
		push(stack, id); }
	;

StmtList	: StmtList Stmt {
			ASTNode *stmt = pop(stack);
			ASTNode *stmtlist = pop(stack);
			if(getChild(stmtlist) == 0){
				setChild(stmtlist, stmt);
			}
			else {
				setLastSibling(getChild(stmtlist), stmt);
			}
			push(stack, stmtlist); }
		| { push(stack, makeASTNode(_STMTLIST, NO_TYPE)); }
		;

Stmt	: MatchedStmt { }
    	| OpenStmt { }
	;

MatchedStmt	: ExprStmt { }
	   	| ForStmt { }
		| WhileStmt { }
		| ReturnStmt { }
		| CompoundStmt { }
		| BreakStmt { }
		| SwitchStmt { }
		| IF '(' Expr ')' MatchedStmt ELSE MatchedStmt {
			ASTNode *secondMstmt = pop(stack);
			ASTNode *firstMstmt = pop(stack);
			ASTNode *expr = pop(stack);
			ASTNode *ifstmt = makeASTNode(_IFSTMT, NO_TYPE); 
			setSibling(firstMstmt, secondMstmt);
			setSibling(expr, firstMstmt);
			setChild(ifstmt, expr); 
			push(stack, ifstmt); }
		;

OpenStmt	: IF '(' Expr ')' Stmt {
			ASTNode *stmt = pop(stack);
			ASTNode *expr = pop(stack);
			ASTNode *ifstmt = makeASTNode(_IFSTMT, NO_TYPE);
			setSibling(expr, stmt);
			setChild(ifstmt, expr);
			push(stack, ifstmt); }
		| IF '(' Expr ')' MatchedStmt ELSE OpenStmt {
			ASTNode *ostmt = pop(stack);
			ASTNode *mstmt = pop(stack);
			ASTNode *expr = pop(stack);
			ASTNode *openstmt = makeASTNode(_IFSTMT, NO_TYPE);
			setSibling(mstmt, ostmt);
			setSibling(expr, mstmt);
			setChild(openstmt, expr);
			push(stack, openstmt); }
		;

SwitchStmt : SWITCH '(' Expr ')' '{' CaseList DefaultCase '}' {
	   		bar--;
	   		ASTNode *dfcase = pop(stack);
			ASTNode *caselist = pop(stack);
			ASTNode *expr = pop(stack);
			ASTNode *switchstmt = makeASTNode(_SWSTMT, NO_TYPE);
			setSibling(expr, caselist);
			setLastSibling(caselist, dfcase);
			setChild(switchstmt, expr);
			push(stack, switchstmt); }
	   ;

CaseList	: CaseList CASE INTEGER ':' StmtList {
	 		ASTNode *stmtlist = pop(stack);
			ASTNode *integer = makeASTNodeINT($3);
			ASTNode *newcase = makeASTNode(_CASE, NO_TYPE);
			ASTNode *caselist = pop(stack);
			setSibling(integer, stmtlist);
			setChild(newcase, integer);
			setLastSibling(caselist, newcase);
			push(stack, caselist); }
		| CASE INTEGER ':' StmtList {
			ASTNode *stmtlist = pop(stack);
			ASTNode *integer = makeASTNodeINT($2);
			ASTNode *newcase = makeASTNode(_CASE, NO_TYPE);
			setSibling(integer, stmtlist);
			setChild(newcase, integer);
			push(stack, newcase);}
		;

DefaultCase	: DEFAULT ':' StmtList {
	   		ASTNode *stmtlist = pop(stack);
			ASTNode *def = makeASTNode(_DEFAULT, NO_TYPE);
			setChild(def, stmtlist);
			push(stack, def);}
	   	| { push(stack, makeASTNode(_DEFAULT, NO_TYPE));}
		;

ReturnStmt	: RETURN Expr ';' {
	   		ASTNode *expr = pop(stack);
			ASTNode *rtstmt = makeASTNode(_RTSTMT, NO_TYPE);
			setChild(rtstmt, expr);
			push(stack, rtstmt); }
	  	| RETURN ';' {
			push(stack, makeASTNode(_RTSTMT, TYPE_VOID));}
		;
BreakStmt : BREAK ';' {
	  	push(stack, makeASTNode(_BRKSTMT, NO_TYPE));}
	  ;
ExprStmt	: Expr ';' { }
		| ';' { }
		;
Expr	: AssignExpr { }
    	| SimpleExpr { }
	;
AssignExpr	: Variable ASGNOP Expr {
	   		ASTNode *expr = pop(stack);
			ASTNode *asgnop = makeASTNodeOP("=", NO_TYPE);
			ASTNode *var = pop(stack);
			setSibling(var, expr);
			setChild(asgnop, var);
			push(stack, asgnop); }
	  	| Variable ADDORIGIN Expr {
			ASTNode *expr = pop(stack);
			ASTNode *addorigin = makeASTNodeOP("+=", NO_TYPE);
			ASTNode *var = pop(stack);
			setSibling(var, expr);
			setChild(addorigin, var);
			push(stack, addorigin); }
		| Variable SUBORIGIN Expr {
			ASTNode *expr = pop(stack);
			ASTNode *suborigin = makeASTNodeOP("-=", NO_TYPE);
			ASTNode *var = pop(stack);
			setSibling(var, expr);
			setChild(suborigin, var);
			push(stack, suborigin); }
		| Variable MULORIGIN Expr {
			ASTNode *expr = pop(stack);
			ASTNode *mulorigin = makeASTNodeOP("*=", NO_TYPE);
			ASTNode *var = pop(stack);
			setSibling(var, expr);
			setChild(mulorigin, var);
			push(stack, mulorigin); }
		| Variable DIVORIGIN Expr {
			ASTNode *expr = pop(stack);
			ASTNode *divorigin = makeASTNodeOP("/=", NO_TYPE);
			ASTNode *var = pop(stack);
			setSibling(var, expr);
			setChild(divorigin, var);
			push(stack, divorigin); }
		| Variable MODORIGIN Expr {
			ASTNode *expr = pop(stack);
			ASTNode *modorigin = makeASTNodeOP("%=", NO_TYPE);
			ASTNode *var = pop(stack);
			setSibling(var, expr);
			setChild(modorigin, var);
			push(stack, modorigin); }
		;
Variable	: ID '[' Expr ']' {
	 		ASTNode *expr = pop(stack);
			ASTNode *id = makeASTNodeID($1, NO_TYPE);
			ASTNode *array = makeASTNode(_ID_ARR, NO_TYPE);
			setSibling(id, expr);
			setChild(array, id);
			push(stack, array); }
		| ID { push(stack, makeASTNodeID($1, NO_TYPE)); } 
		;
SimpleExpr	: SimpleExpr OR AndExpr {
	 		ASTNode *andexpr = pop(stack);
			ASTNode *simpexpr = pop(stack);
			ASTNode *orop = makeASTNodeOP("||", NO_TYPE);
			setSibling(simpexpr, andexpr);
			setChild(orop, simpexpr);
			push(stack, orop); }
	  	| AndExpr	{ }
		;
AndExpr : AndExpr AND RelExpr {
		ASTNode *relexpr = pop(stack);
		ASTNode *andexpr = pop(stack);
		ASTNode *andop = makeASTNodeOP("&&", NO_TYPE);
		setSibling(andexpr, relexpr);
		setChild(andop, andexpr);
		push(stack, andop); }
	| RelExpr { }
	;
RelExpr : RelExpr RIGHTBIG AddExpr {
		ASTNode *addexpr = pop(stack);
		ASTNode *relexpr = pop(stack);
		ASTNode *rightbig = makeASTNodeOP("<", NO_TYPE);
		setSibling(relexpr, addexpr);
		setChild(rightbig, relexpr);
		push(stack, rightbig); }
	| RelExpr RIGHTEQBIG AddExpr {
		ASTNode *addexpr = pop(stack);
		ASTNode *relexpr = pop(stack);
		ASTNode *righteqbig = makeASTNodeOP("<=", NO_TYPE);
		setSibling(relexpr, addexpr);
		setChild(righteqbig, relexpr);
		push(stack, righteqbig); }
	| RelExpr LEFTBIG AddExpr {
		ASTNode *addexpr = pop(stack);
		ASTNode *relexpr = pop(stack);
		ASTNode *leftbig = makeASTNodeOP(">", NO_TYPE);
		setSibling(relexpr, addexpr);
		setChild(leftbig, relexpr);
		push(stack, leftbig); }
	| RelExpr LEFTEQBIG AddExpr {
		ASTNode *addexpr = pop(stack);
		ASTNode *relexpr = pop(stack);
		ASTNode *lefteqbig = makeASTNodeOP(">=", NO_TYPE);
		setSibling(relexpr, addexpr);
		setChild(lefteqbig, relexpr);
		push(stack, lefteqbig); }
	| RelExpr EQUAL AddExpr {
		ASTNode *addexpr = pop(stack);
		ASTNode *relexpr = pop(stack);
		ASTNode *equal = makeASTNodeOP("==", NO_TYPE);
		setSibling(relexpr, addexpr);
		setChild(equal, relexpr);
		push(stack, equal); }
	| RelExpr NEQUAL AddExpr {
		ASTNode *addexpr = pop(stack);
		ASTNode *relexpr = pop(stack);
		ASTNode *nequal = makeASTNodeOP("!=", NO_TYPE);
		setSibling(relexpr, addexpr);
		setChild(nequal, relexpr);
		push(stack, nequal); }
	| AddExpr { }
	;

AddExpr : AddExpr ADDOP Term {
		ASTNode *term = pop(stack);
		ASTNode *addexpr = pop(stack);
		ASTNode *addop = makeASTNodeOP("+", NO_TYPE);
		setSibling(addexpr, term);
		setChild(addop, addexpr);
		push(stack, addop); }
	| AddExpr SUBOP Term {
		ASTNode *term = pop(stack);
		ASTNode *addexpr = pop(stack);
		ASTNode *subop = makeASTNodeOP("-", NO_TYPE);
		setSibling(addexpr, term);
		setChild(subop, addexpr);
		push(stack, subop); }
	| Term { }
	;

Term	: Term MULOP Factor {
     		ASTNode *factor = pop(stack);
		ASTNode *term = pop(stack);
		ASTNode *mulop = makeASTNodeOP("*", NO_TYPE);
		setSibling(term, factor);
		setChild(mulop, term);
		push(stack, mulop); }
    	| Term DIVOP Factor {
		ASTNode *factor = pop(stack);
		ASTNode *term = pop(stack);
		ASTNode *divop = makeASTNodeOP("/", NO_TYPE);
		setSibling(term, factor);
		setChild(divop, term);
		push(stack, divop); }
	| Term MODOP Factor {
		ASTNode *factor = pop(stack);
		ASTNode *term = pop(stack);
		ASTNode *modop = makeASTNodeOP("%", NO_TYPE);
		setSibling(term, factor);
		setChild(modop, term);
		push(stack, modop); }
	| Factor { }
	;

Factor	: '(' Expr ')' { }
      	| FunctionCall { }
	| '-' Factor {
		ASTNode *factor = pop(stack);
		ASTNode *subop = makeASTNodeOP("-", TYPE_VOID);
		setChild(subop, factor);
		push(stack, subop); }
	| Variable { }
	| Variable IncDec {
		ASTNode *incdec = pop(stack);
		ASTNode *var = pop(stack);
		ASTNode *incdecexpr = makeASTNode(_INCDEC_EXP, NO_TYPE);
		setSibling(var, incdec);
		setChild(incdecexpr, var);
		push(stack, incdecexpr); }
	| IncDec Variable {
		ASTNode *var = pop(stack);
		ASTNode *incdec = pop(stack);
		ASTNode *incdecexpr = makeASTNode(_INCDEC_EXP, NO_TYPE);
		setSibling(incdec, var);
		setChild(incdecexpr, incdec);
		push(stack, incdecexpr); }
	| NumberLiteral { }
	;

NumberLiteral	: INTEGER { 
	      		push(stack, makeASTNodeINT($1)); }
	      	| REAL { 
			push(stack, makeASTNodeREAL($1));}
		;
IncDec	: INCRE { push(stack, makeASTNodeOP("++", NO_TYPE)); }
      	| DECRE { push(stack, makeASTNodeOP("--", NO_TYPE)); }
	;

WhileStmt	: WHILE '(' Expr ')' CompoundStmt {
			bar--;
			ASTNode *cmpdstmt = pop(stack);
			ASTNode *expr = pop(stack);
			ASTNode *whilestmt = makeASTNode(_WHLSTMT, NO_TYPE);
			setSibling(expr, cmpdstmt);
			setChild(whilestmt, expr);
			push(stack, whilestmt); }
	 	| WHILE '(' Expr ')' ';' {
			bar--;
			ASTNode *expr = pop(stack);
			ASTNode *whilestmt = makeASTNode(_WHLSTMT, NO_TYPE);
			setChild(whilestmt, expr);
			push(stack, whilestmt); }
		;

ForStmt : FOR '(' Expr ';' Expr ';' Expr ')' CompoundStmt {
		bar--;
		ASTNode *forstmt = makeASTNode(_FORSTMT, NO_TYPE);
		ASTNode *cmpdstmt = pop(stack);
		ASTNode *expr3 = pop(stack);
		ASTNode *expr2 = pop(stack);
		ASTNode *expr1 = pop(stack);
		setSibling(expr1, setSibling(expr2, expr3));
		setLastSibling(expr1, cmpdstmt);
		setChild(forstmt, expr1);
		push(stack, forstmt); }
	| FOR '(' Expr ';' Expr ';' Expr ')' ';' {
		bar--;
		ASTNode *forstmt = makeASTNode(_FORSTMT, NO_TYPE);
		ASTNode *expr3 = pop(stack);
		ASTNode *expr2 = pop(stack);
		ASTNode *expr1 = pop(stack);
		setSibling(expr1, setSibling(expr2, expr3));
		setChild(forstmt, expr1);
		push(stack, forstmt); }
	;

FunctionCall	: ID '(' Arguments ')' {
	     		ASTNode *args = pop(stack);
			ASTNode *id = makeASTNodeID($1, NO_TYPE);
			ASTNode *funccall = makeASTNode(_FUNCCALL, NO_TYPE);
			setSibling(id, args);
			setChild(funccall, id);
			push(stack, funccall);}
		;

Arguments	: ArgumentList {
	  		ASTNode *arg = pop(stack);
			ASTNode *args = makeASTNode(_ARGS, NO_TYPE);
			setChild(args, arg);
			push(stack, args); }
	    	| { push(stack, makeASTNode(_ARGS, NO_TYPE)); }
		;

ArgumentList	: ArgumentList ',' Expr {
	     		ASTNode *expr = pop(stack);
			ASTNode *arglist = pop(stack);
			setLastSibling(arglist, expr);
			push(stack, arglist); }
		| Expr { } 
		;


%%

int main(int argc, char *argv[]){	
	extern FILE *yyin;
	extern FILE *yyout;
	ASTNode *root = 0;
	stack = initStack();

	yyin = fopen(argv[1], "r");
	yyparse();
	fclose(yyin);

	root = pop(stack);
	yyout = fopen(genOutputFN(argv[1]), "w");
	buildTAC(root);
	fclose(yyout);
	return 0;
}

