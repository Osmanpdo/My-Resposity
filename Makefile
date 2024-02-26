all: func_menus.o func_tela.o
	gcc main.c func_menus.o func_tela.o -o main


func_menus: func_menus.c
	gcc -c func_menus.c

func_tela: func_tela.c
	gcc -c func_tela.c

clean:
	rm -rf *.o
	rm -f main