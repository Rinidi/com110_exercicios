#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[8], temp = 0, c;

    for (int i = 0; i < 8; i++)
    {
        printf("Entre com o %d valor: ", i + 1);
        scanf("%d", &vet[i]);
        int j = i;
        while ((j != 0) && (vet[j] < vet[j - 1]))
        {
            c = vet[j];
            vet[j] = vet[j - 1];
            vet[j - 1] = c;
            j--;
        }
    }
    printf("Vetor preenchido:\n");

    for (int i = 0; i < 8; i++)
    {
        printf("valor %d: %d\n", i + 1, vet[i]);
    }

    return 0;
}