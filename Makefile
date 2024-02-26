all: func_menus.o func_tela.o
	
	mv func_menus.o bin
	mv func_tela.o bin

	gcc main.c bin/func_menus.o bin/func_tela.o -o main
	mv main bin
	
func_menus.o: src/func_menus.c
	gcc -c src/func_menus.c

func_tela.o: src/func_tela.c
	gcc -c src/func_tela.c

clean:
	rm -rf bin/*.o
	rm -r bin/main

run:
	bin/./main

