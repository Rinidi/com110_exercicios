#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 4, y = 7, m[x][y],minMax=0, menor = 0, menorPosX = 0;
    for (int i = 0; i < x; i++)
    {
        printf("\t");
        for (int j = 0; j < y; j++)
        {
            m[i][j] = rand() %10;
            if(i==0 && j==0){
                menor = m[i][j];
            }else if(m[i][j]<menor){
                menor = m[i][j];
                menorPosX = i;
            }
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < y; i++)
    {
        if(m[menorPosX][i]>minMax){
            minMax = m[menorPosX][i];
        }
    }
    printf("\n\tMINMAX: %d\n", minMax);
    

    return 0;
}