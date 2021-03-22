


Bison:
	make clean
	mkdir -p bin
	lex -o src/lex.yy.c src/scanner.lex
	cd src && bison --report=state -t -d parser.y 
	gcc src/lex.yy.c src/parser.tab.c -o bin/bison.out


lex:
	make clean 
	mkdir -p bin
	lex -o src/lex.yy.c src/scanner.lex
	gcc -o bin/scanner.out src/lex.yy.c

runbison:
	./bin/bison.out < sample_inputs/sample2.c


runlex:
	./bin/scanner.out sample_inputs/sample1.c

clean:
	rm -f src/parser.tab.c
	rm -rf ./bin
	rm -f src/lex.yy.c
	rm -f src/parser.tab.h
