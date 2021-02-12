

make:
	lex -o src/lex.yy.c src/scanner.lex
	gcc -o bin/scanner.out src/lex.yy.c src/driver.c

run:
	make
	./bin/scanner.out < sample_inputs/sample1.c
