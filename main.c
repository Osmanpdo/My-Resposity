#include <stdio.h>
#include "src/func_menus.h"
#include "src/func_tela.h"


int main(){
    
	int numeroCondicao;
	
	//Menu principal
	while (True){
		Menu_Principal();
		numeroCondicao = Dados_Validos(1, 3);

        if (numeroCondicao == 1) {
            while (True){
    				system("clear || cls");
    				Menu_Jogos();
    				numeroCondicao = Dados_Validos(1, 3);
    				
                    if (numeroCondicao == 1) {
                        numeroCondicao = Pedra_Papel_Tesoura();
                    } else if (numeroCondicao == 2) {
                        numeroCondicao = Jogo_Adivinha();
                    } else {
                        numeroCondicao = 0;
                        system("clear || cls");	
                        break;
                    }
				}
        } else if (numeroCondicao == 2) {
            while (True){
			        system("clear || cls");
    			    Menu_Calculos();
                    numeroCondicao = Dados_Validos(1, 4);
                    
                    if (numeroCondicao == 1) {
                        numeroCondicao = Calculadora_Simples();
                        continue; // Voltar ao menu de cálculos
                    } else if (numeroCondicao == 2) {
                        numeroCondicao = Comversor_de_Medida();
                        continue; //Voltar ao menu de cálculo
                    } else if (numeroCondicao == 3) {
                        numeroCondicao = Area_Figuras_Planas();
                        continue;
                    } else {
                        numeroCondicao = 0;
                        system("clear || cls");
                        break;
                    }
                        
                }
        } else {
            system("clear || cls");
			printf("Obrigado por usar nosso programa!\n");	
			break;
        }		
	}	
}
