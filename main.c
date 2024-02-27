#include <stdio.h>
#include <stdlib.h>
#include "./src/func_menus.h"
#include "./src/func_tela.h"


int main(){
    
	int numeroCondicao;
	
	while (True){
		telaMenuPrincipal();
		numeroCondicao = entradaDadosValidos(1, 3);

        if (numeroCondicao == 1) {
            while (True){
    				limparTela();
    				menuJogos();
    				numeroCondicao = entradaDadosValidos(1, 3);
    				
                    if (numeroCondicao == 1) {
                        numeroCondicao = pedraPapelTesoura();
                    } else if (numeroCondicao == 2) {
                        numeroCondicao = jogoAdivinha();
                    } else {
                        numeroCondicao = 0;
                        limparTela();	
                        break;
                    }
				}
        } else if (numeroCondicao == 2) {
            while (True){
			        limparTela();
    			    menuCalculos();
                    numeroCondicao = entradaDadosValidos(1, 4);
                    
                    if (numeroCondicao == 1) {
                        numeroCondicao = calculadoraSimples();
                        continue;
                    } else if (numeroCondicao == 2) {
                        numeroCondicao = conversorMedidas();
                        continue;
                    } else if (numeroCondicao == 3) {
                        numeroCondicao = areaFigurasPlanas();
                        continue;
                    } else {
                        numeroCondicao = 0;
                        limparTela();
                        break;
                    }
                        
                }
        } else {
            limparTela();
			printf("Obrigado por usar nosso programa!\n");	
			break;
        }		
	}	
}
