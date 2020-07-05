#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 
*	Estrutura para armanezamento temporario das 
*	informacoeses do usuario como quantidade de jogos
*	e quantidade de vitórias
*/
struct user
{
    char name[50];
    int wins, jogos, simbol;
};
// Declaracao das funcoes
int verificaVitoria(char M[3][3]);
void zeraMatriz(char M[3][3]);
void organizaPlacar(int* pontuacao, char nomes[][100], int tamanho);

int main()
{
    // Declaracao das variaveis
    int n = 3, aux = 1, op = 0, win = 0, velha = 0, usuVi = 0, i, j;
    int botJogX, botJogY, botVi = 0, turno = 0;
    int lin = 0, col = 0;
    char M[3][3];

    // Declaracao de variaveis para o placar
    FILE *arq;
    
    // Variaveis responsaveis pelos valores placar
    char placarNomes[10][100];
    int placarWins[10];
    
    //Variaveis qu vão receber o valor do arquivo
    char placarNome[100];
    int placarWin;
    int placarTam = 0;
    
    //Declaracao da estrutura
    struct user u;
    u.jogos = 0;
    u.wins = 0;

    //Preenchendo a Matriz 3x3 com espacos em branco
    zeraMatriz(M);
    // Utilizacao da estrutura DOWHILE como menu de selecao de opcoes
    do
    {
        //Amostragem do Menu
        printf("----------------Menu----------------\n");
        //Esquema para printagem diferente
        //caso seja o primeiro jogo
        if (!u.jogos)
        {
            printf("\t1. Jogar\n");
        }
        else
        {
            printf("\t1. Jogar Novamente\n");
        }
        printf("\t2. Mostrar Ranking\n");
        printf("\t3. Sair\n");
        printf("------------------------------------\n");
        printf(" Opcao: ");
        scanf("%d", &op);
        ////////Fim Menu//////////
        // Switch utilizando a variavel que contem a opcao do usuario
        switch (op)
        {
        case 1:
            system("cls");       //Comando para limpar a tela no windows
            //printf("\e[H\e[2J"); // Comando para limpar a tela no linux

            // Executa este trecho SE for o primeiro jogo
            if (!u.jogos)
            {
                printf("Entre com o nome do usuario: ");
                scanf("%s", u.name);
                
                //Leitura do simbolo do jogador
            	do{
	            	printf("Escolha com qual simbolo deseja jogar:\n\t1 . X\n\t2 . O\n");
		            printf("Opcao: ");
		            scanf("%d", &u.simbol);
	            	if (u.simbol != 1 && u.simbol != 2)
            		{
                		printf("\nOpcao Invalida!, ira jogar com X\n");
            		}
				}while(u.simbol!=1 && u.simbol!=2);
				system("cls");  
				// Lógica para sortear o jogador iniciante
				turno = rand() % 2;
				printf("Para uma dificuldade maior, o primeiro jogador\nsera escolhido aleatoriamente");
				printf(" e o jogador perdedor\niniciara proxima partida.\n");
            	printf("O primeiro a jogar sera: ");
           	 	if(turno)
				{
            		printf("A maquina\n");
				}
				else
				{
					printf("Voce\n");
				}
            }

            // Inicio da partida
            while (aux != 0)
            {
            	//system("cls"); //Comando para limpar a tela no windows
                //printf("\e[H\e[2J"); // Comando para limpar a tela no linux
                
                //Printagem do tabuleiro
                if (!turno || botVi || usuVi)
                {
                    // Estrutura de repeticao For para mostrar o tabuleiro
                    for(i = 0; i < (n + 2); i++)
                    {
                        printf("\t");
                        for (j = 0; j < n; j++)
                        {
                            if (i != 1 && i != 3)
                            {
                                //Espacos a serem preenchidos
                                if (i == 4)
                                {
                                    printf(" %c ", M[i - 2][j]);
                                }
                                else if (i == 2)
                                {
                                    printf(" %c ", M[i - 1][j]);
                                }
                                else
                                {
                                    printf(" %c ", M[i][j]);
                                }
                                if (j < 2)
                                {
                                    printf("|");
                                }
                            }
                            else
                            {
                                //Barra horizontal que cruza o tabuleiro
                                if (j < 2)
                                {
                                    printf("----");
                                }
                                else
                                {
                                    printf("---");
                                }
                            }
                        }
                        printf("\n");
                    }
                    // Verifica se houve vitória
                    if (win)
                    {
                        aux = 0;
                        break;
                    }
                }
                //Fim da printagem do tabuleiro
                
                // Usuario
                if (!turno && !win && !velha)
                {
                    
					//Jogada do usuario
                    do{
                        /*
                        * Loop é necessário para verificar se o a  
                        * posicao escolhida pelo usuario ja esxiste 
                        * dentro da matriz de caracteres
                        */
                        printf("\nJogador: %s", u.name);
                        printf("\nDigite a linha: ");
                        scanf("%d", &lin);
                        printf("Digite a coluna: ");
                        scanf("%d", &col);
                        col--;
                        lin--;
                        // Verifica se a posicao escolhida esta vazia
                        if(M[lin][col] == ' '){
                            if (u.simbol == 1)
                            {
                                M[lin][col] = 'X';
                            }
                            else
                            {
                                M[lin][col] = 'O';
                            }
                            turno = 1;
                        }else
                        {
                            printf("\nPosicao invalida!,tente novamente\n");
                        }
                    }while(!turno);
                    //Verificacao  de vitoria do jogador ao fim de cada jogada
                    win = verificaVitoria(M);
                    if(win){
                        //variavel que corresponde a vitoria do jogador
                        usuVi = 1;
                    }
                }
                //Bot
                else if (!win && !velha)
                {
                    ////Jogada do bot
                    do
                    {
                        /*
                        * Loop para verificar se o numero
                        * aleatorio sortead pelo bot ja existe
                        * dentro da matriz de caracteres
                        */
                        botJogX = (rand() % 3);
                        botJogY = (rand() % 3);
                        if (M[botJogX][botJogY] == ' ')
                        {
                            if (u.simbol == 1)
                            {
                                /*Verifica qual simbolo usar 
                                a partir da escolha do usuario*/
                                M[botJogX][botJogY] = 'O';
                            }
                            else
                            {
                                M[botJogX][botJogY] = 'X';
                            }
                            turno = 0;
                        }
                        else
                        {
                            turno = 1;
                        }
                        //Verificacao de Vitoria do bot ao fim de cada jogada
                        win = verificaVitoria(M);
                        if(win){
                            botVi = 1;
                        }
                        //printf("\n\n\t%d  %d\n\n", botJogX, botJogY);
                    } while (turno != 0);
                    /* Utiliza o turno como auxiliar para o loop
                       caso a posicao aleatoria ja esteja preenchida
                       o programa continua no looping*/
                }
                if(!win && !velha)
                {
                    aux++;
                }
                if(aux==10){
                    velha=1;
                    aux = 0;
                    break;
                }
            }
            if (turno && !velha)
            {
                printf("\nParabens voce ganhou!\n\n");
                zeraMatriz(M);
                u.wins++;
                u.jogos++;
            }
            else if (!turno && !velha)
            {
                printf("\nVitoria do bot!, tente novamente\n\n");
                zeraMatriz(M);
                u.jogos++;
            }
            else
            {
                printf("\nDeu Velha!!, tente novamente\n\n");
                zeraMatriz(M);
                u.jogos++;
            }
            break;
        case 2:
			system("cls"); //Comando para limpar a tela no windows
            //printf("\e[H\e[2J"); // Comando para limpar a tela no linux
            
            //Abertura do arquivo com verificação de erro
            arq = fopen("placar.txt", "r");
            if(arq == NULL){
            	printf("Erro ao abrir o arquivo!\n");
            	return 0;
			}
			
			//Armazenamento dos valores recebidos do arquivo em vetores
			while(fscanf(arq, "%s %d", placarNome, &placarWin)!=EOF){
				strcpy(placarNomes[placarTam], placarNome);
				placarWins[placarTam] = placarWin;
				placarTam++;
			}
			
			//Organiza os valores recebidos
			if(placarTam != 0){
				organizaPlacar(placarWins, placarNomes, placarTam);
			}
			
			//Mostra os valores organizados
			printf("------------Ranking------------\n");
			if(!placarTam){
				printf("Sem registros no ranking!\n");
			}else{
				for(i = 0; i<placarTam; i++){
					printf(" %d.\t %s - %d\n",i+1, placarNomes[i], placarWins[i]);
				}
			}
			fclose(arq);
			if(u.jogos != 0){
				printf("--------------Voce-------------\n");
				printf(" %s - %d\n", u.name, u.wins);
				printf("-------------------------------\n");
			}
			
            break;
        case 3:
        	// Ao sair a pontuação do usuário é salva no arquivo
        	if(u.jogos != 0 ){
        		arq = fopen("placar.txt", "a");
	            if(arq == NULL){
	            	printf("Erro ao abrir o arquivo!\n");
	            	return 0;
				}
				fprintf(arq, "%s ", u.name);
				fprintf(arq, "%d\n", u.wins);
				fclose(arq);
			}
			
            break;
        default:
            printf("\nOpcao Invalida, tente novamente\n\n");
            break;
        }
        /*
			Ao zerar todas as variáveis menos o turno é permitido que
        	cada jogo seja iniciado pelo perdedor da partida anterior
		*/
        win = 0;
        velha = 0;
        aux = 1;
        usuVi = 0;
        placarTam = 0;
        botVi = 0;
    } while (op != 3);
    /* 
    * Se a opcao selecionada no menu for 3, ou seja sair,
    * O programa sai da estrutura de repeticao
    */
    return 0;
}

int verificaVitoria(char M[3][3])
{
	/*
	*	Funcao responsavel por verificar cada
	*	cada possiblidade de vitoria assim que
	*	cada jogador realiza uma jogada
	*/
    int res = 0;
    if ((M[0][0] == M[0][1] && M[0][1] == M[0][2] && M[0][2] != ' ') ||
        (M[1][0] == M[1][1] && M[1][1] == M[1][2] && M[1][2] != ' ') ||
        (M[2][0] == M[2][1] && M[2][1] == M[2][2] && M[2][2] != ' ') ||
        //Vitoria por linhas
        
        (M[0][0] == M[1][0] && M[1][0] == M[2][0] && M[2][0] != ' ') ||
        (M[0][1] == M[1][1] && M[1][1] == M[2][1] && M[2][1] != ' ') ||
        (M[0][2] == M[1][2] && M[1][2] == M[2][2] && M[2][2] != ' ') ||
        //Vitoria por colunas
        
        (M[0][0] == M[1][1] && M[1][1] == M[2][2] && M[2][2] != ' ') ||
        (M[2][0] == M[1][1] && M[1][1] == M[0][2] && M[0][2] != ' '))
    	//Vitoria por Diagonais
    {
        res = 1;
    }
    return res;
}
void zeraMatriz(char M[3][3])
{
	/*
	* Esta funcao realiza a limpagem da matriz preenchendo cada
	* espaco da mesma com um espaco vazio, utiliza a passagem
	* de parametro por referencia para que se faca as operacoes
	* direto na posicao da matriz na memoria.
	*/
	int i, j;
	
	// Duas estruturas for para percorrer a matriz por completo
    for(i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
        	//Cada posicao recebe um espaco como valor
            M[i][j] = ' ';
        }
    }
}

void organizaPlacar(int* pontuacao, char nomes[][100], int tam){
	int i;
	int mudou;
	do{
		mudou = 0;
		for(i=tam; i>0; i--){
			if(pontuacao[i]> pontuacao[i-1]){
				int pAux;
				char nAux[100];
				pAux = pontuacao[i];
				strcpy(nAux, nomes[i]);
				pontuacao[i] = pontuacao[i-1];
				strcpy(nomes[i], nomes[i-1]);
           		pontuacao[i-1] = pAux;
            	strcpy(nomes[i-1], nAux);
            	mudou = 1;
			}
		}
	}while(mudou);
}
