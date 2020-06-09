#include <stdio.h>

int main()
{
    char casa[3][3];     // variavel do jogo
    char jogador1[50],jogador2[50];        // variavel dos jogadores
    int linha, coluna;                     // variavel para definir o jogo
    int i,j,R,jogada=0;         // variavel para ordenar o jogo

    printf ("    Jogo da Velha     \n\n");          // atribuicao dos nomes para n ficar 'jogador x,o'
    printf ("Jogar? digite S para 'sim'\n");
    scanf ("%c",&R);

    if (R=='S')
    {
        printf ("Digite o nome jogador 'x':");
        scanf ("%s",&jogador1);
        printf ("\nDigite o nome jogador 'o':");
        scanf ("%s",&jogador2);
        printf ("\n%s comeca\n",jogador1);
    }

    else
        return 0;

    for(linha=0;linha<3;linha++)             //  espaços para preencher
    {
        for(coluna=0;coluna<3;coluna++)
        {
            casa[linha][coluna]=' ';
        }
    }

    do 
/* o 'do' ta ai apenas por conta de uma posiçao ja ocupada, se n buga
        ^ 
        era a ideia inicial, mas quis deixar tambem pra ja aproveitar esse laço
        e deixar o jogo rodando enquanto a pessoa escolha "S"
        para voltar a ideia original, só tira o R==S do final e deixa o while com retorno
        verdadeiro ' while (1);
        e tirem os 
        printf ("\nJogar Novamente? S para 'sim'");
        scanf ("%c",&R);
        e substituam por 
        return 0;
        break;
        se fizerem isso vao ver q ta rodando normalzao, so tinha dado um bug la do resultado
        estar saindo, mas é por conta do 'do', e esse resultado só sai certo se for a 1 fileira
        nao consegui pensar ainda em como tirar ele de la
        do mais eu nao lembro de mais nada, mas é isso, se quiserem tmb voltar ao jeito
        q eu disse, podem ver oq tava errado noq eu disse e tentar arrumar, fora isso
        nao deu mais nenhum problema, é noiz
    */
    {
        printf("Digite a posicao:\n");
        scanf("%d%d",&i,&j);

        if(casa[i][j]!=' ')
        {
            printf("Posicao ocupada! Tente Novamente\n");
            continue;
        }

        if(jogada%2==0)
        {
            casa[i][j]='x';
        }
        else
        {
            casa[i][j]='o';
        }
        for(linha=0; linha<3; linha++)              // vai imprimir a 1 coluna
        {
            printf("|");

            for(coluna=0; coluna<3; coluna++)           // vai imprimir o restante
            {
                printf("%c|",casa[linha][coluna]);
            }

        printf("\n");

        // velha por linhas

        if(casa[0][0]==casa[0][1] && casa[0][1]==casa[0][2] && casa[0][0]!=' ')
        {
            if (casa[0][0]=='x')            // if para atribuir o nome do jogador quando ganhar igual aos outros abaixo
            {
                printf("O jogador %s ganhou.\n",jogador1);
            }
            else
            {
                printf("O jogador %s ganhou.\n",jogador2);
            }
            printf ("\nJogar Novamente? S para 'sim'");
            scanf ("%c",&R);
        }
        else if(casa[1][0]==casa[1][1] && casa[1][1]==casa[1][2] && casa[1][0]!=' ')
        {
            if (casa[1][0]=='x')
            {
                printf("O jogador %s ganhou.\n",jogador1);
            }
            else
            {
                printf("O jogador %s ganhou.\n",jogador2);
            }
            printf ("\nJogar Novamente? S para 'sim'");
            scanf ("%c",&R);
        }
        else if(casa[2][0]==casa[2][1] && casa[2][1]==casa[2][2] && casa[2][0]!=' ')
        {
            if (casa[2][0]=='x')
            {
                printf("O jogador %s ganhou.\n",jogador1);
            }
            else
            {
                printf("O jogador %s ganhou.\n",jogador2);
            }
            printf ("\nJogar Novamente? S para 'sim'");
            scanf ("%c",&R);
        }

        // velha por colunas

        else if(casa[0][0]==casa[1][0] && casa[1][0]==casa[2][0] && casa[0][0]!=' ')
        {
            if (casa[0][0]=='x')
            {
                printf("O jogador %s ganhou.\n",jogador1);
            }
            else
            {
                printf("O jogador %s ganhou.\n",jogador2);
            }
            printf ("\nJogar Novamente? S para 'sim'");
            scanf ("%c",&R);
        }
        else if(casa[0][1]==casa[1][1] && casa[1][1]==casa[2][1] && casa[0][1]!=' ')
        {
            if (casa[0][1]=='x')
            {
                printf("O jogador %s ganhou.\n",jogador1);
            }
            else
            {
                printf("O jogador %s ganhou.\n",jogador2);
            }
            printf ("\nJogar Novamente? S para 'sim'");
            scanf ("%c",&R);
        }
        else if(casa[0][2]==casa[1][2] && casa[1][2]==casa[2][2] && casa[0][2]!=' ')
        {
            if (casa[0][2]=='x')
            {
                printf("O jogador %s ganhou.\n",jogador1);
            }
            else
            {
                printf("O jogador %s ganhou.\n",jogador2);
            }
            printf ("\nJogar Novamente? S para 'sim'");
            scanf ("%c",&R);
        }

        // velha por diagonais

        else if(casa[0][0]==casa[1][1] && casa[1][1]==casa[2][2] && casa[0][0]!=' ')
        {
            if (casa[0][0]=='x')
            {
                printf("O jogador %s ganhou.\n",jogador1);
            }
            else
            {
                printf("O jogador %s ganhou.\n",jogador2);
            }
            printf ("\nJogar Novamente? S para 'sim'");
            scanf ("%c",&R);
        }
        else if(casa[2][0]==casa[1][1] && casa[1][1]==casa[0][2] && casa[2][0]!=' ')
        {
            if (casa[2][0]=='x')
            {
                printf("O jogador %s ganhou.\n",jogador1);
            }
            else
            {
                printf("O jogador %s ganhou.\n",jogador2);
            }
            printf ("\nJogar Novamente? S para 'sim'");
            scanf ("%c",&R);
        }
        jogada++;
        }
        if ((casa[0][0] == 'x' || casa [0][0] == 'o') &&
            (casa[0][1] == 'x' || casa [0][1] == 'o') &&
            (casa[0][2] == 'x' || casa [0][2] == 'o') &&
            (casa[1][0] == 'x' || casa [1][0] == 'o') &&
            (casa[1][1] == 'x' || casa [1][1] == 'o') &&
            (casa[1][2] == 'x' || casa [1][2] == 'o') &&
            (casa[2][0] == 'x' || casa [2][0] == 'o') &&
            (casa[2][1] == 'x' || casa [2][1] == 'o') &&
            (casa[2][2] == 'x' || casa [2][2] == 'o'))
        {
            printf ("Empate\n");
            printf ("\nJogar Novamente? S para 'sim'");
            scanf ("%c",&R);
        }
    }
    while (R=='S');
    return 0;
}