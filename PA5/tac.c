#include "tac.h"
#include "y.tab.h"

extern FILE* yyout;
LBSTACK *lbStack;

void buildTAC(ASTNode *root){
	lbStack = initLBStack();
	genTAC(root);
}

char* genTAC(ASTNode *node){
	ASTNode *n1 = 0, *n2 = 0;
	int temp = 0;
	char *op = 0, *_t = 0, *_sw = 0;
	char *lb1 = 0, *lb2 = 0;
	if(!node)	return NULL;
	switch(getTkNum(node)){
		case _PROG:
			for(n1 = getChild(node); n1; n1 = getSibling(n1))	genTAC(n1);
			break;

		case _FUNCDEC:
			printf("start funcdec\n");
			n1 = getSibling(getChild(node));  
			pushLabel(lbStack, getSVal(n1)); // make function label
			printf("push label\n");
			fprintf(yyout, "%s:\n", topLabel(lbStack));
			printf("%s:\n", topLabel(lbStack));
			fprintf(yyout, "\tBeginFunc\n");
			printf("\tBeginFunc\n");
			genTAC(getSibling(getSibling(getSibling(getChild(node))))); // CPDSTMT
			fprintf(yyout, "\tEndFunc\n");
			printf("\tEndFunc\n");
			popLabel(lbStack);
			break;

		case _CPDSTMT:
			if(n1 = getChild(node))
				if(getSibling(n1))
					genTAC(getSibling(n1));  // STMTLIST
			break;

		case _STMTLIST:
			for(n1 = getChild(node);n1;n1 = getSibling(n1)){
				genTAC(n1);
			}
			break;

		case _IFSTMT:
			genTAC(n1 = getChild(node));  // exp
			fprintf(yyout, "\tIFZ %s Goto %s\n", getName(n1), lb1 = genLabel());
			printf("\tIFZ %s Goto %s\n", getName(n1), lb1);
			genTAC(n1 = getSibling(n1));  // stmt1
			if(n2 = getSibling(n1)){
				fprintf(yyout, "\tGoto %s\n", lb2 = genLabel());
				printf("\tGoto %s\n", lb2);
			}
			fprintf(yyout, "%s:\n", lb1);
			printf("%s:\n", lb1);
			if(n2){
				genTAC(n2);
				fprintf(yyout, "%s:\n", lb2);
				printf("%s:\n", lb2);
			}
			break;
			
		case _WHLSTMT:
			fprintf(yyout, "%s:\n", lb1 = genLabel());
			printf("%s:\n", lb1);
			genTAC(n1 = getChild(node));
			fprintf(yyout, "\tIFZ %s Goto %s\n", getName(n1), lb2 = genLabel());
			printf("\tIFZ %s Goto %s\n", getName(n1), lb2);
			pushLabel(lbStack, lb2);
			if(n2 = getSibling(n1)) genTAC(n2);
			fprintf(yyout, "\tGoto %s\n", lb1);
			printf("\tGoto %s\n", lb1);
			fprintf(yyout, "%s:\n", lb2);
			printf("%s:\n", lb2);
			popLabel(lbStack);
			break;

		case _BRKSTMT:
			fprintf(yyout, "\tGoto %s\n", topLabel(lbStack));
			printf("\tGoto %s\n", topLabel(lbStack));
			break;

		case _FORSTMT:
			{
			ASTNode *exp1 = 0, *exp2 = 0, *exp3 = 0, *cmpd = 0;
			genTAC(exp1 = getChild(node));	// exp1
			fprintf(yyout, "%s:\n", lb1 = genLabel());
			printf("%s:\n", lb1);
			genTAC(exp2 = getSibling(exp1));	// exp2
			fprintf(yyout, "\tIFZ %s Goto %s\n", getName(exp2), lb2 = genLabel());
			printf("\tIFZ %s Goto %s\n", getName(exp2), lb2);
			pushLabel(lbStack, lb2);
			cmpd = getSibling(exp3 = getSibling(exp2));	// cmpd
			if(cmpd) genTAC(cmpd);
			genTAC(exp3);			// expr3

			fprintf(yyout, "\tGoto %s\n", lb1);
			fprintf(yyout, "%s:\n", lb2);
			printf("\tGoto %s\n", lb1);
			printf("%s:\n", lb2);
			popLabel(lbStack);
			break;
			}
		case _SWSTMT:
			{
			ASTNode *exp = 0, *cs = 0;
			pushLabel(lbStack, lb1 = genLabel());
			genTAC(exp = getChild(node));	// exp node
			_sw = getName(exp);
			cs = getSibling(exp);	// first case node;
			while(cs = getSibling(cs)){
				printf("%d %d\n", _CASE, getTkNum(cs));
				if(getTkNum(cs) != _CASE) break;
				_t = mkTmp();
				lb2 = genLabel();	// case label
				setName(cs, lb2);
				fprintf(yyout, "\t%s\t= %s\t!= %d\n", _t, _sw, getIVal(getChild(cs)));
				printf("\t%s\t= %s\t!= %d\n", _t, _sw, getIVal(getChild(cs)));
				fprintf(yyout, "\tIFZ %s Goto %s\n", _t, lb2);
				printf("\tIFZ %s Goto %s\n", _t, lb2);
			}

			cs = getSibling(exp);
			_t = mkTmp();
			lb2 = genLabel();
			fprintf(yyout, "\t%s\t= %s\t== %d\n", _t, _sw, getIVal(getChild(cs)));
			printf("\t%s\t= %s\t== %d\n", _t, _sw, getIVal(getChild(cs)));
			genTAC(cs);
			while(cs = getSibling(cs)){
				if(getTkNum(cs) == _CASE){
					fprintf(yyout, "%s:\n", getName(cs));
					printf("%s:\n", getName(cs));
				}
				genTAC(cs);
			}

			fprintf(yyout, "%s:\n", topLabel(lbStack));
			printf("%s:\n", topLabel(lbStack));
			popLabel(lbStack);
			break;
			}
		case _CASE:
			genTAC(getSibling(getChild(node)));
			break;

		case _DEFAULT:
			genTAC(getChild(node));
			break;

		case _RTSTMT:
			if(n1 = getChild(node)) {
				genTAC(n1);
				fprintf(yyout, "\tReturn %s\n", getName(n1));
				printf("\tReturn %s\n", getName(n1));
			}
			else {
				fprintf(yyout, "\tReturn\n");
				printf("\tReturn\n");
			}
			break;

		case _FUNCCALL:
			n1 = getChild(node);		// func id
			genTAC(n2 = getSibling(n1));	// args
			fprintf(yyout, "\t%s\t= LCall %s\n", _t = mkTmp(), getName(n1));
			printf("\t%s\t= LCall %s\n", _t, getName(n1));
			setName(node, _t);
			// count args
			temp = 0;
			n2 = getChild(n2);
			while(n2){
			       	temp++;
				n2 = getSibling(n2);
			}
			fprintf(yyout, "\tPopParam %d\n", temp*4);
			printf("\tPopParam %d\n", temp*4);
			break;
	
		case _ARGS:
			{
				// reversed linked list algorithm
				ASTNode *prev = 0, *now = 0, *next = 0;
				now = getChild(node);
				while(now){
					next = getSibling(now);
					setSibling(now, prev);
					prev = now;
					now = next;
				}
				setChild(node, prev);

				n1 = getChild(node);
				while(n1){
					fprintf(yyout, "\tPushParam %s\n", genTAC(n1));
					printf("\tPushParam %s\n", getName(n1));
					n1 = getSibling(n1);
				}

			}
			break;
			
		case _ID:
			setName(node, getSVal(node));
			break;

		case _ID_ARR:
			{
			char *arr = malloc(sizeof(char) * 50);

			genTAC(n1 = getChild(node));	// id
			genTAC(n2 = getSibling(n1));	// exp
			_t = mkTmp();	_sw = mkTmp();
			fprintf(yyout, "\t%s\t= %s\t* 4\n", _t, getName(n2));
			fprintf(yyout, "\t%s\t= %s\t+ %s\n", _sw, getName(n1), _t);
			printf("\t%s\t= %s\t* 4\n", _t, getName(n2));
			printf("\t%s\t= %s\t+ %s\n", _sw, getName(n1), _t);

			strcpy(arr, "*(");	strcat(arr, _sw);	strcat(arr, ")");
			setName(node, arr);
			printf("end id arr\n");
			break;
			}
		case _OPER:
			// my code
			op = getSVal(node);
			n1 = getChild(node);	// left
			genTAC(n1);
			if(!(n2 = getSibling(n1))){
				// 단항 연산자
				if(getTkNum(n1) == _ID_ARR){
					fprintf(yyout, "\t%s\t= %s\n", _t = mkTmp(), getName(n1));
					setName(n1, _t);
				}
				fprintf(yyout, "\t%s\t= 0\t%s %s\n", _t = mkTmp(), op, getName(n1));
				printf("\t%s\t= 0\t%s %s\n", _t, op, getName(n1));
				setName(node, _t);
			}
			else{				
				if(!strcmp(op, "=")){
					genTAC(n2);
					if(getTkNum(n2) == _ID_ARR){
						fprintf(yyout, "\t%s\t= %s\n", _t = mkTmp(), getName(n2));
						setName(n2, _t);
					}
					fprintf(yyout, "\t%s\t= %s\n", getName(n1), getName(n2));
					fprintf(yyout, "\t%s\t= %s\n", _t = mkTmp(), getName(n1));
					printf("\t%s\t= %s\n", getName(n1), getName(n2));
					printf("\t%s\t= %s\n", _t, getName(n1));
				}
				else if(!strcmp(op, "+=") || !strcmp(op, "-=") || !strcmp(op, "*=") || !strcmp(op, "/=") || !strcmp(op, "%=")){
					genTAC(n2);
					char *_t1 = 0, *_t2 = 0;
					if(getTkNum(n2) == _ID_ARR){
						fprintf(yyout, "\t%s\t= %s\n", _t2 = mkTmp(), getName(n2));
					}
					if(getTkNum(n1) == _ID_ARR){
						fprintf(yyout, "\t%s\t= %s\n", _t1 = mkTmp(), getName(n1));
					}
					if(!_t2) _t2 = getName(n2);
					if(!_t1){
						_t1 = getName(n1);
						fprintf(yyout, "\t%s\t= %s\t%c %s\n", _t1, _t1, op[0], _t2);
						fprintf(yyout, "\t%s\t= %s\n", _t = mkTmp(), _t1);
						printf("\t%s\t= %s\t%c %s\n", _t1, _t1, op[0], _t2);
						printf("\t%s\t= %s\n", _t, _t1);
					}
					else{
						fprintf(yyout, "\t%s\t = %s\t%c %s\n", _t = mkTmp(), _t1, op[0], _t2);
						fprintf(yyout, "\t%s\t = %s\n", getName(n1), _t);
						fprintf(yyout, "\t%s\t = %s\n", _t = mkTmp(), getName(n1));
					}
				}
				else{
					if(getTkNum(n1) == _ID_ARR){
						fprintf(yyout, "\t%s\t= %s\n", _t = mkTmp(), getName(n1));
						setName(n1, _t);
					}
					genTAC(n2);
					if(getTkNum(n2) == _ID_ARR){
						fprintf(yyout, "\t%s\t= %s\n", _t = mkTmp(), getName(n2));
						setName(n2, _t);
					}
					fprintf(yyout, "\t%s\t= %s\t%s %s\n", _t = mkTmp(), getName(n1), op, getName(n2));
					printf("\t%s\t= %s\t%s %s\n", _t, getName(n1), op, getName(n2));
				}
				setName(node, _t);
			}
			break;
		
		case _INCDEC_EXP:
			n2 = getSibling(n1 = getChild(node));
			if(getTkNum(n1) == _OPER){	// 전위
				op = getSVal(n1);
				_t = genTAC(n2);	// id
				
				if(!strcmp(op, "++")){
					fprintf(yyout, "\t%s\t= %s\t+ 1\n", _t, _t);
					printf("\t%s\t= %s\t+ 1\n", _t, _t);
				}
				else{
					fprintf(yyout, "\t%s\t= %s\t- 1\n", _t, _t);
					printf("\t%s\t= %s\t- 1\n", _t, _t);
				}
				setName(node, _t);
			}
			else{	// 후위
				_sw = mkTmp();
				_t = genTAC(n1);
				op = getSVal(n2);

				fprintf(yyout, "\t%s\t= %s\n", _sw, _t);
				printf("\t%s\t= %s\n", _sw, _t);
				if(!strcmp(op, "++")){
					fprintf(yyout, "\t%s\t= %s\t+ 1\n", _t, _t);
					printf("\t%s\t= %s\t+ 1\n", _t, _t);
				}
				else{
					fprintf(yyout, "\t%s\t= %s\t- 1\n", _t, _t);
					printf("\t%s\t= %s\t- 1\n", _t, _t);
				}
				setName(node, _sw);
			}
			break;

		case _INTEGER:
			{
			char intgr[35];
			sprintf(intgr, "%d", getIVal(node));
			setName(node, intgr);
			break;
			}
		case _REAL:
			{
			char real[35];
			sprintf(real, "%f", getRVal(node));
			setName(node, real);
			break;
			}
	}
	return getName(node);
}

