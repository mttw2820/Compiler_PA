parser : y.tab.o lex.yy.o util.a
	gcc -o parser y.tab.o lex.yy.o util.a -ly -ll

y.tab.o : y.tab.c
	gcc -c -o y.tab.o y.tab.c

lex.yy.o : lex.yy.c
	gcc -c -o lex.yy.o lex.yy.c

y.tab.c : bar.y
	yacc -d bar.y

lex.yy.c : foo.l
	flex foo.l

clean :
	rm -f parser lex.yy.o lex.yy.c y.tab.o y.tab.c y.tab.h

