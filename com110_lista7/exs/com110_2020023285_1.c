#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[2][2], maior = 0;

    printf("Preencha a sequinte matriz(2x2): \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%dX%d: ", i+1, j+1);
            scanf("%d", &m[i][j]);
            if (m[i][j] > maior)
            {
                maior = m[i][j];
            }
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            m[i][j] *=maior;
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
    return 0;
}