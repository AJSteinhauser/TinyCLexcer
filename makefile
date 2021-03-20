


make:
	mkdir -p bin
	lex -o src/lex.yy.c src/scanner.lex
	gcc -o bin/scanner.out src/lex.yy.c 

run:
	./bin/scanner.out sample_inputs/sample1.c

clean:
	rm -rf ./bin
	rm -f src/lex.yy.c
	
