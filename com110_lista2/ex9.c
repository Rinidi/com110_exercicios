#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int a=0, b=0, c=0, delta=0, op;
    int x1, x2;
    printf("Fórmula da equação de segundo grau");
    printf("\n\taX²+bX+c = 0\n");
    printf("Insira os valores para resolver a equação\n");
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    delta = (pow(b,2) - (4*a*c));
    x1 = ((-b) + sqrt(delta))/(2*a);
    x2 = ((-b) - sqrt(delta))/(2*a);
    printf("As raizes são\nX1: %d\nX2: %d\n",x1,x2);
    do{
        printf(">Sobre a equação de segundo grau\n");
        printf("\t>(1)Quais dados devo saber?\n");
        printf("\t>(2)Qual a fórmula?\n");
        printf("\t>(3)Ela sempre possui raizes?Quantas?\n");
        printf("\t>(4)Quais casos é preciso verificar?\n");
        printf("\t>(5)Sair\n");
        printf("Escolha: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("\n\n\tEssa equação necessita de 3 valores para\n");
            printf("\tsua resolução: a, b e c\n\n\n");
            break;
        case 2:
            printf("\n\n\tFórmula da equação de segundo grau\n");
            printf("\n\taX²+bX+c = 0\n\n\n");
            break;
        case 3:
            printf("\n\n\tNão necessariamente, ela pode ter\n");
            printf("\tduas raizes ou nenhuma.\n\n\n");
            break;
        case 4:
            printf("\n\n\tOs casos em que um dos valores é 0\n\n\n");
            break;
        case 5:
            break;   
        default:
            printf("\n\n\tOpção inválida!\n\n\n");
            break;
        }
    }while(op!=5);
    printf("Obrigado!");
    return 0;
}

