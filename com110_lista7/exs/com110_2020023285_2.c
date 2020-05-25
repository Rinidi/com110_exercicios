#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 8, m[n][n], maior = 0, res = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%dX%d: ", i+1, j+1);
            scanf("%d", &m[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(m[j][i]!=m[i][j]){
                res = 1;
            }
        }
    }
    if(res == 1){
        printf("\n\tMatriz não simétrica\n");
    }else{
        printf("\n\tMatriz simétrica\n");
    }
    return 0;
}