#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

//Codigo Menu
	
	srand(time(NULL));
	
int cont_menu1, cont_menu2;      // variaveis para centralizar o menu na tela
char escolha, movim_escolhas;    	//variaveis de escolha e movimentação no menu


escolha = 'j';		    // estado inicial do jogo

while(1)						   	 // loop principal  do menu
{ 
	system("cls");
	if(escolha=='j') 				    					//codigo se a opção jogo estiver selecionada
	{
			
		for(cont_menu1=0;cont_menu1<20;cont_menu1++) // impressão do menu com Jogar como opção selecionada
		{
			printf("\n");
			for(cont_menu2=0;cont_menu2<75;cont_menu2++)
			{
				printf(" ");
			}
		}	
	
		printf("Jogar <-\n");
		for(cont_menu2=0;cont_menu2<75;cont_menu2++)
			{
				printf(" ");
			}
			
		printf("Tutorial\n");
	
		for(cont_menu2=0;cont_menu2<75;cont_menu2++)
			{
				printf(" ");
			}
			
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
		else 
		{
			escolha='j';
		}
	}
	
	if(escolha=='t') 										// codigo se a opção tutorial estiver selecionada 
	{
		for(cont_menu1=0;cont_menu1<20;cont_menu1++)
		{
			printf("\n");
			for(cont_menu2=0;cont_menu2<75;cont_menu2++)
			{
				printf(" ");
			}
		}	
	
		printf("Jogar\n");
		for(cont_menu2=0;cont_menu2<75;cont_menu2++)
		{
				printf(" ");
		}
			
		printf("Tutorial <-\n");
	
		for(cont_menu2=0;cont_menu2<75;cont_menu2++)
		{
				printf(" ");
		}
			
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
		else 
		{
			escolha='t';
		}
	}
	if(escolha=='s')											// codigo se a opção sair estiver selecionada
	{
		for(cont_menu1=0;cont_menu1<20;cont_menu1++)
		{
			printf("\n");
			for(cont_menu2=0;cont_menu2<75;cont_menu2++)
			{
				printf(" ");
			}
		}	
	
		printf("Jogar\n");
		for(cont_menu2=0;cont_menu2<75;cont_menu2++)
		{
				printf(" ");
		}
			
		printf("Tutorial\n");
	
		for(cont_menu2=0;cont_menu2<75;cont_menu2++)
		{
				printf(" ");
		}
			
		printf("Sair <-\n");
		
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
		else 
		{
			escolha='s';
		}
	}
	if(escolha=='d')										//codigo se estiver dentro da aba de tutoriais 
	{
		printf("O LEGEND GATE apresenta um jogo de puzzles com uma campanha baseada em diferentes niveis que aumentam de dificuldade e complexidade exponencialmente, \ndito isso, aqui estao as instrucoes para guiar-se em sua jornada:\n\n ");
		printf(">A movimentacao do jogo se baseia nas teclas w/a/s/d para movimento e i para interacao.\n ");
		printf(">O player precisa utilizar das ferramentas disponiveis no mapa para que possa progredir nos niveis, dentre as ferramentas tem a chave='@',porta='D',\nbotao='O' e teleporte='>'.\n");
		printf(">O jogador tambem precisa ter atencao a elementos hostis do mapa que podem atrapalhar seu progresso, o jogador possui 3 vidas no para que possa terminar o\n jogo,");
		printf("caso o jogador entre em contato com um elemento hostil ele retorna ao inicio da fase e perde uma vida, os elementos a serem evitados sao espinhos='#', inimigos='X' e 'V'. ");
		printf("\n\n\t\tVoltar <-");
		
		
		
		while(1)			//laço para pegar o comando do teclado
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
	char comando; //comando do jogador 
	int posv_inimigo1=1;
 	int posh_inimigo1=6;
    int numero_aleatorio;
	char comando_inimigo1;
	int estado_porta = 0;
	int estado_chave = 0;
	int cont_mortes = 0;
    char mapa[10][10] = 
	{
        {'*', 'D', '*', '*', '*', '*', '*', '*', '*', '*'},
        {'*', '&', ' ', ' ', ' ', '*', 'X', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},  // mapa
        {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', ' ', '*', ' ', ' ', '@', '*'},
        {'*', '*', '*', '*', 'D', '*', '*', '*', '*', '*'}
    };
    
while(1)			//loop de construcao de mapa 
{
	system("cls");		//apagar mapa antigo
	
	numero_aleatorio = rand() % 4 + 1;
	if(numero_aleatorio==1 )
	{
		if(mapa[posv_inimigo1-1][posh_inimigo1]==' ')
    	{
    			
    		mapa[posv_inimigo1][posh_inimigo1] = ' ';
    		posv_inimigo1=posv_inimigo1-1;
    		mapa[posv_inimigo1][posh_inimigo1] = 'X';
        }
        else if(mapa[posv_inimigo1-1][posh_inimigo1]=='@')
        {
        	
        	mapa[posv_inimigo1][posh_inimigo1] = ' ';
    		posv_inimigo1=posv_inimigo1-1;
    		mapa[posv_inimigo1][posh_inimigo1] = 'X';
        	
		}
         
	}
	else if(numero_aleatorio==2)
	{
		if(mapa[posv_inimigo1+1][posh_inimigo1]==' ')
    	{
    			
    		mapa[posv_inimigo1][posh_inimigo1] = ' ';
    		posv_inimigo1=posv_inimigo1+1;
    		mapa[posv_inimigo1][posh_inimigo1] = 'X';
        }
        else if(mapa[posv_inimigo1+1][posh_inimigo1]=='@')
        {
        	
        	mapa[posv_inimigo1][posh_inimigo1] = ' ';
    		posv_inimigo1=posv_inimigo1+1;
    		mapa[posv_inimigo1][posh_inimigo1] = 'X';
        	
		}
	}
	else if(numero_aleatorio==3)
	{
		if(mapa[posv_inimigo1][posh_inimigo1+1]==' ')
    	{
    			
    		mapa[posv_inimigo1][posh_inimigo1] = ' ';
    		posh_inimigo1=posh_inimigo1+1;
    		mapa[posv_inimigo1][posh_inimigo1] = 'X';
        }
        else if(mapa[posv_inimigo1][posh_inimigo1+1]=='@')
        {
        	
        	mapa[posv_inimigo1][posh_inimigo1] = ' ';
    		posh_inimigo1=posh_inimigo1+1;
    		mapa[posv_inimigo1][posh_inimigo1] = 'X';
        	
		}
	}
	else if(numero_aleatorio==4)
	{
		if(mapa[posv_inimigo1][posh_inimigo1-1]==' ')
    	{
    			
    		mapa[posv_inimigo1][posh_inimigo1] = ' ';
    		posh_inimigo1=posh_inimigo1-1;
    		mapa[posv_inimigo1][posh_inimigo1] = 'X';
        }
        else if(mapa[posv_inimigo1][posh_inimigo1-1]=='@')
        {
        	
        	mapa[posv_inimigo1][posh_inimigo1] = ' ';
    		posh_inimigo1=posh_inimigo1-1;
    		mapa[posv_inimigo1][posh_inimigo1] = 'X';
        	
		}
	}
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	
	if(estado_chave == 0 && (posv != 8 || posh != 8))
	{
		mapa[8][8]='@';
	}
	if(cont_mortes==3) 	
	 {
	  	printf("GAME OVER");
	  	exit(0);
	 }		
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
    	
    	if(mapa[posv-1][posh]==' ')
    	{
    			
    		mapa[posv][posh] = ' ';
    		posv=posv-1;
    		mapa[posv][posh] = '&';
        }
        
        
        else if(mapa[posv-1][posh]=='@')
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
		if(mapa[posv+1][posh]== ' ')
		{
			mapa[posv][posh] = ' ';
    		posv=posv+1;
    		mapa[posv][posh] = '&';
    	}
    	else if(mapa[posv+1][posh]== '@')
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
		if(mapa[posv][posh+1]==' ')
		{
			mapa[posv][posh] = ' ';
    		posh=posh+1;
    		mapa[posv][posh] = '&';
    	}
    	else if(mapa[posv][posh+1]=='@')
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
		if(mapa[posv][posh-1]==' ')
		{
			mapa[posv][posh] = ' ';
    		posh=posh-1;
    		mapa[posv][posh] = '&';
    	}
    	else if(mapa[posv][posh-1]=='@')
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
 	 posv_inimigo1=16;
 	 posh_inimigo1=2;
     
	
	
 	cont_mortes = 0;
    posv = 9; // Posição inicial vertical do personagem
    posh = 9; // Posição inicial horizontal do personagem
 	
 	
 	estado_chave = 0;
    estado_porta = 0;
	

    char mapa2[20][20] = 
	{
		{'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'},
		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
  		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
  		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
  		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
  		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
  		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
  		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
  		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
  		{'*',' ',' ',' ',' ',' ',' ',' ',' ','&',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
  		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
  		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},  // mapa
  		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
  		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
  		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
  		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
  		{'*',' ','X',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ','*'},
  		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
  		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','@',' ',' ','*'},
  		{'*','D','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'}
	};
	
while(1)                                                             //loop fase 2
{	 	
	system("cls");
	
	numero_aleatorio = rand() % 4 + 1;
	
	if(numero_aleatorio==1 )
	{
		if(mapa2[posv_inimigo1-1][posh_inimigo1]==' ')
    	{
    			
    		mapa2[posv_inimigo1][posh_inimigo1] = ' ';
    		posv_inimigo1=posv_inimigo1-1;
    		mapa2[posv_inimigo1][posh_inimigo1] = 'X';
        }
        else if(mapa2[posv_inimigo1-1][posh_inimigo1]=='@')
        {
        	
        	mapa2[posv_inimigo1][posh_inimigo1] = ' ';
    		posv_inimigo1=posv_inimigo1-1;
    		mapa2[posv_inimigo1][posh_inimigo1] = 'X';
        	
		}
         
	}
	else if(numero_aleatorio==2)
	{
		if(mapa2[posv_inimigo1+1][posh_inimigo1]==' ')
    	{
    			
    		mapa2[posv_inimigo1][posh_inimigo1] = ' ';
    		posv_inimigo1=posv_inimigo1+1;
    		mapa2[posv_inimigo1][posh_inimigo1] = 'X';
        }
        else if(mapa2[posv_inimigo1+1][posh_inimigo1]=='@')
        {
        	
        	mapa2[posv_inimigo1][posh_inimigo1] = ' ';
    		posv_inimigo1=posv_inimigo1+1;
    		mapa2[posv_inimigo1][posh_inimigo1] = 'X';
        	
		}
	}
	else if(numero_aleatorio==3)
	{
		if(mapa2[posv_inimigo1][posh_inimigo1+1]==' ')
    	{
    			
    		mapa2[posv_inimigo1][posh_inimigo1] = ' ';
    		posh_inimigo1=posh_inimigo1+1;
    		mapa2[posv_inimigo1][posh_inimigo1] = 'X';
        }
        else if(mapa2[posv_inimigo1][posh_inimigo1+1]=='@')
        {
        	
        	mapa2[posv_inimigo1][posh_inimigo1] = ' ';
    		posh_inimigo1=posh_inimigo1+1;
    		mapa2[posv_inimigo1][posh_inimigo1] = 'X';
        	
		}
	}
	else if(numero_aleatorio==4)
	{
		if(mapa2[posv_inimigo1][posh_inimigo1-1]==' ')
    	{
    			
    		mapa2[posv_inimigo1][posh_inimigo1] = ' ';
    		posh_inimigo1=posh_inimigo1-1;
    		mapa2[posv_inimigo1][posh_inimigo1] = 'X';
        }
        else if(mapa2[posv_inimigo1][posh_inimigo1-1]=='@')
        {
        	
        	mapa2[posv_inimigo1][posh_inimigo1] = ' ';
    		posh_inimigo1=posh_inimigo1-1;
    		mapa2[posv_inimigo1][posh_inimigo1] = 'X';
        	
		}
	}
	
	 if(estado_chave == 0 && (posv != 18 || posh != 16))
	{
		mapa2[18][16]='@';
	} 	
	 if(cont_mortes==3) 	
	 {
	  	printf("GAME OVER");
	  	exit(0);
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
	}	
  	  if(comando=='w')			//codigo de movimento no mapa e colisao 
    {
    	if(mapa2[posv-1][posh]==' ')
    	{
    			
    		mapa2[posv][posh] = ' ';
    		posv=posv-1;
    		mapa2[posv][posh] = '&';
        }
        else if(mapa2[posv-1][posh]=='@')
        {
        	
        	mapa2[posv][posh] = ' ';
    		posv=posv-1;
    		mapa2[posv][posh] = '&';
        	
		}
        else if(mapa2[posv-1][posh]=='#')
        {
        	mapa2[posv][posh] = ' ';
        	posv=9;
        	posh=9;
        	mapa2[9][9]='&';
        	cont_mortes=cont_mortes+1;
		}
		else if(mapa2[posv-1][posh]=='X')
		{
			mapa2[posv][posh] = ' ';
        	posv=9;
        	posh=9;
        	mapa2[9][9]='&';
        	cont_mortes=cont_mortes+1;
		}
	}
    else if(comando=='s')
	{
		if(mapa2[posv+1][posh]== ' ')
		{
			mapa2[posv][posh] = ' ';
    		posv=posv+1;
    		mapa2[posv][posh] = '&';
    	}
    	else if(mapa2[posv+1][posh]== '@')
    	{
    		
    		mapa2[posv][posh] = ' ';
    		posv=posv+1;
    		mapa2[posv][posh] = '&';
		}
		else if(mapa2[posv+1][posh]== '=')
		{
			break;
		} 
		else if(mapa2[posv+1][posh]== '#')
		{
			mapa2[posv][posh] = ' ';
        	posv=9;
        	posh=9;
        	mapa2[9][9]='&';
        	cont_mortes=cont_mortes+1;
		}
		else if(mapa2[posv+1][posh]== 'X')
		{
			mapa2[posv][posh] = ' ';
        	posv=9;
        	posh=9;
        	mapa2[9][9]='&';
        	cont_mortes=cont_mortes+1;
		}
		
	}
	else if(comando=='d')
	{
		if(mapa2[posv][posh+1]==' ')
		{
			mapa2[posv][posh] = ' ';
    		posh=posh+1;
    		mapa2[posv][posh] = '&';
    	}
    	else if(mapa2[posv][posh+1]=='@')
    	{
    		
    		mapa2[posv][posh] = ' ';
    		posh=posh+1;
    		mapa2[posv][posh] = '&';
		}
		else if(mapa2[posv][posh+1]=='#')
		{
			mapa2[posv][posh] = ' ';
        	posv=9;
        	posh=9;
        	mapa2[9][9]='&';
        	cont_mortes=cont_mortes+1;
		}
		else if(mapa2[posv][posh+1]=='X')
		{
			mapa2[posv][posh] = ' ';
        	posv=9;
        	posh=9;
        	mapa2[9][9]='&';
        	cont_mortes=cont_mortes+1;
		}
	}
	else if(comando=='a')
	{
		if(mapa2[posv][posh-1]==' ')
		{
			mapa2[posv][posh] = ' ';
    		posh=posh-1;
    		mapa2[posv][posh] = '&';
    	}
    	else if(mapa2[posv][posh-1]=='@')
    	{
    		
    		mapa2[posv][posh] = ' ';
    		posh=posh-1;
    		mapa2[posv][posh] = '&';
		}
		else if(mapa2[posv][posh-1]=='#')
		{
			mapa2[posv][posh] = ' ';
        	posv=9;
        	posh=9;
        	mapa2[9][9]='&';
        	cont_mortes=cont_mortes+1;
		}
		else if(mapa2[posv][posh-1]=='X')
		{
			mapa2[posv][posh] = ' ';
        	posv=9;
        	posh=9;
        	mapa2[9][9]='&';
        	cont_mortes=cont_mortes+1;
		}
	}
  	if(estado_porta==1)
	{
		mapa2[19][1] = '=';
	}
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
}
	
	
	 
	 
	 
	 			
				 	
					 		
							 		
	
 	
 	
 	
 	

 
 

	
	
	return 0;
}
