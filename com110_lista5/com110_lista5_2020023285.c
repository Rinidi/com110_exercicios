#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void printaMenu(void);
void printaQuadrado(void);
void printaRetangulo(void);
void printaTriEqui(void);
void printaTriRet(void);
void printaLosango(void);
int main()
{
    int op = 0;

    do
    {
        printaMenu();
        printf("\n  Opção: ");
        scanf("%d", &op);
        printf("\n");
        switch (op)
        {
        case 1: // Quadrado selecionado//
            printaQuadrado();
            break;
        case 2:
            printaRetangulo();
            break;
        case 3:
            printaTriEqui();
            break;
        case 4:
            printaTriRet();
            break;
        case 5:
            printaLosango();
            break;
        case 6:
            printf("\tObrigado!\n\n");
            break;
        default:
            printf("\n\tOpção Inválida\n\n");
            break;
        }
    } while (op != 6);

    return 0;
}
void printaMenu()
{
    for (int i = 0; i < 15; i++)
    {
        printf(" ");
        for (int j = 0; j < 50; j++)
        {
            if (i < 3 || i > 12)
            {
                if (i == 1 && j == 15)
                {
                    printf(" MENU DE OPÇÕES ");
                    j = 30;
                }
                else
                {
                    printf("#");
                }
            }
            else if (i >= 3 && i <= 12)
            {
                if (j < 2 || j > 47)
                {
                    printf("#");
                }
                else if (j == 2)
                {
                    switch (i)
                    {
                    case 4:
                        printf("  Escolha uma forma geométrica:");
                        j = 32;
                        break;
                    case 6:
                        printf(" 1.  Quadrado");
                        j = 14;
                        break;
                    case 7:
                        printf(" 2.  Retângulo");
                        j = 15;
                        break;
                    case 8:
                        printf(" 3.  Triângulo Equilátero");
                        j = 26;
                        break;
                    case 9:
                        printf(" 4.  Triângulo Retângulo (catetos iguais)");
                        j = 42;
                        break;
                    case 10:
                        printf(" 5.  Losango");
                        j = 13;
                        break;
                    case 11:
                        printf(" 6.  Sair");
                        j = 10;
                        break;
                    default:
                        printf(" ");
                        break;
                    }
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return;
}
void printaQuadrado()
{
    float lQuad;
    for (int i = 0; i < 3; i++)
    {
        printf(" ");
        for (int j = 0; j < 50; j++)
        {
            if (i == 0 || i == 2)
            {
                printf("=");
            }
        }
        if (i == 1)
        {
            printf("  Quadrado");
        }
        printf("\n");
    }
    printf("\n   Digite o lado do quadrado:  ");
    scanf("%f", &lQuad);
    if (lQuad <= 0)
    {
        printf("\n\tValor inválido!!\n\n");
        return;
    }
    printf("\n\n   AREA: %.2f\n   PERÍMETRO:  %.2f\n\n", lQuad * lQuad, lQuad * 4);
    for (int i = 0; i < (lQuad + 3); i++)
    {
        printf(" ");
        for (int j = 0; j < (lQuad + 2); j++)
        {
            if (i == 0)
            {
                if (j > 0 && j <= lQuad + 1)
                {
                    if (j == lQuad + 1)
                    {
                        printf("_");
                    }
                    else
                    {
                        printf("__");
                    }
                }
                else
                {
                    printf(" ");
                }
            }
            else if (i == 1)
            {
                if (j == 0 || j == lQuad + 1)
                {
                    if (j == lQuad + 1)
                    {
                        printf(" |");
                    }
                    else
                    {
                        printf("|");
                    }
                }
                else
                {
                    printf("  ");
                }
            }
            else if (i == (lQuad + 2))
            {
                if (j == 0)
                {
                    printf("|");
                }
                else
                {
                    if (j == lQuad + 1)
                    {
                        printf("_|");
                    }
                    else
                    {
                        printf("__");
                    }
                }
            }
            else
            {
                if (j == 0 || j == lQuad + 1)
                {
                    if (j == lQuad + 1)
                    {
                        printf(" |");
                    }
                    else
                    {
                        printf("|");
                    }
                }
                else
                {
                    printf(" @");
                }
            }
        }
        printf("\n");
    }
    printf("\n\n");
}
void printaRetangulo()
{
    float base, altura;
    for (int i = 0; i < 3; i++)
    {
        printf(" ");
        for (int j = 0; j < 50; j++)
        {
            if (i == 1 & j == 0)
            {
                printf("  Retângulo");
                j = 49;
            }
            else
            {
                printf("=");
            }
        }
        printf("\n");
    }
    printf("\n   Digite o valor da base do retângulo:  ");
    scanf("%f", &base);
    printf("   Digite o valor da altura do retângulo:  ");
    scanf("%f", &altura);
    if (base <= 0 || altura <= 0)
    {
        printf("\n\t Valor inválido!!\n\n");
        return;
    }
    printf("\n\n   AREA: %.2f\n   PERÍMETRO:  %.2f\n\n\t", base * altura, (2 * base) + (2 * altura));
    base++;
    altura += 2;
    for (int i = 0; i <= altura; i++)
    {
        for (int j = 0; j <= base; j++)
        {
            if ((j == 0 || j == base) && i > 0)
            {
                if (j == base && i != altura)
                {
                    printf(" |");
                }
                else if (j == base && i == altura)
                {
                    printf("__|");
                }
                else
                {
                    printf("|");
                }
            }
            else
            {
                if (i == 0 || i == altura)
                {
                    if (j == base - 1)
                    {
                        printf("_");
                    }
                    else if (j > 0 && j <= base)
                    {
                        printf("__");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                else if (i == 1)
                {

                    printf("  ");
                }
                else
                {
                    printf(" @");
                }
            }
        }
        printf("\n\t");
    }
    printf("\n");
}
void printaTriEqui()
{
    float lado, area, altura;

    for (int i = 0; i < 3; i++)
    {
        printf(" ");
        for (int j = 0; j < 50; j++)
        {
            if (i == 1 & j == 0)
            {
                printf("  Triângulo equilátero");
                j = 49;
            }
            else
            {
                printf("=");
            }
        }
        printf("\n");
    }
    printf("\n   Digite o lado do triângulo equilátero:  ");
    scanf("%f", &lado);
    if (lado <= 0)
    {
        printf("\n\t Valor inválido!!\n\n");
        return;
    }
    altura = (lado / 2) * sqrt(3);
    area = ((pow(lado, 2)) * sqrt(3)) / 4;
    printf("\n\n   AREA: %.2f\n   PERÍMETRO:  %.2f\n\n\t", area, (lado * 3));
    lado += 3;
    int espaco = lado, arroba = 1;

    for (int i = 0; i < lado; i++)
    {
        for (int j = 1; j <= espaco; j++)
        {
            if (j == espaco)
            {
                if (i == lado - 1)
                {
                    printf(" /_");
                }
                else if (i == 0)
                {
                    printf(" .");
                }
                else
                {
                    printf(" / ");
                }
            }
            else
            {
                printf(" ");
            }
        }
        espaco--;
        for (int x = 0; x < arroba; x++)
        {
            if (i == lado - 1)
            {
                printf("_");
            }
            else if (i <= 1)
            {
            }
            else
            {
                printf("@");
            }
        }
        if (i > 1)
        {
            arroba += 2;
        }
        if (i == lado - 1)
        {
            printf("_\\");
        }
        else if (i == 1)
        {
            printf("\\ \n\t");
        }
        else if (i == 0)
        {
            printf("\n\t");
        }
        else
        {
            printf(" \\ \n\t");
        }
    }
    
}
void printaTriRet()
{
    float x, y, h;
    for (int i = 0; i < 3; i++)
    {
        printf(" ");
        for (int j = 0; j < 50; j++)
        {
            if (i == 1 & j == 0)
            {
                printf("  Triângulo equilátero");
                j = 49;
            }
            else
            {
                printf("=");
            }
        }
        printf("\n");
    }
    printf("\n   Digite o valor do cateto:  ");
    scanf("%f", &x);
    if (x <= 0)
    {
        printf("\n\t Valor inválido!!\n\n");
        return;
    }
    y = x;
    h = sqrt(pow(y, 2) * 2);
    printf("\n\n   AREA: %.2f\n   PERÍMETRO:  %.2f\n\t", (x * y) / 2, (x + y + h));
    x += 3;
    for (int i = 0; i <= x; i++)
    {
        for (int j = 1; j < i; j++)
        {
            if (j == 1)
            {
                printf("|");
            }
            else if(i==x){
                printf("__");
            }
            else
            {
                printf(" @");
            }
            if(j==i-1 && i!=x){
                printf(" \\ \t");
            }else if(j==i-1 && i==x){
                printf("\\ \t");
            }
        }
        printf("\n\t");
    }
    printf("\n\tNão consegui fazer a borda ;-; \n\n");
}
void printaLosango()
{
    float dMaior, dMenor;
    for (int i = 0; i < 3; i++)
    {
        printf(" ");
        for (int j = 0; j < 50; j++)
        {
            if (i == 1 & j == 0)
            {
                printf("  Losango");
                j = 49;
            }
            else
            {
                printf("=");
            }
        }
        printf("\n");
    }
    printf("\n   Digite a diagonal maior:  ");
    scanf("%f", &dMaior);
    printf("\n   Digite a diagonal menor:  ");
    scanf("%f", &dMenor);
    if (dMaior <= 0 || dMenor  <=0)
    {
        printf("\n\t Valor inválido!!\n\n");
        return;
    }
    printf("\n\n   AREA: %.2f\n   PERÍMETRO:  %.2f\n\n\t", (dMenor*dMaior), (dMaior+dMenor)*2);

    float espaco, tam, arroba, metade;

        arroba = 1;
        espaco = tam = dMaior;
        metade = tam/2;

        for(int i =0; i<metade; i++){
            for(int j = 0 ; j<espaco; j++){
                printf(" ");
            }
            espaco--;

            for(int x = 0; x<arroba; x++){
                printf("@");
            }
            printf("\n\t");
            arroba+=2;
        }
        arroba-=2;
        espaco++;
        for(int i =0; i<metade; i++){
            arroba-=2;
            espaco++;
            
            for(int j = 0; j<espaco;j++){
                printf(" ");
            }
            for(int x = 0; x<arroba; x++){
                printf("@");
            }
            printf("\n\t");
        }
    printf("\n");
}