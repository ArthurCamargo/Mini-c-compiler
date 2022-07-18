CC = gcc
CFLAGS = -lfl

default: all

all: bison flex analisador

bison:
	bison -d parser.y
flex:
	flex scanner.l

analisador:
	$(CC) main.c lex.yy.c parser.tab.c -o etapa2 $(CFLAGS)

clean:
	rm  etapa2
