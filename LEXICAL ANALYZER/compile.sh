#!/bin/bash
lex scanner.l
cc lex.yy.c
for i in 1 2 3 4
do
	./a.out Case$i.c
	echo -e "\nCASE"$i
	echo -e "\n************** SYMBOL TABLE FOR CASE"$i" ******************"
	cat symbolTable.txt
	echo -e "\n------------------------------------------------------------------------------------------------------------------------\n"
	echo -e "\n#################### PARSED TABLE FOR CASE"$i" #######################"
	cat parsedTable.txt
	echo -e "\n----------------------------------------------------------x-------------------------------------------------------------\n"
done

