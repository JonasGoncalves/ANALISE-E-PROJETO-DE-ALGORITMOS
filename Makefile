all:
	gcc ordenacao_comparacao.c -o main
	clear
	./main

compile:
	gcc ordenacao_comparacao.c -o main

clean:
	rm *.o		