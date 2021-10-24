CC = gcc
CFLAGS = -lfl
DCFLAGS = -g -fsanitize=address $(CFLAGS)

default: all

all: bison flex analisador

debug: bison_debug flex analisador-debug

counter: counterexample flex analisador

bison:
	bison -d parser.y

bison_debug:
	bison -d -v --report-file=report parser.y

counterexample:
	bison -d -Wcounterexamples parser.y

flex:
	flex scanner.l

analisador-debug:
	$(CC) main.c tree.c lex.yy.c parser.tab.c -o etapa3 $(DCFLAGS)

analisador:
	$(CC) main.c tree.c lex.yy.c parser.tab.c -o etapa3 $(CFLAGS)

clean:
	rm  etapa3
