#include<stdio.h>
#include<stdlib.h>

int main(){
    float minutos, segundos, cont=0;

    printf("Quantos minutos existem em x segundos?\n");
    printf("Entre com o valor de x: ");
    scanf("%f", &minutos);
    segundos = minutos * 60;
    /*for(int i = 0;i<minutos; i++){
        cont+=60;
    }*/
    printf("Existem %.0f segundos em %.1f minutos\n", segundos, minutos);
    return 0;
}

