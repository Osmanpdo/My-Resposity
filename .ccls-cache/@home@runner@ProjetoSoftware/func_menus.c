#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "funcs_menus.h"
#include "func_tela.h"

int Calculadora_Simples(void){
	float n1, n2, resultado;
	int num;
	while (True){
        system("clear || cls");
        printf("Seja bem-vindo(a) a calculadora simples\nDigite uma das operações abaixo:\n[1]Somar\n[2]Subtrair\n[3]Multiplicar\n[4]Dividir\n[5]Voltar ao menu de cálculos\nDigite aqui: ");
       num = Dados_Validos(1,5);
       system("clear || cls");
       
       if (num == 5) break;
       (num == 1) ? printf("[Soma]\n") : (num == 2) ? printf("[Subtração]\n") : (num == 3) ? printf("[Multiplicação]\n") : printf("[Divisão]\n");
       printf("Digite o primeiro número: ");
       n1 = Dados_Validos_Real();
       printf("Digite outro número: ");
       n2 = Dados_Validos_Real();
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
     num = Dados_Validos(1,2);
     if (num == 1) continue;
     else break;  
    }
    return num;
}	


int Comversor_de_Medida(void){
    int num, teste[1][3] = {1,10,100};
    float n1,n2;
    while (True){
        system("clear || cls");                      printf("[1]M\tpara\t[1]M\n[2]DM\t\t[2]DM\n[3]CM\t\t[3]CM\nDigite aqui: ");
        num = Dados_Validos(1, 3); 
        switch(num){
            case 1:
                printf("Para...");
                num = Dados_Validos(1, 3);
                printf("Digite aqui: ");
                switch(num){
                    case 1:
                        n1 = Dados_Validos_Real();
                        printf("%.2fM = %.2fM",n1, n1);
                        break;
                    case 2:
                        n1 = Dados_Validos_Real();
                        printf("%.2fM ", n1);
                        n1 = n1 * (float)teste[0][1];
                        printf("= %.2fDM", n1);
                        break;
                    case 3:
                        n1 = Dados_Validos_Real();
                        printf("%.2fM ", n1);
                        n1 = n1 * (float)teste[0][2] ;
                        printf("= %.2fCM", n1);
                        break;
                }
                break;
            case 2:
                printf("Para...");
                num = Dados_Validos(1, 3);
                printf("Digite aqui: ");
                switch(num){
                   case 1:
                        n1 = Dados_Validos_Real();
                        printf("%.2fDM ", n1);
                        n1 = n1 / (float)teste[0][1] ;
                        printf("= %.2fM", n1);
                        break;
                   case 2:
                        n1 = Dados_Validos_Real();
                        printf("%.2fDM = %.2fDM", n1, n1);
                        break;
                   case 3:
                        n1 = Dados_Validos_Real();
                        printf("%.2fDM ", n1);
                        n1 = n1 * (float)teste[0][1] ;
                        printf("= %.2fCM", n1);
                        break;
                 }	        
                break;
            case 3:
                printf("Para...");
                num = Dados_Validos(1, 3);
                printf("Digite aqui: ");
                switch(num){
                   case 1:
                        n1 = Dados_Validos_Real();
                        printf("%.2fCM ", n1);
                        n1 = n1 / (float)teste[0][2] ;
                        printf("= %.2fM", n1);
                        break;
                   case 2:
                        n1 = Dados_Validos_Real();
                        printf("%.2fCM ", n1);
                        n1 = n1 / (float)teste[0][1] ;
                        printf("= %.2fDM", n1);
                        break;
                   case 3:
                        n1 = Dados_Validos_Real();
                        printf("%.2fCM = %.2fCM", n1, n1);
                        break;
                break;
               }
         }
        system("clear || cls");
        printf("\nDeseja fazer outra conversão?\n[1]sim\n[2]não\nDigite aqui: ");
        num = Dados_Validos(1, 2);
        if (num == 1) continue;
        else break; 
    }   
    return num;
}


int Pedra_Papel_Tesoura(void){  
    int jogador,ia,cont;
    cont = 0;
    system("clear || cls");
    printf("Bem-vindo ao pedra, papel e tesoura\n");

    sleep(2);
    system("clear || cls");
    while (cont < 2){

        printf("Escolha uma das opções:\n[1]pedra\n[2]papel\n[3]tesoura\nDigite aqui: ");
        jogador = Dados_Validos(1,3);
        system("clear || cls");
        printf("A IA está pensando...\n");
        
        sleep(2);
        
        printf("Pronto!\n");
        sleep(1);
        srand(time(NULL));
        ia = rand()%3+1;
    
        if (jogador == ia){
            printf("Processando...\n");
    
            sleep(2);
              
            printf("Deu empate!\n");
                
        }
        else if (jogador == 2 && ia == 1){
            printf("Processando...\n");
    
            sleep(2);
            
            printf("Vitória do jogador\n");
                
        }
        else if (jogador == 3 && ia == 2){
            printf("Processando...\n");
    
            sleep(2); 
            
            printf("Vitoria do jogador\n");
        }
        else if (jogador == 1 && ia == 3){
            printf("Processando...\n");
    
            sleep(2);
              
            printf("Vitoria do jogador\n");
            
        }
        else{
            printf("Processando...\n");
    
            sleep(2);
              
            printf("Vitoria da IA\n");
        }
    
        printf("\nDeseja jogar novamente?\n");
        printf("[1]Sim\n[2]Não\nDigite aqui: ");
        cont = Dados_Validos(1,2);
        system("clear || cls");
    }

    return cont;
}

int Jogo_Adivinha(void){
    
    int player,n,nmin,nmax,rep,cont;
    cont = 0;
    system("clear || cls");
    printf("Bem-vindo(a) ao adivinha, você tem 5 chances\n");

    sleep(2);
    system("clear || cls");


    while (cont < 2){
    
        cont = 0;
        rep = 5;
        
        srand(time(NULL));
        n = rand()%10+1;

        nmin = n - 2;
        nmax = n + 2;

        while(rep != 0){
            printf("Você tem %d tentativas \n", rep);
            printf("Digite um número entre 1 e 10\nDigite aqui: ");
            player = Dados_Validos(1,10);

            if (player == n){
                system("clear || cls");
                printf("Você acertou!\n");
                break;
            }
        
            else if (n < player && player <= nmax){
                system("clear || cls");
                printf("Você chegou perto!\n");
                rep -= 1; 
            }
            else if (n > player && nmin <= player){
                system("clear || cls");
                printf("Você chegou perto!\n");
                rep -= 1;    
            }
            else{
                system("clear || cls");
                printf("Você está longe\n");
                rep -= 1; 
            } 
        }
        if (rep == 0){
            system("clear || cls");
            printf("Você perdeu :(\n");
        }
        printf("Deseja jogar novamente?\n");
        printf("[1]sim\n[2]não\nDigite aqui: ");
        cont = Dados_Validos(1,2);
        system("clear || cls");
    }
     return cont;
}

int Area_Figuras_Planas(void){
	float area, base, altura, lado;
	int num;
	
	while (True){
	    system("clear || cls");    
        printf("[1]Triângulo\n[2]Quadrado\n[3]Retângulo\n[4]Voltar ao menu de cálculo\nDigite aqui: ");
	    num = Dados_Validos(1,4);
	    switch(num){
	        case 1:
	            system("clear || cls");
	            printf("Informe a altura do triângulo: ");
        	    altura = Dados_Validos_Real();
	            printf("Informe a base do triângulo: ");
	            base = Dados_Validos_Real();
	            area = (base*altura)/2;
	            printf("A área do triângulo é %.2f\n", area);
	            
	            printf("Deseja fazer outra operação?\n[1]Sim\n[2]Não\nDigite aqui: ");
	            num = Dados_Validos(1,2);
	            if (num == 1) break;
	            
	             
	            break;
	        case 2:
	            system("clear || cls");
	            printf("Informe o lado do quadrado: ");
	            lado = Dados_Validos_Real();
	            area = lado*lado;
	            printf("A área do quadrado é %.2f\n", area);
	            printf("Deseja fazer outra operação?\n[1]Sim\n[2]Não\nDigite aqui: ");
	            num = Dados_Validos(1,2);
	            if (num == 1) break;
	            
	            
	            break;
	        case 3:
	            system("clear || cls");
	            printf("Informe a altura do retângulo: ");
	            altura = Dados_Validos_Real();
	            printf("Informe a base do retângulo: ");
	            base = Dados_Validos_Real();
	            area = base*altura;
	            printf("A área do retângulo é %.2f\n", area);	            
	            printf("Deseja fazer outra operação?\n[1]Sim\n[2]Não\nDigite aqui: ");
	            num = Dados_Validos(1,2);
	            if (num == 1) break;
	            
	             
	            break;
	        case 4:
	            break;
	    }
    	if (num == 4){
            num = 0;
            break;
        }
	}
    return num;
}