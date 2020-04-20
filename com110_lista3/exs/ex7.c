#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    float massa, altura, imc;
    printf("------------Calculadora de IMC------------\n");
    printf("Entre com o seu peso: ");
    scanf("%f", &massa);
    printf("Entre com a sua altura: ");
    scanf("%f", &altura);
    imc = massa/pow(altura, 2.0);
    printf("O seu IMC é: %.2f\n", imc);
    return 0;
}

