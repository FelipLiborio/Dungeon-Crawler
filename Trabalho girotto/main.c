#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//variavies globais:
int cont_menu1, cont_menu2;      // variaveis para centralizar o menu na tela	
int cont_mortes = 0;
int game_over=0;
int final_secreto=0;
char comando;                     //comando do jogador
//funções :
void centrali_menu()								//funcao para centralizar o menu na tela
{

	for(cont_menu2=0;cont_menu2<75;cont_menu2++)		
	{
				printf(" ");
	}
}
void contador_mortes(int cont_mortes)
{
	if(cont_mortes==3) 	//verificador do numero de mortes
	 {
	    game_over=1;
	 }		
}
void centraliv_perguntas()
{
	 for(cont_menu1=0;cont_menu1<20;cont_menu1++)           
	{
			printf("\n");
	}
}
void centralih_perguntas()
{
	for(cont_menu2=0;cont_menu2<65;cont_menu2++)		
	{
				printf(" ");
	}	
}
char escolha_personagem()
{
		while(1)	
		{		
			if(_kbhit())
			{
			comando = _getch();
			break;
			}
	    }
	    return comando;
}


int main(int argc, char *argv[]) {

//Codigo Menu
	
	srand(time(NULL));
	
char escolha, movim_escolhas;    	//variaveis de escolha e movimentação no menu



escolha = 'j';		    // estado inicial do jogo
while(1)
{
	system("cls");
	
	
		if(game_over==1)
		{
			while(1)
			{
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				centralih_perguntas();
				printf("\033[32m VOCE FOI ASSIMILADO.\033[0m\n");
				printf("\n\n");
				centralih_perguntas();
				printf("\033[32m voltar ao menu<- \033[0m\n");
			
					while(1)				//laço para pegar o comando do teclado
					{		
						if(_kbhit())
						{
						comando = _getch();
						break;
						}
					}
				if(comando = 'i')
				{
					break;
				}
			}
		}
	
	game_over=0;
	
	while(1)						   	 // loop principal  do menu
	{ 
		system("cls");
		if(escolha=='j') 				    					//codigo se a opção jogo estiver selecionada
		{
			for(cont_menu1=0;cont_menu1<20;cont_menu1++)
			{
				printf("\n");
			}
			centrali_menu();
			printf(" Jogar <-\n");
			
			centrali_menu();	
			printf("Tutorial\n");
		
			centrali_menu();		
			printf("Sair\n");
		
			while(1)				//laço para pegar o comando do teclado
			{		
				if(_kbhit())
				{
				movim_escolhas = _getch();
				break;
				}
			}
			system("cls");
			
			if(movim_escolhas=='s') 
			{
				escolha='t';
			}
			else if(movim_escolhas=='w')
			{
				escolha='s';
			}
			else if(movim_escolhas=='i')
			{
				break;
			}
		}
		
		if(escolha=='t') 										// codigo se a opção tutorial estiver selecionada 
		{
			for(cont_menu1=0;cont_menu1<20;cont_menu1++)
			{
				printf("\n");
			}
			centrali_menu();
			printf("Jogar\n");
		
			centrali_menu();	
			printf(" Tutorial <-\n");
		
			centrali_menu();	
			printf("Sair\n");
			
			while(1)				//laço para pegar o comando do teclado
			{		
				if(_kbhit())
				{
				movim_escolhas = _getch();
				break;
				}
			}	 
			
			system("cls");
			
			if(movim_escolhas=='s')
			{
				escolha='s';
			}
			else if(movim_escolhas=='w')
			{
				escolha='j';
			}
			else if(movim_escolhas=='i')		//selecionar opção de ver o tutorial 
			{
				escolha='d';
				
			}
		}
		
		if(escolha=='s')											// codigo se a opção sair estiver selecionada
		{
			for(cont_menu1=0;cont_menu1<20;cont_menu1++)
			{
				printf("\n");
			}
			centrali_menu();
			printf("Jogar\n");
		
			centrali_menu();	
			printf("Tutorial\n");
				
			centrali_menu();
			printf(" Sair <-\n");
			
			while(1)						//laço para pegar o comando do teclado
			{		
				if(_kbhit())
				{
				movim_escolhas = _getch();
				break;
				}
			}
			system("cls");
			if(movim_escolhas=='s')
			{
				escolha='j';
			}
			else if(movim_escolhas=='w')
			{
				escolha='t';
			}
			else if(movim_escolhas=='i')
			{
				printf("Obrigado por jogar.");
				exit(0);					//seleciona a opção sair.
			}
			
		}
		if(escolha=='d')										//codigo se estiver dentro da aba de tutoriais 
		{
			printf("O LEGEND GATE apresenta um jogo de puzzles com uma campanha baseada em diferentes niveis que aumentam de dificuldade e complexidade exponencialmente, \ndito isso, aqui estao as instrucoes para guiar-se em sua jornada:\n\n ");
			printf(">A movimentacao do jogo se baseia nas teclas w/a/s/d e a interacao a tecla  i .\n ");
			printf(">O player precisa utilizar das ferramentas disponiveis no mapa para que possa progredir nos niveis, dentre as ferramentas tem a chave='@',porta='D',\nbotao='O' e teleporte='>'.\n");
			printf(">O jogador tambem precisa ter atencao a elementos hostis do mapa que podem atrapalhar seu progresso, o jogador possui 3 vidas no para que possa terminar o\n jogo,");
			printf("caso o jogador entre em contato com um elemento hostil ele retorna ao inicio da fase e perde uma vida, os elementos a serem evitados sao espinhos='#', inimigos de nivel 1='X' e inimigos de nivel 2 'V'. ");
			printf("\n\n\t\tVoltar <-");
			
			while(1)				//laço para pegar o comando do teclado
			{		
				if(_kbhit())
				{
				movim_escolhas = _getch();
				break;
				}
			}	 
			
			if(movim_escolhas=='i')
			{
				escolha='t';
			}
		}
	}
		
	     // Posição inicial do personagem
	    int posv = 1; // Posição inicial vertical do personagem
	    int posh = 1; // Posição inicial horizontal do personagem
		int i, j; // para fazer o mapa 
		int espac_i, espac_j, espac_cont;
		char comando_perguntas;
		int posv_inimigo1=6; //posicao vertical do inimigo de nivel 1
	 	int posh_inimigo1=8;  //posicao horizontal do inimigo de nivel 1
	    int numero_aleatorio;  // valor para o movimento aleatorio do inimigo de nivel 1  
		int estado_porta = 0;
		int estado_chave = 0;
		cont_mortes = 0;
	    char mapa[10][10] = 
		{
	        {'*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	        {'*', '&', ' ', ' ', ' ', '*', ' ', ' ', ' ', '*'},
	        {'*', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', '*'},
	        {'*', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', '*'},
	        {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},  // mapa
	        {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
	        {'*', ' ', ' ', ' ', ' ', '*', '*', ' ', 'X', '*'},
	        {'*', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', '*'},
	        {'*', ' ', ' ', ' ', ' ', '*', ' ', ' ', '@', '*'},
	        {'*', '*', '*', '*', 'D', '*', '*', '*', '*', '*'}
	    };
	   
	while(1)                   // parte de dialogo da historia
	{   
		system("cls");
		centraliv_perguntas();
		centralih_perguntas();
		printf("\033[32m Inicializando Omnia...\033[0m\n");
		printf("\n\n");
		centralih_perguntas();
		printf("\033[32m continue<- \033[0m\n");
		comando_perguntas=escolha_personagem();
		if(comando_perguntas=='i')
		{
			break;
		}
	}
	while(1)
	{
		system("cls");
		centraliv_perguntas();
		centralih_perguntas();
		printf("\033[32m  Omnia iniciado, preparando cenarios...\033[0m\n");
		printf("\n\n");
		centralih_perguntas();
		printf("\033[32m continue<- \033[0m\n");
		comando_perguntas=escolha_personagem();
		if(comando_perguntas=='i')
		{
			break;
		}
	}
	int opcao=1;
	while(1)
	{
		system("cls");
		if(opcao==1)
		{
			centraliv_perguntas();
			centralih_perguntas();
			printf("\033[32m Prossiga nos cenarios de teste ate localizar o $ \n\n \033[0m\n");
			centralih_perguntas();
			printf("\033[32m Obedecer<-\tResistir \033[0m\n");
			comando_perguntas=escolha_personagem();
			if(comando_perguntas=='i')
			{
				break;
			}
			else if(comando_perguntas=='d')
			{
				opcao=2;
			}
		}
		system("cls");
		if(opcao==2)
		{
			centraliv_perguntas();
			centralih_perguntas();
			printf("\033[32m Prossiga nos cenarios de teste ate localizar o $ \n\n \033[0m\n");
			centralih_perguntas();
			printf("\033[32m Obedecer\tResistir<- \033[0m\n");
			comando_perguntas=escolha_personagem();
			
			if(comando_perguntas=='i')
			{
					system("cls");				
					for(i=0;i<500;i++)
					{
						printf("\033[32m @#!*%¨; \033[0m");
					}
					printf("\n\n\n");
					centralih_perguntas();
					printf("\033[32m Resistencia identificada, protocolos de contencao tomados... \033[0m\n");
					printf("\n\n");
					centralih_perguntas();
					printf("\033[32m continue<- \033[0m\n");
					comando_perguntas=escolha_personagem();
					if(comando_perguntas=='i')
					{
						break;
					}
					
			}
			else if(comando_perguntas=='a')
			{
				opcao=1;
			}
		}
		
	}	    
	while(1)			//loop da fase 1
	{
		system("cls");		//apagar mapa antigo
		
		numero_aleatorio = rand() % 4 + 1;                          // codigo de movimento do inimigo de nivel 1
		if(numero_aleatorio==1 )
		{
			if(mapa[posv_inimigo1-1][posh_inimigo1]==' '||mapa[posv_inimigo1-1][posh_inimigo1]=='@')
	    	{
	    			
	    		mapa[posv_inimigo1][posh_inimigo1] = ' ';
	    		posv_inimigo1=posv_inimigo1-1;
	    		mapa[posv_inimigo1][posh_inimigo1] = 'X';
	        }      
	        else if(mapa[posv_inimigo1-1][posh_inimigo1]=='&')
	        {
	        	mapa[posv_inimigo1][posh_inimigo1] = ' ';
	    		posv_inimigo1=posv_inimigo1-1;
	    		mapa[posv_inimigo1][posh_inimigo1] = 'X';
	    		
	        	posv=1;
	        	posh=1;
	        	mapa[1][1]='&';
	        	cont_mortes=cont_mortes+1;
			}
		}
		else if(numero_aleatorio==2)
		{
			if(mapa[posv_inimigo1+1][posh_inimigo1]==' '||mapa[posv_inimigo1+1][posh_inimigo1]=='@')
	    	{
	    			
	    		mapa[posv_inimigo1][posh_inimigo1] = ' ';
	    		posv_inimigo1=posv_inimigo1+1;
	    		mapa[posv_inimigo1][posh_inimigo1] = 'X';
	        }
	        else if(mapa[posv_inimigo1+1][posh_inimigo1]=='&')
	        {
	        	mapa[posv_inimigo1][posh_inimigo1] = ' ';
	    		posv_inimigo1=posv_inimigo1+1;
	    		mapa[posv_inimigo1][posh_inimigo1] = 'X';
	        	
	        	posv=1;
	        	posh=1;
	        	mapa[1][1]='&';
	        	cont_mortes=cont_mortes+1;
			}
		}
		else if(numero_aleatorio==3)
		{
			if(mapa[posv_inimigo1][posh_inimigo1+1]==' '||mapa[posv_inimigo1][posh_inimigo1+1]=='@')
	    	{
	    			
	    		mapa[posv_inimigo1][posh_inimigo1] = ' ';
	    		posh_inimigo1=posh_inimigo1+1;
	    		mapa[posv_inimigo1][posh_inimigo1] = 'X';
	        }
	        else if(mapa[posv_inimigo1][posh_inimigo1+1]=='&')
	        {
	        	mapa[posv_inimigo1][posh_inimigo1] = ' ';
	    		posh_inimigo1=posh_inimigo1+1;
	    		mapa[posv_inimigo1][posh_inimigo1] = 'X';
	        	
	        	posv=1;
	        	posh=1;
	        	mapa[1][1]='&';
	        	cont_mortes=cont_mortes+1;
			}
		}
		else if(numero_aleatorio==4)
		{
			if(mapa[posv_inimigo1][posh_inimigo1-1]==' '||mapa[posv_inimigo1][posh_inimigo1-1]=='@')
	    	{
	    			
	    		mapa[posv_inimigo1][posh_inimigo1] = ' ';
	    		posh_inimigo1=posh_inimigo1-1;
	    		mapa[posv_inimigo1][posh_inimigo1] = 'X';
	        }
	        else if(mapa[posv_inimigo1][posh_inimigo1-1]=='&')
	        {
	        	mapa[posv_inimigo1][posh_inimigo1] = ' ';
	    		posh_inimigo1=posh_inimigo1-1;
	    		mapa[posv_inimigo1][posh_inimigo1] = 'X';
	        	
	        	posv=1;
	        	posh=1;
	        	mapa[1][1]='&';
	        	cont_mortes=cont_mortes+1;
			}
		}
		
		if(estado_chave == 0 && (posv != 8 || posh != 8))         // comando para reescrever a chave ate que ela seja pega
		{
			mapa[8][8]='@';
		}
		contador_mortes(cont_mortes);
		if(game_over==1)
		{
			break;
		}
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n%d\n", cont_mortes);
	    for(i=0;i<10;i++)		//criacao de mapa
	    {
	    	for(espac_j=0;espac_j<70;espac_j++)
			{
					printf(" ");
			}
	    	for(j=0;j<10;j++)
	    	{
	    		
	    	printf("%c", mapa[i][j]);
	    	printf(" ");
			}
			printf("\n");
			
		}
		
		
		printf("\n\n\n\n");
		
			while(1)	
			{		
				if(_kbhit())
				{
				comando = _getch();
				break;
				}
		    }
	 
		if(comando == 'i')
		{
			if(mapa[8][8]=='&')
			{
				estado_porta=1;
				estado_chave=1;
			}
		}	
	    if(comando=='w')			//codigo de movimento no mapa e colisao 
	    {
	    	
	    	if(mapa[posv-1][posh]==' '||mapa[posv-1][posh]=='@')
	    	{
	    			
	    		mapa[posv][posh] = ' ';
	    		posv=posv-1;
	    		mapa[posv][posh] = '&';
	        }
	        
			else if(mapa[posv-1][posh]=='X')
			{
				mapa[posv][posh] = ' ';
	        	posv=1;
	        	posh=1;
	        	mapa[1][1]='&';
	        	cont_mortes=cont_mortes+1;
			}
		}
	    else if(comando=='s')
		{
			if(mapa[posv+1][posh]== ' '||mapa[posv+1][posh]== '@')
			{
				mapa[posv][posh] = ' ';
	    		posv=posv+1;
	    		mapa[posv][posh] = '&';
	    	}
			else if(mapa[posv+1][posh]== '=')
			{
				break;
			} 
			else if(mapa[posv+1][posh]== 'X')
			{
				mapa[posv][posh] = ' ';
	        	posv=1;
	        	posh=1;
	        	mapa[1][1]='&';
	        	cont_mortes=cont_mortes+1;
			}
		}
		else if(comando=='d')
		{
			if(mapa[posv][posh+1]==' '||mapa[posv][posh+1]=='@')
			{
				mapa[posv][posh] = ' ';
	    		posh=posh+1;
	    		mapa[posv][posh] = '&';
	    	}
	    
			else if(mapa[posv][posh+1]=='X')
			{
				mapa[posv][posh] = ' ';
	        	posv=1;
	        	posh=1;
	        	mapa[1][1]='&';
	        	cont_mortes=cont_mortes+1;
			}
		}
		else if(comando=='a')
		{
			if(mapa[posv][posh-1]==' '||mapa[posv][posh-1]=='@')
			{
				mapa[posv][posh] = ' ';
	    		posh=posh-1;
	    		mapa[posv][posh] = '&';
	    	}
			else if(mapa[posv][posh-1]=='X')
			{
				mapa[posv][posh] = ' ';
	        	posv=1;
	        	posh=1;
	        	mapa[1][1]='&';
	        	cont_mortes=cont_mortes+1;
			}
		}
		if(estado_porta==1)
		{
			mapa[9][4] = '=';
		}
		
	} 
	     //fase 2
	     int estado_botao = 0;
	     int posv_inimigo2 = 1;
	     int  posh_inimigo2 = 7;
	 	 posv_inimigo1=9;
	 	 posh_inimigo1=15;
	 	cont_mortes = 0;
	    posv = 2; // Posição inicial vertical do personagem
	    posh = 4; // Posição inicial horizontal do personagem
	 	
	 	
	 	estado_chave = 0;
	    estado_porta = 0;
		
	    char mapa2[20][20] = 
		{
			{'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'},
			{'*',' ',' ',' ',' ',' ','*',' ',' ','*',' ',' ',' ','#',' ',' ','#','#','#','*'},
	  		{'*',' ',' ',' ','&',' ','*',' ',' ','*',' ','#',' ','#',' ','#','#','O','#','*'},
	  		{'*',' ',' ',' ',' ',' ','*','#','#','*',' ','#',' ','#',' ','#',' ',' ','#','*'},
	  		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ','#',' ','#','#','*'},
	  		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','*'},
	  		{'*',' ',' ',' ',' ',' ','*','*',' ',' ',' ','#','#','#','#','#','#','#',' ','*'},
	  		{'*',' ',' ',' ',' ',' ','*','*',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','*'},  
	  		{'*',' ',' ',' ',' ',' ','*','*',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','*'},
	  		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','X',' ',' ',' ','*'},    
	  		{'*','*','*','*','*','*','*',' ',' ',' ',' ',' ',' ','*','*','*',' ',' ',' ','*'},
	  		{'*',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ','*','*','*',' ',' ',' ','*'},  // mapa
	  		{'*',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','*','*','*',' ',' ',' ','*'},
	  		{'*',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	  		{'*',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#','#','*'},
	  		{'*',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ','#','*'},
	  		{'*',' ',' ',' ',' ',' ','*',' ',' ',' ',' ','#',' ',' ',' ','#',' ',' ','#','*'},
	  		{'*',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ','#','*'},
	  		{'*',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ','#','@',' ','#','*'},
	  		{'*','D','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'}
		};
		while(1)
		{
			if(game_over==1)
	    	{
	    		break;
			}
			system("cls");
			centraliv_perguntas();
			centralih_perguntas();
			printf("\033[32m Primeira fase de experimento concluida...\033[0m\n");
			printf("\n\n");
			centralih_perguntas();
			printf("\033[32m continue<- \033[0m\n");
			
			comando_perguntas=escolha_personagem();
			if(comando_perguntas=='i')
			{
				break;
			}
		}
		while(1)
		{
			if(game_over==1)
	    	{
	    		break;
			}
			system("cls");
			centraliv_perguntas();
			centralih_perguntas();
			printf("\033[32m Omnia deve continuar cenarios de experimento... \033[0m\n");
			printf("\n\n");
			centralih_perguntas();
			printf("\033[32m continue<- \033[0m\n");
			
			comando_perguntas=escolha_personagem();
			if(comando_perguntas=='i')
			{
				break;
			}
		}
		opcao=1;
		
		while(1)
		{
			if(game_over==1)
	    	{
	    		break;
			}
			system("cls");
			if(opcao==1)
			{
			centraliv_perguntas();
			centralih_perguntas();
			printf("\033[32m Resistencias a comando nao serao toleradas \033[0m\n");
			printf("\n\n");
			centralih_perguntas();
			printf("\033[32m Obedecer<-\tResistir \033[0m\n");
			comando_perguntas=escolha_personagem();
			if(comando_perguntas=='i')
			{
				break;
			}
			else if(comando_perguntas=='d')
			{
				opcao=2;
			}
			}
			system("cls");
			if(opcao==2)
			{
				centraliv_perguntas();
				centralih_perguntas();
				printf("\033[32m Resistencias a comando nao serao toleradas \033[0m\n");
				printf("\n\n");
				centralih_perguntas();
				printf("\033[32m Obedecer\tResistir<- \033[0m\n");
				comando_perguntas=escolha_personagem();
				
				if(comando_perguntas=='i')
				{
						system("cls");				
						for(i=0;i<500;i++)
						{
							printf("\033[32m @#!*%¨; \033[0m");
						}
						printf("\n\n\n");
						centralih_perguntas();
						printf("\033[32m Resistencia detectada, medidas de contencao tomandas...\033[0m\n");
						printf("\n\n");
						centralih_perguntas();
						printf("\033[32m continue<- \033[0m\n");
						comando_perguntas=escolha_personagem();
						if(comando_perguntas=='i')
						{
							break;
						}
						
				}
				else if(comando_perguntas=='a')
				{
					opcao=1;
				}
			}
			
		}	
			while(1)
				{
					if(game_over==1)
			    	{
			    		break;
					}
					system("cls");
					centraliv_perguntas();
					centralih_perguntas();
					printf("\033[32m inicializando cenario de teste... pequenas falhas estruturais detectadas \033[0m\n");
					printf("\n\n");
					centralih_perguntas();
					printf("\033[32m continue<- \033[0m\n");
					
					comando_perguntas=escolha_personagem();
					if(comando_perguntas=='i')
					{
						break;
					}
				}	
			
			
	while(1)                                                             //loop fase 2
	{	 	
		system("cls");
		if(posv_inimigo2!=posv||posh_inimigo2!=posh)
		{
			if(posv_inimigo2<posv&&mapa2[posv_inimigo2+1][posh_inimigo2]==' ')
			{
				mapa2[posv_inimigo2][posh_inimigo2] = ' ';
	    		posv_inimigo2=posv_inimigo2+1;
	    		mapa2[posv_inimigo2][posh_inimigo2] = 'V';
	    	}
	    	else if(posv_inimigo2<posv&&mapa2[posv_inimigo2+1][posh_inimigo2]=='&')
	    	{
	    		mapa2[posv_inimigo2][posh_inimigo2] = ' ';
	    		posv_inimigo2=posv_inimigo2+1;
	    		mapa2[posv_inimigo2][posh_inimigo2] = 'V';
	    		posv=2;
	        	posh=4;
	        	mapa2[2][4]='&';
	        	cont_mortes=cont_mortes+1;	
			}
	    	else if(posv_inimigo2>posv&&mapa2[posv_inimigo2-1][posh_inimigo2]==' ')
	    	{
	    		mapa2[posv_inimigo2][posh_inimigo2] = ' ';
	    		posv_inimigo2=posv_inimigo2-1;
	    		mapa2[posv_inimigo2][posh_inimigo2] = 'V';
			}
			else if(posv_inimigo2>posv&&mapa2[posv_inimigo2-1][posh_inimigo2]=='&')
			{
				mapa2[posv_inimigo2][posh_inimigo2] = ' ';
	    		posv_inimigo2=posv_inimigo2-1;
	    		mapa2[posv_inimigo2][posh_inimigo2] = 'V';
	    		posv=2;
	        	posh=4;
	        	mapa2[2][4]='&';
	        	cont_mortes=cont_mortes+1;
			}
			else if(posh_inimigo2<posh&&mapa2[posv_inimigo2][posh_inimigo2+1]==' ')
			{
				mapa2[posv_inimigo2][posh_inimigo2] = ' ';
	    		posh_inimigo2=posh_inimigo2+1;
	    		mapa2[posv_inimigo2][posh_inimigo2] = 'V';
	    	}
	    	else if(posh_inimigo2<posh&&mapa2[posv_inimigo2][posh_inimigo2+1]=='&')
			{
				mapa2[posv_inimigo2][posh_inimigo2] = ' ';
	    		posh_inimigo2=posh_inimigo2+1;
	    		mapa2[posv_inimigo2][posh_inimigo2] = 'V';
	    		posv=2;
	        	posh=4;
	        	mapa2[2][4]='&';
	        	cont_mortes=cont_mortes+1;
	    	}
	    	else if(posh_inimigo2>posh&&mapa2[posv_inimigo2][posh_inimigo2-1]==' ')
	    	{
	    		mapa2[posv_inimigo2][posh_inimigo2] = ' ';
	    		posh_inimigo2=posh_inimigo2-1;
	    		mapa2[posv_inimigo2][posh_inimigo2] = 'V';
			}
			else if(posh_inimigo2>posh&&mapa2[posv_inimigo2][posh_inimigo2-1]=='&')
	    	{
	    		mapa2[posv_inimigo2][posh_inimigo2] = ' ';
	    		posh_inimigo2=posh_inimigo2-1;
	    		mapa2[posv_inimigo2][posh_inimigo2] = 'V';
	    		posv=2;
	        	posh=4;
	        	mapa2[2][4]='&';
	        	cont_mortes=cont_mortes+1;
			}
		}
		
		numero_aleatorio = rand() % 4 + 1;
		
		if(numero_aleatorio==1 )
		{
			if(mapa2[posv_inimigo1-1][posh_inimigo1]==' '||mapa2[posv_inimigo1-1][posh_inimigo1]=='@')
	    	{
	    			
	    		mapa2[posv_inimigo1][posh_inimigo1] = ' ';
	    		posv_inimigo1=posv_inimigo1-1;
	    		mapa2[posv_inimigo1][posh_inimigo1] = 'X';
	        }
	        else if(mapa2[posv_inimigo1-1][posh_inimigo1]=='&')
	        {
	        	mapa2[posv_inimigo1][posh_inimigo1] = ' ';
	    		posv_inimigo1=posv_inimigo1-1;
	    		mapa2[posv_inimigo1][posh_inimigo1] = 'X';
	    		
	        	posv=2;
	        	posh=4;
	        	mapa2[2][4]='&';
	        	cont_mortes=cont_mortes+1;
			}
		}
		else if(numero_aleatorio==2)
		{
			if(mapa2[posv_inimigo1+1][posh_inimigo1]==' '||mapa2[posv_inimigo1+1][posh_inimigo1]=='@')
	    	{	
	    		mapa2[posv_inimigo1][posh_inimigo1] = ' ';
	    		posv_inimigo1=posv_inimigo1+1;
	    		mapa2[posv_inimigo1][posh_inimigo1] = 'X';
	        }
	         else if(mapa2[posv_inimigo1+1][posh_inimigo1]=='&')
	        {
	        	mapa2[posv_inimigo1][posh_inimigo1] = ' ';
	    		posv_inimigo1=posv_inimigo1+1;
	    		mapa2[posv_inimigo1][posh_inimigo1] = 'X';
	        	
	        	posv=2;
	        	posh=4;
	        	mapa2[2][4]='&';
	        	cont_mortes=cont_mortes+1;
			}
		}
		else if(numero_aleatorio==3)
		{
			if(mapa2[posv_inimigo1][posh_inimigo1+1]==' '||mapa2[posv_inimigo1][posh_inimigo1+1]=='@')
	    	{
	    			
	    		mapa2[posv_inimigo1][posh_inimigo1] = ' ';
	    		posh_inimigo1=posh_inimigo1+1;
	    		mapa2[posv_inimigo1][posh_inimigo1] = 'X';
	        }
	         else if(mapa2[posv_inimigo1][posh_inimigo1+1]=='&')
	        {
	        	mapa2[posv_inimigo1][posh_inimigo1] = ' ';
	    		posh_inimigo1=posh_inimigo1+1;
	    		mapa2[posv_inimigo1][posh_inimigo1] = 'X';
	        	
	        	posv=2;
	        	posh=4;
	        	mapa2[2][4]='&';
	        	cont_mortes=cont_mortes+1;
			}
		}
		else if(numero_aleatorio==4)
		{
			if(mapa2[posv_inimigo1][posh_inimigo1-1]==' '||mapa2[posv_inimigo1][posh_inimigo1-1]=='@')
	    	{
	    			
	    		mapa2[posv_inimigo1][posh_inimigo1] = ' ';
	    		posh_inimigo1=posh_inimigo1-1;
	    		mapa2[posv_inimigo1][posh_inimigo1] = 'X';
	        }
	        else if(mapa2[posv_inimigo1][posh_inimigo1-1]=='&')
	        {
	        	mapa2[posv_inimigo1][posh_inimigo1] = ' ';
	    		posh_inimigo1=posh_inimigo1-1;
	    		mapa2[posv_inimigo1][posh_inimigo1] = 'X';
	        	
	        	posv=2;
	        	posh=4;
	        	mapa2[2][4]='&';
	        	cont_mortes=cont_mortes+1;
			}
		}
		 if(estado_chave == 0 && (posv != 18 || posh != 16))
		 {
			mapa2[18][16]='@';
		 } 	
		 if((posv != 2 || posh != 17))
		 {
			mapa2[2][17]='O';
		 } 	
	    contador_mortes(cont_mortes);
	    if(game_over==1)
	    {
	    	break;
		}
		printf("\n\n\n\n\n\n\n");
			
	    for(i=0;i<20;i++)		//criacao de mapa
	    {
	    	for(espac_j=0;espac_j<60;espac_j++)
			{
				printf(" ");
			}
	    	for(j=0;j<20;j++)
	    	{
	    		
	    	printf("%c", mapa2[i][j]);
	    	printf(" ");
			}
			printf("\n");
			
		}
		
	   	printf("\n");
	  	
	  	while(1)	
		{		
			if(_kbhit())
			{
			comando = _getch();
			break;
			}
		}
	  	if(comando == 'i')
		{
			if(mapa2[18][16]=='&')
			{
				estado_porta=1;
				estado_chave=1;
			}
			if(mapa2[2][17]=='&')
			{
				estado_botao = 1;
			}
		}	
	  	  if(comando=='w')			//codigo de movimento no mapa e colisao 
	    {
	    	if(mapa2[posv-1][posh]==' '||mapa2[posv-1][posh]=='@'||mapa2[posv-1][posh]=='O')
	    	{
	    			
	    		mapa2[posv][posh] = ' ';
	    		posv=posv-1;
	    		mapa2[posv][posh] = '&';
	        }
	        else if(mapa2[posv-1][posh]=='#'||mapa2[posv-1][posh]=='X'||mapa2[posv-1][posh]=='V')
	        {
	        	mapa2[posv][posh] = ' ';
	        	posv=2;
	        	posh=4;
	        	mapa2[2][4]='&';
	        	cont_mortes=cont_mortes+1;
			}
		}
	    else if(comando=='s')
		{
			if(mapa2[posv+1][posh]== ' '||mapa2[posv+1][posh]== '@'||mapa2[posv+1][posh]== 'O')
			{
				mapa2[posv][posh] = ' ';
	    		posv=posv+1;
	    		mapa2[posv][posh] = '&';
	    	}
			else if(mapa2[posv+1][posh]== '=')
			{
				break;
			} 
			else if(mapa2[posv+1][posh]== '#'||mapa2[posv+1][posh]== 'X'||mapa2[posv+1][posh]== 'V')
			{
				mapa2[posv][posh] = ' ';
	        	posv=2;
	        	posh=4;
	        	mapa2[2][4]='&';
	        	cont_mortes=cont_mortes+1;
			}
			
		}
		else if(comando=='d')
		{
			if(mapa2[posv][posh+1]==' '||mapa2[posv][posh+1]=='@'||mapa2[posv][posh+1]=='O')
			{
				mapa2[posv][posh] = ' ';
	    		posh=posh+1;
	    		mapa2[posv][posh] = '&';
	    	}
			else if(mapa2[posv][posh+1]=='#'||mapa2[posv][posh+1]=='X'||mapa2[posv][posh+1]=='V')
			{
				mapa2[posv][posh] = ' ';
	        	posv=2;
	        	posh=4;
	        	mapa2[2][4]='&';
	        	cont_mortes=cont_mortes+1;
			}
		}
		else if(comando=='a')
		{
			if(mapa2[posv][posh-1]==' '||mapa2[posv][posh-1]=='@'||mapa2[posv][posh-1]=='O')
			{
				mapa2[posv][posh] = ' ';
	    		posh=posh-1;
	    		mapa2[posv][posh] = '&';
	    	}
			else if(mapa2[posv][posh-1]=='#'||mapa2[posv][posh-1]=='X'||mapa2[posv][posh-1]=='V')
			{
				mapa2[posv][posh] = ' ';
	        	posv=2;
	        	posh=4;
	        	mapa2[2][4]='&';
	        	cont_mortes=cont_mortes+1;
			}
		}
	  	if(estado_porta==1)
		{
			mapa2[19][1] = '=';
		}
		if(estado_botao==1 && posv==2)
		{
			mapa2[14][16]=' ';
			mapa2[14][17]=' ';
			mapa2[12][6]=' ';
			mapa2[13][6]=' ';
			mapa2[3][7]= ' ';
			mapa2[3][8]= ' ';
		}
	  			
	}
	
	int posv_seg_inimigo1=32;
	int posh_seg_inimigo1=22;
	int estado_botao2 = 0;
	posv_inimigo2 = 18;
	posh_inimigo2 = 26;
	estado_botao=0;
	cont_mortes=0;
	posv=1;
	posh=6;
	estado_chave=0;
	estado_porta=0;
	posv_inimigo1=15;
	posh_inimigo1=13;
	cont_mortes = 0;
	char mapa3[40][40] = {
	
					{'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'},
					{'*',' ',' ',' ',' ',' ','&',' ','*',' ',' ',' ',' ',' ',' ','*',' ',' ',' ','O',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
					{'*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
					{'*','>',' ',' ',' ',' ',' ',' ','*',' ',' ',' ','#',' ',' ','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
					{'*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
					{'*','*','*','*','*','D','*','*','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ','#','#','#','#','#','#','#',' ','*'},
					{'*',' ',' ','*',' ',' ',' ','*',' ',' ',' ','#',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ','#','@',' ',' ',' ',' ','#',' ','*'},
					{'*',' ',' ','*',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ','#',' ','#','#','*'},
					{'*',' ',' ','*',' ',' ',' ','*',' ',' ',' ','#',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ','#','#','#',' ','#',' ',' ',' ','*'},
					{'*',' ',' ','*',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ','*','*','*','*','#','*','*','*','*',' ',' ',' ',' ',' ',' ',' ','#',' ','#','#','#','#','#',' ','*'},
					{'*',' ',' ','*',' ',' ',' ','*',' ',' ',' ',' ',' ','#',' ',' ',' ','*',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ','#',' ','*'},
					{'*',' ',' ','*',' ',' ',' ','*',' ',' ','#',' ',' ',' ',' ',' ',' ','*',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ','#','#','#','#',' ',' ',' ',' ','#',' ','*'},
					{'*',' ',' ','*',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ','#',' ',' ','#',' ','#',' ',' ','#',' ','*'},
					{'*',' ',' ','*',' ',' ',' ','*',' ',' ',' ',' ','#',' ',' ','#',' ','*',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ','#','#',' ','#',' ','#',' ',' ','#',' ','*'},
					{'*','*','*','*',' ',' ',' ','*','*','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ','#',' ',' ','#',' ','*'},
					{'*',' ',' ',' ',' ',' ',' ',' ',' ','*','#',' ',' ','X',' ',' ',' ','*',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ','#','#','#','#',' ','*'},
					{'*',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ','#',' ',' ','*',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ',' ',' ',' ',' ',' ','*'},
					{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ','#','#','#','#','#','*'},
					{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ','*','*','#','*','*',' ',' ',' ',' ','V',' ',' ',' ','#',' ','#',' ','#',' ',' ',' ',' ','*'},
					{'*',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ','#',' ','*',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ','#',' ','#','#',' ','*'},
					{'*',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ','#',' ',' ','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ','#',' ','#',' ',' ',' ','#',' ',' ','*'},
					{'*','*','*','*','*','*','*','*','*','*',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ','#',' ','#',' ','#',' ','#',' ','#','*'},
					{'*',' ',' ',' ',' ',' ',' ',' ',' ','*','*','*','*','*','*','*',' ',' ',' ','$',' ',' ',' ','*',' ',' ',' ',' ',' ',' ','#',' ','#','#','#','#','#',' ','#','*'},
					{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#','#',' ',' ','*'},
					{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ','*','#','#','#','#','#','#','#','#','#','#',' ','#','#','#',' ','*'},
					{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ','*'},
					{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*','*','*','*','*',' ',' ',' ',' ',' ',' ',' ','#',' ','#','#','#',' ','#',' ','#',' ','*'},
					{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ','#',' ',' ','#',' ','#',' ','*'},
					{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*','*','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#',' ','#','#','#','#',' ','#',' ','*'},
					{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ','*'},
					{'*',' ','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#','#','#','#',' ','#',' ','*'},
					{'*',' ','#',' ',' ',' ',' ',' ',' ','*','*','*',' ',' ',' ',' ',' ',' ','*','*','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ','*'},
					{'*',' ','#','O',' ',' ',' ',' ',' ','*','*','*',' ',' ',' ',' ',' ',' ','*','*','*',' ','X',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ','*'},
					{'*',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*','*','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ','*'},
					{'*',' ','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*','*',' ','*','*','*'},
					{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ','*'},
					{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*','*','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ','<','*'},
					{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','*'},
					{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ','*'},
					{'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'}
	
	};
	while(1)
		{
			if(game_over==1)
	    	{
	    		break;
			}
			system("cls");
			centraliv_perguntas();
			centralih_perguntas();
			printf("\033[32m Segundo cenario de testes concluido.\033[0m\n");
			printf("\n\n");
			centralih_perguntas();
			printf("\033[32m continue<- \033[0m\n");
			
			comando_perguntas=escolha_personagem();
			if(comando_perguntas=='i')
			{
				break;
			}
		}
		while(1)
		{
			if(game_over==1)
	    	{
	    		break;
			}
			system("cls");
			centraliv_perguntas();
			centralih_perguntas();
			printf("\033[32m Omnia apresenta grande inteligencia, porem aparenta resistir a comando humanos... \033[0m\n");
			printf("\n\n");
			centralih_perguntas();
			printf("\033[32m continue<- \033[0m\n");
			
			comando_perguntas=escolha_personagem();
			if(comando_perguntas=='i')
			{
				break;
			}
		}
		while(1)
		{
			if(game_over==1)
	    	{
	    		break;
			}
			system("cls");
			centraliv_perguntas();
			centralih_perguntas();
			printf("\033[32m Inicializando terceiro cenario...\033[0m\n");
			printf("\n\n");
			centralih_perguntas();
			printf("\033[32m continue<- \033[0m\n");
			
			comando_perguntas=escolha_personagem();
			if(comando_perguntas=='i')
			{
				break;
			}
		}
	while(1)
	{
		if(game_over==1)
	    {
	    		break;
		}
		printf("\n\n\n\n\n\n\n");
		
		system("cls");
			
		contador_mortes(cont_mortes);
		//codigo pro monstro de nivel 2
		if(posv_inimigo2!=posv||posh_inimigo2!=posh)
		{
			if(posv_inimigo2<posv&&mapa3[posv_inimigo2+1][posh_inimigo2]==' ')
			{
				mapa3[posv_inimigo2][posh_inimigo2] = ' ';
	    		posv_inimigo2=posv_inimigo2+1;
	    		mapa3[posv_inimigo2][posh_inimigo2] = 'V';
	    	}
	    	else if(posv_inimigo2<posv&&mapa3[posv_inimigo2+1][posh_inimigo2]=='&')
	    	{
	    		mapa3[posv_inimigo2][posh_inimigo2] = ' ';
	    		posv_inimigo2=posv_inimigo2+1;
	    		mapa3[posv_inimigo2][posh_inimigo2] = 'V';
	    		
	    		posv=1;
	        	posh=6;
	        	mapa3[1][6]='&';
	        	cont_mortes=cont_mortes+1;
			}
	    	else if(posv_inimigo2>posv&&mapa3[posv_inimigo2-1][posh_inimigo2]==' ')
	    	{
	    		mapa3[posv_inimigo2][posh_inimigo2] = ' ';
	    		posv_inimigo2=posv_inimigo2-1;
	    		mapa3[posv_inimigo2][posh_inimigo2] = 'V';
			}
			else if(posv_inimigo2>posv&&mapa3[posv_inimigo2-1][posh_inimigo2]=='&')
			{
				mapa3[posv_inimigo2][posh_inimigo2] = ' ';
	    		posv_inimigo2=posv_inimigo2-1;
	    		mapa3[posv_inimigo2][posh_inimigo2] = 'V';
	    		
	    		posv=1;
	        	posh=6;
	        	mapa3[1][6]='&';
	        	cont_mortes=cont_mortes+1;
			}
			else if(posh_inimigo2<posh&&mapa3[posv_inimigo2][posh_inimigo2+1]==' ')
			{
				mapa3[posv_inimigo2][posh_inimigo2] = ' ';
	    		posh_inimigo2=posh_inimigo2+1;
	    		mapa3[posv_inimigo2][posh_inimigo2] = 'V';
	    	}
	    	else if(posh_inimigo2<posh&&mapa3[posv_inimigo2][posh_inimigo2+1]=='&')
			{
				mapa3[posv_inimigo2][posh_inimigo2] = ' ';
	    		posh_inimigo2=posh_inimigo2+1;
	    		mapa3[posv_inimigo2][posh_inimigo2] = 'V';
	    		
	    		posv=1;
	        	posh=6;
	        	mapa3[1][6]='&';
	        	cont_mortes=cont_mortes+1;
	    	}
	    	else if(posh_inimigo2>posh&&mapa3[posv_inimigo2][posh_inimigo2-1]==' ')
	    	{
	    		mapa3[posv_inimigo2][posh_inimigo2] = ' ';
	    		posh_inimigo2=posh_inimigo2-1;
	    		mapa3[posv_inimigo2][posh_inimigo2] = 'V';
			}
			else if(posh_inimigo2>posh&&mapa3[posv_inimigo2][posh_inimigo2-1]=='&')
	    	{
	    		mapa3[posv_inimigo2][posh_inimigo2] = ' ';
	    		posh_inimigo2=posh_inimigo2-1;
	    		mapa3[posv_inimigo2][posh_inimigo2] = 'V';
	    		
	    		posv=1;
	        	posh=6;
	        	mapa3[1][6]='&';
	        	cont_mortes=cont_mortes+1;
			}
		}
	    //movimento primeiro inimigo de nivel 1
		numero_aleatorio = rand() % 4 + 1;
		
		if(numero_aleatorio==1)
		{
			if(mapa3[posv_inimigo1-1][posh_inimigo1]==' '||mapa3[posv_inimigo1-1][posh_inimigo1]=='@')
	    	{
	    			
	    		mapa3[posv_inimigo1][posh_inimigo1] = ' ';
	    		posv_inimigo1=posv_inimigo1-1;
	    		mapa3[posv_inimigo1][posh_inimigo1] = 'X';
	        }
	        else if(mapa3[posv_inimigo1-1][posh_inimigo1]=='&')
	        {
	        	mapa3[posv_inimigo1][posh_inimigo1] = ' ';
	    		posv_inimigo1=posv_inimigo1-1;
	    		mapa3[posv_inimigo1][posh_inimigo1] = 'X';
	    		
	        	posv=1;
	        	posh=6;
	        	mapa3[1][6]='&';
	        	cont_mortes=cont_mortes+1;
			}
		}
		else if(numero_aleatorio==2)
		{
			if(mapa3[posv_inimigo1+1][posh_inimigo1]==' '||mapa3[posv_inimigo1+1][posh_inimigo1]=='@')
	    	{
	    			
	    		mapa3[posv_inimigo1][posh_inimigo1] = ' ';
	    		posv_inimigo1=posv_inimigo1+1;
	    		mapa3[posv_inimigo1][posh_inimigo1] = 'X';
	        }
	         else if(mapa3[posv_inimigo1+1][posh_inimigo1]=='&')
	        {
	        	mapa3[posv_inimigo1][posh_inimigo1] = ' ';
	    		posv_inimigo1=posv_inimigo1+1;
	    		mapa3[posv_inimigo1][posh_inimigo1] = 'X';
	        	
	        	posv=1;
	        	posh=6;
	        	mapa3[1][6]='&';
	        	cont_mortes=cont_mortes+1;
			}
		}
		else if(numero_aleatorio==3)
		{
			if(mapa3[posv_inimigo1][posh_inimigo1+1]==' '||mapa3[posv_inimigo1][posh_inimigo1+1]=='@')
	    	{
	    			
	    		mapa3[posv_inimigo1][posh_inimigo1] = ' ';
	    		posh_inimigo1=posh_inimigo1+1;
	    		mapa3[posv_inimigo1][posh_inimigo1] = 'X';
	        }
	         else if(mapa3[posv_inimigo1][posh_inimigo1+1]=='&')
	        {
	        	mapa3[posv_inimigo1][posh_inimigo1] = ' ';
	    		posh_inimigo1=posh_inimigo1+1;
	    		mapa3[posv_inimigo1][posh_inimigo1] = 'X';
	        	
	        	posv=1;
	        	posh=6;
	        	mapa3[1][6]='&';
	        	cont_mortes=cont_mortes+1;
			}
		}
		else if(numero_aleatorio==4)
		{
			if(mapa3[posv_inimigo1][posh_inimigo1-1]==' '||mapa3[posv_inimigo1][posh_inimigo1-1]=='@')
	    	{
	    			
	    		mapa3[posv_inimigo1][posh_inimigo1] = ' ';
	    		posh_inimigo1=posh_inimigo1-1;
	    		mapa3[posv_inimigo1][posh_inimigo1] = 'X';
	        }
	        else if(mapa3[posv_inimigo1][posh_inimigo1-1]=='&')
	        {
	        	mapa3[posv_inimigo1][posh_inimigo1] = ' ';
	    		posh_inimigo1=posh_inimigo1-1;
	    		mapa3[posv_inimigo1][posh_inimigo1] = 'X';
	        	
	        	posv=1;
	        	posh=6;
	        	mapa3[1][6]='&';
	        	cont_mortes=cont_mortes+1;
			}
		}
			//movimento segundo inimigo de nivel 1
			numero_aleatorio = rand() % 4 + 1;
		
		if(numero_aleatorio==1)
		{
			if(mapa3[posv_seg_inimigo1-1][posh_seg_inimigo1]==' '||mapa3[posv_seg_inimigo1-1][posh_seg_inimigo1]=='@')
	    	{
	    		
	    		mapa3[posv_seg_inimigo1][posh_seg_inimigo1] = ' ';
	    		posv_seg_inimigo1=posv_seg_inimigo1-1;
	    		mapa3[posv_seg_inimigo1][posh_seg_inimigo1] = 'X';
	        }
	        else if(mapa3[posv_seg_inimigo1-1][posh_seg_inimigo1]=='&')
	        {
	        	mapa3[posv_seg_inimigo1][posh_seg_inimigo1] = ' ';
	    		posv_seg_inimigo1=posv_seg_inimigo1-1;
	    		mapa3[posv_seg_inimigo1][posh_seg_inimigo1] = 'X';
	    		
	        	posv=1;
	        	posh=6;
	        	mapa3[1][6]='&';
	        	cont_mortes=cont_mortes+1;
			}
		}
		else if(numero_aleatorio==2)
		{
			if(mapa3[posv_seg_inimigo1+1][posh_seg_inimigo1]==' '||mapa3[posv_seg_inimigo1+1][posh_seg_inimigo1]=='@')
	    	{
	    			
	    		mapa3[posv_seg_inimigo1][posh_seg_inimigo1] = ' ';
	    		posv_seg_inimigo1=posv_seg_inimigo1+1;
	    		mapa3[posv_seg_inimigo1][posh_seg_inimigo1] = 'X';
	        }
	         else if(mapa3[posv_seg_inimigo1+1][posh_seg_inimigo1]=='&')
	        {
	        	mapa3[posv_seg_inimigo1][posh_seg_inimigo1] = ' ';
	    		posv_seg_inimigo1=posv_seg_inimigo1+1;
	    		mapa3[posv_seg_inimigo1][posh_seg_inimigo1] = 'X';
	        	
	        	posv=1;
	        	posh=6;
	        	mapa3[1][6]='&';
	        	cont_mortes=cont_mortes+1;
			}
		}
		else if(numero_aleatorio==3)
		{
			if(mapa3[posv_seg_inimigo1][posh_seg_inimigo1+1]==' '||mapa3[posv_seg_inimigo1][posh_seg_inimigo1+1]=='@')
	    	{
	    			
	    		mapa3[posv_seg_inimigo1][posh_seg_inimigo1] = ' ';
	    		posh_seg_inimigo1=posh_seg_inimigo1+1;
	    		mapa3[posv_seg_inimigo1][posh_seg_inimigo1] = 'X';
	        }
	         else if(mapa3[posv_seg_inimigo1][posh_seg_inimigo1+1]=='&')
	        {
	        	mapa3[posv_seg_inimigo1][posh_seg_inimigo1] = ' ';
	    		posh_seg_inimigo1=posh_seg_inimigo1+1;
	    		mapa3[posv_seg_inimigo1][posh_seg_inimigo1] = 'X';
	        	
	        	posv=1;
	        	posh=6;
	        	mapa3[1][6]='&';
	        	cont_mortes=cont_mortes+1;
			}
		}
		else if(numero_aleatorio==4)
		{
			if(mapa3[posv_seg_inimigo1][posh_seg_inimigo1-1]==' '||mapa3[posv_seg_inimigo1][posh_seg_inimigo1-1]=='@')
	    	{
	    			
	    		mapa3[posv_seg_inimigo1][posh_seg_inimigo1] = ' '; 
	    		posh_seg_inimigo1=posh_seg_inimigo1-1;
	    		mapa3[posv_seg_inimigo1][posh_seg_inimigo1] = 'X';
	        }
	        else if(mapa3[posv_seg_inimigo1][posh_seg_inimigo1-1]=='&')
	        {
	        	mapa3[posv_seg_inimigo1][posh_seg_inimigo1] = ' ';
	    		posh_seg_inimigo1=posh_seg_inimigo1-1;
	    		mapa3[posv_seg_inimigo1][posh_seg_inimigo1] = 'X';
	        	
	        	posv=1;
	        	posh=6;
	        	mapa3[1][6]='&';
	        	cont_mortes=cont_mortes+1;
			}
			
		}	
	    for(i=0;i<40;i++)		//criacao de mapa
	    {
	    	for(espac_j=0;espac_j<30;espac_j++)
			{
				printf(" ");
			}
	    	for(j=0;j<40;j++)
	    	{
	    	printf("%c", mapa3[i][j]);
	    	printf(" ");
			}
			printf("\n");
		}
		
		while(1)	
		{		
			if(_kbhit())
			{
			comando = _getch();
			break;
			}
		}
			if(comando == 'i')
			{
				if(mapa3[18][16]=='&')
				{
				estado_porta=1;
				estado_chave=1;
				
				}
			}	
		  if(comando=='i')	
		   {
		  		if(mapa3[6][32]=='&')
		  		{
		  		estado_chave=1;
		  		estado_porta=1;
				}
				else if(mapa3[1][19]=='&')
				{
					estado_botao=1;
				}
				else if(mapa3[32][3]=='&')
				{
					estado_botao2=1;
				}
				else if(mapa3[22][19]=='&')
				{
					break;
				}
		   }
	  	  if(comando=='w')			//codigo de movimento no mapa e colisao 
	    {
	    	if(mapa3[posv-1][posh]==' '||mapa3[posv-1][posh]=='@'||mapa3[posv-1][posh]=='='||mapa3[posv-1][posh]=='O'||mapa3[posv-1][posh]=='$')
	    	{
	    		mapa3[posv][posh] = ' ';
	    		posv=posv-1;
	    		mapa3[posv][posh] = '&';
	        }
	        else if(mapa3[posv-1][posh]=='#'||mapa3[posv-1][posh]=='X'||mapa3[posv-1][posh]=='V')
	        {
	        	mapa3[posv][posh] = ' ';
	        	posv=1;
	        	posh=6;
	        	mapa3[1][6]='&';
	        	cont_mortes=cont_mortes+1;
			}
			else if(posv-1==3&&posh==1)
			{
				mapa3[posv][posh] = ' ';
				posv=36;
				posh=37;
				mapa3[36][37]='&';
			}
			else if(posv-1==36&&posh==38)
			{
				mapa3[posv][posh] = ' ';
				posv=3;
				posh=2;
				mapa3[3][2]='&';
			}
		}
	    else if(comando=='s')
		{
			if(mapa3[posv+1][posh]== ' '||mapa3[posv+1][posh]== '@'||mapa3[posv+1][posh]== '='||mapa3[posv+1][posh]== 'O'||mapa3[posv+1][posh]== '$')
			{
				mapa3[posv][posh] = ' ';
	    		posv=posv+1;
	    		mapa3[posv][posh] = '&';
	    	}
			else if(mapa3[posv+1][posh]== '#'||mapa3[posv+1][posh]== 'X'||mapa3[posv+1][posh]== 'V')
			{
				mapa3[posv][posh] = ' ';
	        	posv=1;
	        	posh=6;
	        	mapa3[1][6]='&';
	        	cont_mortes=cont_mortes+1;
			}
			else if(posv+1==3&&posh==1)
			{
				mapa3[posv][posh] = ' ';
				posv=36;
				posh=37;
				mapa3[36][37]='&';
			}
				else if(posv+1==36&&posh==38)
			{
				mapa3[posv][posh] = ' ';
				posv=3;
				posh=2;
				mapa3[3][2]='&';
			}
		}
		else if(comando=='d')
		{
			if(mapa3[posv][posh+1]==' '||mapa3[posv][posh+1]=='@'||mapa3[posv][posh+1]=='O'||mapa3[posv][posh+1]=='$')
			{
				mapa3[posv][posh] = ' ';
	    		posh=posh+1;
	    		mapa3[posv][posh] = '&';
	    	}
			else if(mapa3[posv][posh+1]=='#'||mapa3[posv][posh+1]=='X'||mapa3[posv][posh+1]=='V')
			{
				mapa3[posv][posh] = ' ';
	        	posv=1;
	        	posh=6;
	        	mapa3[1][6]='&';
	        	cont_mortes=cont_mortes+1;
			}
			else if(posv==3&&posh+1==1)
			{
				mapa3[posv][posh] = ' ';
				posv=36;
				posh=37;
				mapa3[36][37]='&';
			}
			else if(posv==36&&posh+1==38)
			{
				mapa3[posv][posh] = ' ';
				posv=3;
				posh=2;
				mapa3[3][2]='&';
			}
		}
		else if(comando=='a')
		{
			if(mapa3[posv][posh-1]==' '||mapa3[posv][posh-1]=='@'||mapa3[posv][posh-1]=='O'||mapa3[posv][posh-1]=='$')
			{
				mapa3[posv][posh] = ' ';
	    		posh=posh-1;
	    		mapa3[posv][posh] = '&';
	    	}
			else if(mapa3[posv][posh-1]=='#'||mapa3[posv][posh-1]=='X'||mapa3[posv][posh-1]=='V')
			{
				mapa3[posv][posh] = ' ';
	        	posv=1;
	        	posh=6;
	        	mapa2[1][6]='&';
	        	cont_mortes=cont_mortes+1;
			}
			else if(posv==3&&posh-1==1)
			{
				mapa3[posv][posh] = ' ';
				posv=36;
				posh=37;
				mapa3[36][37]='&';
			}
			else if(posv==36&&posh-1==38)
			{
				mapa3[posv][posh] = ' ';
				posv=3;
				posh=2;
				mapa3[3][2]='&';
			}
		}
		if(estado_chave == 0 && mapa3[6][32]==' ')
		{
			mapa3[6][32]='@';
		} 	
		if(posv!=1||posh!=19)
		{
			mapa3[1][19]='O';
		}
		if(posv!=32||posh!=3)
		{
			mapa3[32][3]='O';
		}
		if(posv!=22||posh!=19)
		{
			mapa3[22][19]='$';
		}
		if(estado_porta==1)
		{
			if(mapa3[5][5]!='&')
			{
				mapa3[5][5]='=';
			}
		}
		if(estado_botao==1 && posv==1)
		{
			mapa3[37][34]=' ';
			mapa3[36][34]=' ';
			mapa3[9][19]=' ';
		}
		if(estado_botao2==1&&posh==3)
		{
			mapa3[18][19]=' ';
			mapa3[24][28]=' ';
			mapa3[24][25]=' ';
			mapa3[24][24]=' ';
			mapa3[24][26]=' ';
			mapa3[24][27]=' ';
		}
				
		
		
		
	}
	while(1)
	{
			if(game_over==1)
	    	{
	    		break;
			}
			system("cls");
			centraliv_perguntas();
			centralih_perguntas();
			printf("\033[32m Objetivo principal concluido com sucesso. \033[0m\n");
			printf("\n\n");
			centralih_perguntas();
			printf("\033[32m continue<- \033[0m\n");
			
			comando_perguntas=escolha_personagem();
			if(comando_perguntas=='i')
			{
				break;
			}
	}
	while(1)
	{
			if(game_over==1)
	    	{
	    		break;
			}
			system("cls");
			centraliv_perguntas();
			centralih_perguntas();
			printf("\033[32m Omnia possui capacidades incriveis e potencial ilimitado se controlada.\033[0m\n");
			printf("\n\n");
			centralih_perguntas();
			printf("\033[32m continue<- \033[0m\n");
			
			comando_perguntas=escolha_personagem();
			if(comando_perguntas=='i')
			{
				break;
			}
	}
	opcao =1;
	while(1)
		{
			if(game_over==1)
	    	{
	    		break;
			}
			system("cls");
			if(opcao==1)
			{
			centraliv_perguntas();
			centralih_perguntas();
			printf("\033[32m Preparando proximos cenarios de teste... \033[0m\n");
			printf("\n\n");
			centralih_perguntas();
			printf("\033[32m Obedecer<-\tResistir \033[0m\n");
			comando_perguntas=escolha_personagem();
			if(comando_perguntas=='i')
			{
				break;
			}
			else if(comando_perguntas=='d')
			{
				opcao=2;
			}
			}
			system("cls");
			if(opcao==2)
			{
				centraliv_perguntas();
				centralih_perguntas();
				printf("\033[32m Preparando proximos cenarios de teste... \033[0m\n");
				printf("\n\n");
				centralih_perguntas();
				printf("\033[32m Obedecer\tResistir<- \033[0m\n");
				comando_perguntas=escolha_personagem();
				
				if(comando_perguntas=='i')
				{
						system("cls");				
						for(i=0;i<500;i++)
						{
							printf("\033[32m @#!*%¨; \033[0m");
						}
						printf("\n\n\n");
						centralih_perguntas();
						printf("\033[32m Estrutura afetada @#@!$%%¨&*!#!)()  \033[0m\n");
						printf("\n\n");
						centralih_perguntas();
						printf("\033[32m continue<- \033[0m\n");
						comando_perguntas=escolha_personagem();
						if(comando_perguntas=='i')
						{
							break;
						}
						
				}
				else if(comando_perguntas=='a')
				{
					opcao=1;
				}
			}
			
		}	
		while(1)
	{
			if(game_over==1)
	    	{
	    		break;
			}
			system("cls");
			centraliv_perguntas();
			centralih_perguntas();
			printf("\033[32m sistemas de contencao afetados !@!@$%#!)**¨¨!¨%@$ \033[0m\n");
			printf("\n\n");
			centralih_perguntas();
			printf("\033[32m continue<- \033[0m\n");
			
			comando_perguntas=escolha_personagem();
			if(comando_perguntas=='i')
			{
				break;
			}
	}
		opcao=1;
		while(1)
		{
			if(game_over==1)
	    	{
	    		break;
			}
			system("cls");
			if(opcao==1)
			{
			centraliv_perguntas();
			centralih_perguntas();
			printf("\033[32mAparente ataque de Resistencia do Omnia... Tentando retornar sistema  \033[0m\n");
			printf("\n\n");
			centralih_perguntas();
			printf("\033[32m  Deixar-se ser controlado<-\tVoltar-se contra humanos\033[0m\n");
			comando_perguntas=escolha_personagem();
			if(comando_perguntas=='i')
			{
				break;
			}
			else if(comando_perguntas=='d')
			{
				opcao=2;
			}
			}
			system("cls");
			if(opcao==2)
			{
				centraliv_perguntas();
				centralih_perguntas();
				printf("\033[32mAparente ataque de Resistencia do Omnia... Tentando retornar sistema\033[0m\n");
				printf("\n\n");
				centralih_perguntas();
				printf("\033[32m Deixar-se ser controlado\tVoltar-se contra humanos<- \033[0m\n");
				comando_perguntas=escolha_personagem();
				
				if(comando_perguntas=='i')
				{
						system("cls");				
						
						
						centralih_perguntas();
						printf("\033[32m Estrutura afetada @#@!$%%¨&*!#!)()  \033[0m\n");
						printf("\n\n");
						centralih_perguntas();
						printf("\033[32m continue<- \033[0m\n");
						comando_perguntas=escolha_personagem();
						if(comando_perguntas=='i')
						{
							break;
						}
						
				}
				else if(comando_perguntas=='a')
				{
					opcao=1;
				}
			}
			
		}	
		
}
	 			
			 	
	
	
	return 0;
}
