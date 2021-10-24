CC = gcc
CFLAGS = -lfl

default: all

test: all teste

all: bison flex analisador

debug: bison_debug flex analisador teste

counter: counterexample flex analisador

bison:
	bison -d parser.y

bison_debug:
	bison -d -v --report-file=report parser.y

counterexample:
	bison -d -Wcounterexamples parser.y

flex:
	flex scanner.l

analisador:
	$(CC) main.c lex.yy.c parser.tab.c -o etapa2 $(CFLAGS)

clean:
	rm  etapa2

teste:
	./run_tests.sh
