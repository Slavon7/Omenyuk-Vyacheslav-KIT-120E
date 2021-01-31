all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile: task1main.bin 

task1main.bin:
	gcc -g src/task1.c  -o dist/task1main.bin



