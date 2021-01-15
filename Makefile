all:
	lex xchoij00_xviggi00.l
	yacc xchoij00_xviggi00.y
	gcc y.tab.c -ll -ly
	./a.out test