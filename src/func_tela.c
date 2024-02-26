#include <stdio.h>
#include "func_tela.h"
#define True 1

//Esta função serve para pegar apenas números interios de acordo com meus parâmetros
int entradaDadosValidos(int inicio, int fim) {
	int retorno = -1, num;
    char carac;
	while (True){
    	
    	do{
            //O retorno vai receber 1 ou 0, caso seja verdadeiro ou falso respectivamente
    		retorno = scanf("%d", &num); 
            if (retorno == 0) printf("Digite um opção válida: ");
            
    		do{
    			carac = getchar(); //Se o usuário digitar algum caracter a função getchar vai limpar todo tudo o que estiver no buffer de teclado
    			
    			}while(carac != '\n'); //No final da string sempre terá como último caracter o enter
    		} while(retorno == 0);
       if (num < inicio || num > fim){
           //Caso não obedeça os paramentos
           printf("Digite um opção válida: ");
           continue; //Caso não obedeça os paramentos
       }else break; //Caso obedeça os parâmetros retorna o num 
	}
	return num;
}

//Mesma coisa só muda que não tem parâmetros e serve apenas para números reais 
float entradaDadosValidosReal(void){
    int retorno = -1;
    float num;
    char pala;
    do{
        retorno = scanf("%f", &num);
        if (retorno == 0) printf("Digite corretamente: ");
        else continue;                
        do{
            
            pala = getchar();
            
            }while(pala != '\n');
    } while(retorno == 0);
}


//Telas do software

void telaMenuPrincipal(void){
	int i;
	char menu[149] = "=-=-=-=-=-=-=-=-=-=-=--=-=-=-=\nSeja bem-vindo(a) ao menu!\n[1]Jogos\n[2]Cálculos\n[3]Sair do programa\n=-=-=-=-=-=-=-=-=-=-=--=-=-=-=\nDigite aqui: ";
	for (i = 0; i < 149; i++) printf("%c", menu[i]);	
}

void menuCalculos(void){
    int i;
    char menu[261] = "=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=\nSeja bem-vindo(a) ao menu de cálculos\nEscolha uma das opções abaixo:\n\n[1]Calculadora simples\n[2]Conversor de medida simples\n[3]Calcular a área\n[4]Voltar ao menu\n=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=\nDigite aqui: ";
    
    for (i = 0; i < 261; i ++) printf("%c", menu[i]);    
}

void menuJogos(void){
    int i;
    char menu[193] = "=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=\nSeja bem-vindo(a) ao menu de jogos\n[1]Pedra, papel ou tesoura\n[2]Jogo de adivinha\n[3]Voltar ao menu\n=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=\nDigite aqui: ";
    
    for (i = 0; i < 193; i++) printf("%c", menu[i]);    
}

void Menu_Caculadora(void){
    int i;
    char menu[256] = "=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=\nSeja bem-vindo(a) a calculadora simples!\nEscolha uma das operações abaixo:\n[1]Somar\n[2]Subtrair\n[3]Multiplicar\n[4]Dividir\n[5]Voltar ao menu de cálculos\n=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=\nDigite aqui: ";
    
    for (i = 0; i < 256; i ++) printf("%c", menu[i]);    
}

void Menu_Conversor_P1(void){
    int i;
    char menu[222] = "=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=\nSeja bem-vindo(a) a conversor de medida\nsimples!\nEscolha uma das opções abaixo:\n[1]Metros\n[2]Decímetros\n[3]Centímetros\n=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=\nDigite aqui: ";
    
    for (i = 0; i < 222; i ++) printf("%c", menu[i]);    
}

void Menu_Conversor_P2(void){
    int i;
    char menu[66] = "Para...\n[1]metros\n[2]decímetros\n[3]centímetros\ndigite aqui: ";
    
    for (i = 0; i < 66; i ++) printf("%c", menu[i]);    
}
