#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numJogadas = 10;
    int dado[numJogadas], freq[numJogadas], saida[numJogadas], saidaF[numJogadas], c=0, p=0;
    printf("Entre com os números sorteados pelo dado:\n");
    for (int i = 0; i < numJogadas; i++)
    {
        printf("Jogada %d:", i + 1);
        scanf("%d", &dado[i]);
        freq[i]= 1; //variavel que marca a frequencia que o numero aparece
    }
    for (int i = 0; i < numJogadas; i++) //Remoção dos números iguais dentro do vetor 
    {
        for (int j = 0; j < numJogadas; j++)
        {
            if (dado[i] == dado[j] && i != j)
            {
                freq[i]++;
            }
        }
    }
    printf("Frequencia dos numeros:\n");
    for(int i = 0; i < numJogadas; i++)
    {
        for(c = 0; c < p; c++ )
        {
            if( dado[i] == saida[c] )
                break;
        }

        if( c == p )
        {
            saida[p] = dado[i];
            saidaF[p] = freq[i];
            p++;
        }else{ //estava dando estouro de memória por isso armazenei o valor 0
            saida[p] = 0;
            saidaF[p] = 0;
            p++;
        }
    }
    for (int i = 0; i < numJogadas; i++)
    {
        if(saidaF[i]!=0){//o vallres diferentes de zero não serão printados
            printf("%d - %d vezes \n", saida[i], saidaF[i]);
        }
    }
    return 0;
}