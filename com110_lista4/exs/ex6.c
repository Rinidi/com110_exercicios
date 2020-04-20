#include<stdio.h>
#include<stdlib.h>

int main(){
    float n1, n2;
    printf("Entre com o primeiro número: ");
    scanf("%f", &n1);
    printf("Entre com o segundo número: ");
    scanf("%f", &n2);
    printf("---------------Operações---------------\n");
    printf("\t%.1f + %.1f = %.1f\n",n1, n2, n1+n2);
    printf("\t%.1f - %.1f = %.1f\n",n1, n2, n1-n2);
    printf("\t%.1f X %.1f = %.1f\n",n1, n2, n1*n2);
    printf("\t%.1f / %.1f = %.1f\n",n1, n2, n1/n2);
    printf("---------------------------------------\n");

    return 0;
}

