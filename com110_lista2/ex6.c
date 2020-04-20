#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    float n1,n2,n3, media=0;
    char o = 'e';
    printf("Entre com o primeiro número: ");
    scanf("%f", &n1);
    printf("Entre com o segundo número: ");
    scanf("%f", &n2);
    printf("Entre com o terceiro número: ");
    scanf("%f", &n3);
    while(o!='d'){
        printf("---------------------------\n");
        printf(" Selecione uma das opções\n");
        printf("(a)Média aritmética\n");
        printf("(b)Média geométrica\n");
        printf("(c)Média ponderada\n");
        printf("(d)Sair\n");
        printf("---------------------------\n");
        printf("Opção: ");
        o = getchar();
        o = getchar();
        printf("---------------------------\n");
        switch (o){
            case 'a':
            printf("=Você selecionou Média aritmética=\n");
            media = (n1+n2+n3)/3;            
            break;
        case 'b':
            printf("=Você selecionou Média geométrica=\n");
            media = pow((n1*n2*n3),(1.0/3.0));
            break;
        case 'c':
            printf("=Você selecionou Média geométrica=\n");
            printf("tomamos n1,n2 e n3 como pesos 1,2 e 3\nrespectivamente");
            media = ((n1*1)+(n2*2)+(n3*3))/6;
            break;
        default:
            printf("Opção inválida!\n");
            break;
        }
        printf("Sua média é: %.2f\n", media);
    }
    printf("Obrigado!!\n");
    return 0;
}