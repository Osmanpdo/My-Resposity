#include <stdio.h>
#include <stdlib.h>
#include "func_tela.h"
#define True 1

void limparTela() {
    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #else defined(_linux_) || defined(_unix_)
        system("clear");
    #endif
}

//Esta função serve para pegar apenas números interios de acordo com meus parâmetros
int entradaDadosValidos(int inicio, int fim) {
	int retorno = -1, numeroInteiroCorreto;
    char caracter;
	while (True){
    	
    	do{
            //O retorno vai receber 1 ou 0, caso seja verdadeiro ou falso respectivamente
    		retorno = scanf("%d", &numeroInteiroCorreto); 
            if (retorno == 0) printf("Digite um opção válida: ");
            
    		do{
    			caracter = getchar(); //Se o usuário digitar algum caracter a função getchar vai limpar todo tudo o que estiver no buffer de teclado
    			
    			}while(caracter != '\n'); //No final da string sempre terá como último caracter o enter
    		} while(retorno == 0);
       if (numeroInteiroCorreto < inicio || numeroInteiroCorreto > fim){
           //Caso não obedeça os paramentos
           printf("Digite um opção válida: ");
           continue; //Caso não obedeça os paramentos
       }else break; //Caso obedeça os parâmetros retorna o num 
	}
	return numeroInteiroCorreto;
}

//Mesma coisa só muda que não tem parâmetros e serve apenas para números reais 
float entradaDadosValidosReal(void){
    int retorno = -1;
    float numeroRealCorreto;
    char palavra;
    do{
        retorno = scanf("%f", &numeroRealCorreto);
        if (retorno == 0) printf("Digite corretamente: ");
        else continue;                
        do{
            
            palavra = getchar();
            
            }while(palavra != '\n');
    } while(retorno == 0);
}


//Telas do software

void telaMenuPrincipal(void){
	printf("=-=-=-=-=-=-=-=-=-=-=--=-=-=-=\n");
    printf("bem-vindo(a) ao menu!\n");
    printf("[1]Jogos\n");
    printf("[2]Cálculos\n");
    printf("[3]Sair do programa\n");
    printf("=-=-=-=-=-=-=-=-=-=-=--=-=-=-=\n");
    printf("Digite aqui: ");
}

void menuCalculos(void){
    printf("=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=\n");
    printf("Seja bem-vindo(a) ao menu de cálculos\n");
    printf("Escolha uma das opções abaixo:\n");
    printf("[1]Calculadora simples\n");
    printf("[2]Conversor de medida simples\n");
    printf("[3]Calcular a área\n");
    printf("[4]Voltar ao menu\n");
    printf("=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=\n");
    printf("Digite aqui: ");
}

void menuJogos(void){
    printf("=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=\n");
    printf("Seja bem-vindo(a) ao menu de jogos\n");
    printf("[1]Pedra, papel ou tesoura\n");
    printf("[2]Jogo de adivinha\n");
    printf("[3]Voltar ao menu\n");
    printf("=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=\n");
    printf("Digite aqui: "); 
}

void menuCaculadora(void){
    printf("=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=\n");
    printf("Seja bem-vindo(a) a calculadora simples!\n");
    printf("Escolha uma das operações abaixo:\n");
    printf("[1]Somar\n");
    printf("[2]Subtrair\n");
    printf("[3]Multiplicar\n");
    printf("[4]Dividir\n");
    printf("[5]Voltar ao menu de cálculos\n");
    printf("=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=\n");
    printf("Digite aqui: ");
  
}

void menuConversorMedida1(void){
    printf("=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=\n");
    printf("Seja bem-vindo(a) a conversor de medida simples!\n");
    printf("Escolha uma das opções abaixo:\n");
    printf("[1]Metros\n");
    printf("[2]Decímetros\n");
    printf("[3]Centímetros\n");
    printf("=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=\n");
    printf("Digite aqui: ");
}

void menuConversorMedida2(void){
    printf("=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=\n");
    printf("Para...\n");
    printf("[1]metros\n");
    printf("[2]decímetros\n");
    printf("[3]centímetros\n");
    printf("=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=\n");
    printf("digite aqui: "); 
}
