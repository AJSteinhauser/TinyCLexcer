


make:
	lex -o src/lex.yy.c src/scanner.lex
	gcc -o bin/scanner.out src/lex.yy.c 

run:
	./bin/scanner.out sample_inputs/sample1.c

makeDriver:
	lex -o src/lex.yy.c src/scanner.lex
	gcc -ll -o bin/scanner.out src/driver.c src/lex.yy.c

runDriver:
	make
	./bin/scanner.out < sample_inputs/sample1.c
