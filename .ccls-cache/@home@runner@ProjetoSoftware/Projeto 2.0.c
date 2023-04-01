#include <stdio.h>
int Dados_Validos(int inicio, int fim){
	int retorno = -1, y;
	while (1){
    	
    	char pala;
    	do{
    		printf("Digite uma opção válida: ");
    		retorno = scanf("%d", &y);
    		do{
    			pala = getchar();
    			
    			}while(pala != '\n');
    		} while(retorno == 0);
       if (y < inicio || y > fim) continue;
       else break;
	}
	return y;
}
	
void Tela_Menu(void){
	printf("=-=-=-=-=-=-=-=-=-=-=--=-=-=-=\nSeja bem-vindo(a) ao menu!\n[1]Jogos\n[2]Cálculos\n[3]Sobre o programa\n[4]Sair do programa");
	printf("\n=-=-=-=-=-=-=-=-=-=-=--=-=-=-=\n");
		
	}


int main()
{
	int num, teste[1][3] = {1,10,100};
	float n1, n2, resultado;
	
	//Loop principal
	while (1){
		//Certificar que o usuário digitará correto
		Tela_Menu();
		num = Dados_Validos();
		switch (num){
			case 1:
			    //Menu de jogos
				while (1){
    				system("clear || cls"); //Limpar a tela do windows ou do linux
    				printf("[1]Pedra, papel ou tesoura\n[2]Jogo de adivinha\n[3]Voltar ao menu\n");
    				num = Dados_Validos();
    				
    				switch (num){
    					case 1:
    						
    					    break;		
    					case 2:
    						
    						break;
    					case 3:
    						
    						break;
    				}
    			system("clear || cls");	
    			if (num == 3) break; //Voltar ao Loop principal	
				}
				break;
			case 2:
			    //Menu de cálculos
			    while (1){
			        system("clear || cls");
    			    printf("Seja bem-vindo(a) ao menu de cálculos\nEscolha uma das opções abaixo:\n\n[1]Calculadora simples\n[2]Conversor de medida simples\n[3]Calcular a área\n[4]Voltar ao menu");
                    printf("\nDigite aqui: ");
                    scanf("%d", &num);
                    switch(num){
                       case 1:
                           //Calculadora Simples
                           while (1){
                                system("clear || cls");
                        	    printf("Seja bem-vindo(a) a calculadora simples\nDigite uma das operações abaixo:\n[1]Somar\n[2]Subtrair\n[3]Multiplicar\n[4]Dividir\n[5]Voltar ao menu de cálculos\nDigite aqui: ");
                        	   scanf("%d", &num);
                        	   system("clear || cls");
                        	   if (num == 5) break;
                        	   (num == 1) ? printf("[Soma]\n") : (num == 2) ? printf("[Subtração]\n") : (num == 3) ? printf("[Multiplicação]\n") : printf("[Divisão]\n");
                        	   printf("Digite o primeiro número: ");
                        	   scanf("%f", &n1);
                        	   printf("Digite outro número: ");
                        	   scanf("%f", &n2);
                        	   switch(num){
                        	       case 1:
                        	           resultado = n1 + n2;
                        	           printf("%.2f + %.2f = %.2f", n1, n2, resultado);
                        	           break;
                        	       case 2:
                        	           resultado = n1 - n2;
                        	           printf("%.2f - %.2f = %.2f", n1, n2, resultado);
                        	           break;
                        	       case 3:
                        	           resultado = n1 * n2; 
                        	           printf("%.2f * %.2f = %.2f", n1, n2, resultado);
                        	           break;
                        	       case 4:
                        	           if (n2 == 0) printf("Essa divisão é indeterminado");
                        	           else {
                        	               resultado = n1 / n2;
                        	               printf("%.2f / %.2f = %.2f", n1, n2, resultado);
                        	           }
                        	           break;
                        	 }
                        	 printf("\n\nDeseja fazer outra operação?\n[1] sim \t [2] Não\nDigite aqui: ");
                             scanf("%d", &num);
                             if (num == 1) continue;
                             else break;  
                          }
                           continue; // Voltar ao menu de cálculos
                           break;
                           
                        //Conversor de medida 
                       case 2:   
                           while (1){
                            	system("clear || cls");                      printf("[1]M\tpara\t[1]M\n[2]DM\t\t[2]DM\n[3]CM\t\t[3]CM");
                            	printf("\nDigite aqui: ");
                            	scanf("%d", &num);
                            	switch(num){
                            	    case 1:
                            	        printf("Para...");
                            	        scanf("%d", &num);
                            	        switch(num){
                            	            case 1:
                            	                printf("Digite aqui: ");
                            	                scanf("%f", &n1);
                            	                printf("%.2fM = %.2fM",n1, n1);
                            	                break;
                            	            case 2:
                            	                printf("Digite aqui: ");
                            	                scanf("%f", &n1);
                            	                printf("%.2fM ", n1);
                            	                n1 = n1 * (float)teste[0][1];
                            	                printf("= %.2fDM", n1);
                            	                break;
                            	            case 3:
                            	                printf("Digite aqui: ");
                            	                scanf("%f", &n1);
                            	                printf("%.2fM ", n1);
                            	                n1 = n1 * (float)teste[0][2] ;
                            	                printf("= %.2fCM", n1);
                            	                break;
                            	        }
                            	        break;
                            	    case 2:
                            	        printf("Para...");
                            	        scanf("%d", &num);
                            	    	switch(num){
                            	    	   case 1:
                            	    	        printf("Digite aqui: ");
                            	                scanf("%f", &n1);
                            	                printf("%.2fDM ", n1);
                            	                n1 = n1 / (float)teste[0][1] ;
                            	                printf("= %.2fM", n1);
                                	            break;
                            	    	   case 2:
                            	    	        printf("Digite aqui: ");
                            	                scanf("%f", &n1);
                            	                printf("%.2fDM = %.2fDM", n1, n1);
                            	    	        break;
                            	    	   case 3:
                            	    	        printf("Digite aqui: ");
                            	                scanf("%f", &n1);
                            	                printf("%.2fDM ", n1);
                            	                n1 = n1 * (float)teste[0][1] ;
                            	                printf("= %.2fCM", n1);
                            	    	        break;
                            	    	 }	        
                            	        break;
                            	    case 3:
                            	    	printf("Para...");
                            	        scanf("%d", &num);
                            	    	switch(num){
                            	    	   case 1:
                            	    	        printf("Digite aqui: ");
                            	                scanf("%f", &n1);
                            	                printf("%.2fCM ", n1);
                            	                n1 = n1 / (float)teste[0][2] ;
                            	                printf("= %.2fM", n1);
                                	            break;
                            	    	   case 2:
                            	    	        printf("Digite aqui: ");
                            	                scanf("%f", &n1);
                            	                printf("%.2fCM ", n1);
                            	                n1 = n1 / (float)teste[0][1] ;
                            	                printf("= %.2fDM", n1);
                            	    	        break;
                            	    	   case 3:
                            	    	        printf("Digite aqui: ");
                            	                scanf("%f", &n1);
                            	                printf("%.2fCM = %.2fCM", n1, n1);
                            	    	        break;
                            	        break;
                            	       }
                            	 }
                            system("clear || cls");
                            printf("\nquer continuar?\n[1]sim\n[2]não\nDigite aqui: ");
                            scanf("%d", &num);
                            if (num == 1) continue;
                            else break; 
                            }
                           
                           continue; //Impedir de sair do Loop de cálculos
                           break;
                       case 3:
                           break;
                       case 5:
                           break;       
                    }
                system("clear || cls");
                num++;  //num = 5 para não interfirir no menu principal 
                if (num  == 5) break;   //voltar para loop principal 
                break;    
                }
			    break;
			case 4:
			    system("clear || cls");
				printf("Obrigado por usar nosso programa!");
				
				break;
				
		}
	if (num == 4) break; //Para o loop principal		
	}
	
}