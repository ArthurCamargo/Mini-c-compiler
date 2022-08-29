CC = gcc
CFLAGS =
DCFLAGS = -g  $(CFLAGS)

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
	$(CC) $(DCFLAGS) utils.c main.c tree.c stack.c symbol_table.c lex.yy.c parser.tab.c -o etapa4

analisador:
	$(CC) $(CFLAGS) utils.c main.c tree.c stack.c symbol_table.c lex.yy.c parser.tab.c -o etapa4

clean:
	rm  etapa4
