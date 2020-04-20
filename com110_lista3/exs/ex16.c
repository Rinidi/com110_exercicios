#include<stdio.h>
#include<stdlib.h>

int main(){
    int n1, n2, M, maior,menor;
    printf("Calculadora de tabuada por intervalo\n");
    printf("Entre com o primeiro número: ");
    scanf("%d", &n1);
    printf("Entre com o segundo número: ");
    scanf("%d", &n2);
    if(n1>n2){
        maior = n1;
        menor = n2;
    }else{
        maior = n2;
        menor = n1;
    }
    printf("Tabuada de %d até %d\n", menor, maior);
    for(int j=0 ; j<=10;j++){
        for(int i = menor; i<=maior; i++){
            M = i*j;
            printf("%d X %d = %d\t", i, j, M);
        }
        printf("\n");
    }
    return 0;
}

