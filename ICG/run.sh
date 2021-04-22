#!/bin/bash
YELLOW='\033[1;33m'
NOCOLOR='\033[0m'

yacc -d ICG.y 
lex -w ICG.l 
gcc -Wall -fno-stack-protector -g -w y.tab.c lex.yy.c -ll -o ICG

for i in {1..2}
	do
	echo -ne "\n${YELLOW}Running testcase"$i"\n${NOCOLOR}"
	./ICG<test$i.c
	($i++)
	printf "\n\n"
	done
	
