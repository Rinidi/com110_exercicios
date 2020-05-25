#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 5, y = 7, m[x][y], aux = 0, maior = 0, auxPosY = 0, auxPosX = 0, res = 1;
    int anX, anY, an;
    for (int i = 0; i < x; i++) //Preenchendo a matriz
    {
        printf("Linha %d\n", i+1);
        for (int j = 0; j < y; j++)
        {
            m[i][j] = rand() % 20;           //preenchimento aleatório
            /*printf("%dX%d: ", i + 1, j + 1); //preenchimento manual
            scanf("%d", &m[i][j]);*/
        }
    }
    printf("\n");
    for (int i = 0; i < x; i++) //Mostrando a matriz
    {
        printf("\t");
        for (int j = 0; j < y; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }


    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (j == 0)
            {
                aux = m[i][j];
            }
            if (aux > m[i][j])
            {
                aux = m[i][j];
                auxPosY = j;
                auxPosX = i;
                maior = aux;
            }
        }
        for (int o = 0; o < x; o++)
        {
            if (m[o][auxPosY] > aux)
            {
                maior = m[o][auxPosY];
            }
        }
        if (aux == maior)
        {
            anX = auxPosX +1;
            anY = auxPosY +1;
            if (res == 1)
            {
                printf("\nExiste ponto de sela.");
                res++;
            }
            printf("\nPonto de sela: %d,\nposicao: %dX%d\n", aux, anX, anY);
        }
    }
    if (res == 1)
    {
        printf("\nNão existe ponto de sela\n");
        printf("\n");
    }
    return 0;
}