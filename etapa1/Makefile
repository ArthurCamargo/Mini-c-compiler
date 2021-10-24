CC = gcc
CFLAGS = -lfl

default: all

all: flex analisador

flex-death-mode:
	flex -s scanner.l
flex:
	flex scanner.l

analisador: lex.yy.c
	$(CC) main.c lex.yy.c -o etapa1 $(CFLAGS)

clean:
	rm  analisador

death-mode: flex-death-mode analisador
