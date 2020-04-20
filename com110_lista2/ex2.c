#include<stdio.h>
#include<stdlib.h>

int main(){
    int n1=0, n2=0, n3=0, maior, menor;
    printf("Entre com o primeiro número: ");
    scanf("%d", &n1);
    maior = n1;
    menor = n1;
    printf("Entre com o segundo numero: ");
    scanf("%d", &n2);
    if(n2>maior){
        maior = n2;
    }else if(n2<menor){
        menor = n2;
    }
    printf("Entre com o terceiro numero: ");
    scanf("%d", &n3);
    if(n3>maior){
        maior = n3;
    }else if(n3<menor){
        menor = n3;
    }   
    printf("O maior numero e: %d\n", maior);
    printf("O menor número é: %d\n", menor);
    return 0;
}

