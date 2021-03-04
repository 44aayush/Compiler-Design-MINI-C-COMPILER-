#!/bin/sh
lex lexicalAnalyzer.l
yacc -d syntaxChecker.y
gcc lex.yy.c y.tab.c -w -g

for i in 1 2 3 4 5 6 7
do
	./a.out case$i.c
	echo  "\nCASE"$i
	echo  "\n************** SYMBOL TABLE FOR CASE"$i" ******************"
	cat symbolTable.txt
	echo  "\n------------------------------------------------------------------------------------------------------------------------\n"
	echo  "\n#################### PARSED TABLE FOR CASE"$i" #######################"
	cat parsedTable.txt
	echo  "\n----------------------------------------------------------x-------------------------------------------------------------\n"
done

#rm y.tab.c y.tab.h lex.yy.c
