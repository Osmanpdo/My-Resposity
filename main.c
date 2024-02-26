#include <stdio.h>
#include "src/func_menus.h"
#include "src/func_tela.h"

/*OBS: O system("clear || cls"), ele pode limpar a tela tanto do windows como do linux */

int main(){
    
	int num;
	
	//Menu principal
	while (True){
		Menu_Principal();
		num = Dados_Validos(1, 3);
        if (num == 3) num = 4; //para os outros menus não interfirir
		switch (num){
            //Menu de jogos
			case 1:
				while (True){
    				system("clear || cls");
    				Menu_Jogos();
    				num = Dados_Validos(1, 3);
    				
    				switch (num){
    					case 1:
    						num = Pedra_Papel_Tesoura();
                            
    					    break;		
    					case 2:
    						num = Jogo_Adivinha();
                            
    						break;
    					case 3:	
    						break;
    				}
        			system("clear || cls");	
        			if (num == 3) break; //Voltar ao menu principal	
				}
				break;
            //Menu de cálculos
			case 2:
			    while (True){
			        system("clear || cls");
    			    Menu_Calculos();
                    num = Dados_Validos(1, 4);

                    //Calculadora simples
                    switch(num){
                       case 1:
                        num = Calculadora_Simples();
                        continue; // Voltar ao menu de cálculos
                        break;
                           
                        //Conversor de medida 
                       case 2:
                           num = Comversor_de_Medida();
                           continue; //Voltar ao menu de cálculos
                           break;
                        //Calcular área de algumas figuas
                       case 3:
                           num = Area_Figuras_Planas();
                           continue;
                           
                           break;
                       case 4:
                           break;       
                    }
                    system("clear || cls");
                    if (num == 4){
                        num = 0;
                    }
                    break;    
                }
			    break;
            
            //Sair do Switch
			case 4:
			    system("clear || cls");
				printf("Obrigado por usar nosso programa!");
				
				break;
				
		}
	if (num == 4) break; //Parar o menu principal		
	}
	
}
