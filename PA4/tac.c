#include "tac.h"

int idmode = 0;		// 선언: 0, 변수 이용: 1, 함수 call: 2

void buildTAC(ASTNode *root){
	SYMTAB *table = initSymTab();
	travelNodes(root, table);
	delSymTab(table);
}
void travelNodes(ASTNode *node, SYMTAB *table){
	TKNUM tn = getTkNum(node);
	int originidmode = idmode;

	switch(tn){
		case _PROG:
			break;
		case _VARDEC:
			// add Symbol
		{
			idmode = 0;
			ASTNode *tnode = getChild(node);
			ASTNode *idnode = getSibling(tnode);
			while(idnode){
				if(getChild(idnode)){
					// array variable
					ASTNode *id = getChild(idnode);
					addSymArray(table, getSVal(id), getType(tnode), getIVal(getSibling(id)));
				}
				else{
					addSym(table, getSVal(idnode), getType(tnode));
				}

				idnode = getSibling(idnode);
			}
		}
			break;

		case _FUNCDEC:
			// add Symbol
		{	idmode = 0;
			ASTNode *tnode = getChild(node);
			ASTNode *idnode = getSibling(tnode);

			// set type
			TYPE t;
			if(getType(tnode) == TYPE_INT)
				t = TYPE_INT_FUNC;
			else if (getType(tnode) == TYPE_FLOAT)
				t = TYPE_FLOAT_FUNC;
			else t = TYPE_VOID_FUNC; 

			addSym(table, getSVal(idnode), t);
		}
			break;

		case _ID:
		{ 
			if(idmode == 0) break;	// 선언

			// 선언되지 않은 변수 이용
			if(getSymType(table, getSVal(node)) == TYPE_ERROR){
				if(idmode == 1 || idmode == 2){
					printf("%s is not declared!\n", getSVal(node));		
					exit(1);
				}
			}

			setType(node, getSymType(table, getSVal(node)));

		}
			break;
		case _ID_ARR:
			break;
		case _TYPE:
			break;
		case _VALUE:
			break;
		case _PARAMS:
			// void인 경우
		{	ASTNode *vnode = getChild(node);
			if(getType(vnode) == TYPE_VOID)
				addParam(table, 0, TYPE_VOID);
		}
			break;
		case _PARAM:
			// add Param
		{	ASTNode *tnode = getChild(node);
			ASTNode *idnode = getSibling(tnode);
			
			// 배열 매개변수
			if(getTkNum(idnode) == _VALUE) {
				idnode = getChild(idnode);
				addParamArray(table, getSVal(idnode), getType(tnode), getIVal(getSibling(idnode)));
			}
			else{
				addParam(table, getSVal(idnode), getType(tnode));
			}

		}
			break;
		
		case _CPDSTMT:
			// push Symol Table
			pushSymTab(table);
			break;
		
		case _LDECLIST:
			break;
		
		case _STMTLIST:
			idmode = 1;
			break;
		case _IFSTMT:
			break;
		case _SWSTMT:
			break;
		case _RTSTMT:
			break;
		case _BRKSTMT:
			break;
		case _WHLSTMT:
			break;
		case _FORSTMT:
			break;
		case _CASE:
			break;
		case _DEFAULT:
			break;
		case _INCDEC_EXP:
			break;
		case _OPER:
			break;
		case _INTEGER:
			setType(node, TYPE_INT);
			break;
		case _REAL:
			setType(node, TYPE_FLOAT);
			break;
		case _ARGS:
			idmode = 1;
			break;
		case _FUNCCALL:
			idmode = 2;
			break;
	}

	if(getChild(node))	travelNodes(getChild(node), table);	

	idmode = originidmode;

	switch(tn){	
		case _PROG:
			printf("END");		
			break;
		case _VARDEC:
			break;
		case _FUNCDEC:
			break;
		case _ID:
			break;
		case _ID_ARR:
			break;
		case _TYPE:
			break;
		case _VALUE:
			break;
		case _PARAMS:
			break;
		case _PARAM:
			break;
		case _CPDSTMT:
			// pop Symbol Table
			popSymTab(table);
			break;
		case _LDECLIST:
			break;
		case _STMTLIST:
			break;
		case _IFSTMT:
		{
			ASTNode *expr = getChild(node);
			if(getType(expr) != TYPE_INT){
				printf("Type error in if statement!\n");
				exit(1);
			}
		}
			break;
		case _SWSTMT:
		{
			ASTNode *expr = getChild(node);
			if(getType(expr) != TYPE_INT){
				printf("Type error in switch statement!\n");
				exit(1);
			}
		}
			break;
		case _RTSTMT:
		{	
			TYPE func_t = getThisFuncType(table);
			if(getType(node) == TYPE_VOID && func_t == TYPE_VOID_FUNC){
				break;
			}
			
			
			ASTNode *expr = getChild(node);
			if(getType(expr) == TYPE_INT)
				setType(expr, TYPE_INT_FUNC);
			else if(getType(expr) == TYPE_FLOAT)
				setType(expr, TYPE_FLOAT_FUNC);
		
			if(func_t != getType(expr)){
				printf("Return type error!\n");
				exit(1);
			}
		}
			break;

		case _BRKSTMT:
			break;
		case _WHLSTMT:
		{
			ASTNode *expr = getChild(node);
			if(getType(expr) != TYPE_INT){
				printf("Type error in while statement!\n");
				exit(1);
			}
		}
			break;
		case _FORSTMT:
		{
			ASTNode *expr1 = getChild(node);
			ASTNode *expr2 = getChild(expr1);
			if(getType(expr2) != TYPE_INT){
				printf("Type error in for statement!\n");
				exit(1);
			}
		}
			break;
		case _CASE:
			break;
		case _DEFAULT:
			break;
		case _INCDEC_EXP:
			break;
		case _OPER:	
		{
			ASTNode *op1 = getChild(node);
			int isError = 0;
			
			// unary operator
			
			if(strcmp(getSVal(node), "++")==0 || strcmp(getSVal(node), "--")==0 || (strcmp(getSVal(node), "-")==0 && getType(node) == TYPE_VOID)){
				if(getType(op1) == TYPE_INT || getType(op1) == TYPE_FLOAT){
					setType(node, getType(op1));	
				}	
				else isError = 1;
			}
			else{	
				// binary operator
				ASTNode *op2 = getSibling(op1);
		       		if(strcmp(getSVal(node), "%") == 0 || strcmp(getSVal(node), "%=")){
					if(getType(op1) == TYPE_INT && getType(op2) == TYPE_INT) setType(node, TYPE_INT);
					else isError = 1;
				}
				else{
					if(getType(op1) == getType(op2)){
						if(getType(op1) == TYPE_INT) setType(node, TYPE_INT);
						else if(getType(op2) == TYPE_FLOAT) setType(node, TYPE_FLOAT);
						else isError = 1;
					}
					else isError = 1;
				}
			}

			if(isError == 1){
				printf("Type error in expression!\n");
				exit(1);
			}

			
		}
			break;
		case _INTEGER:
			break;
		case _REAL:
			break;
		case _ARGS:
			break;
		case _FUNCCALL:
		{
			ASTNode *idnode = getChild(node);
			TYPE t = getType(idnode);
			if(t == TYPE_INT_FUNC) t = TYPE_INT;
			else if(t==TYPE_FLOAT_FUNC) t = TYPE_FLOAT;
			else t = TYPE_VOID;

			// check parameters
			ASTNode *args = getSibling(idnode);
			ASTNode *expr = getChild(args);
			int cnt_args = 0;
			int params = getNumOfParam(table, getSVal(idnode));
			while(args){
				TYPE param_t = getParamType(table, getSVal(idnode), cnt_args);
				if(param_t != getType(expr)){
					printf("Type mismatch in function call!\n");
					exit(1);
				}
				cnt_args++;
				expr = getSibling(expr);
			}
			if(cnt_args < params){
				printf("Too few arguments!\n");
				exit(1);
			}
			else if(cnt_args > params){
				printf("Too many arguments!\n");
				exit(1);
			}
		}
			break;
	}
	if(getSibling(node))	travelNodes(getSibling(node), table);
}


