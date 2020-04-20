#include<stdio.h>
#include<stdlib.h>

int main(){
    float VelVe, VelMax, perc;
    printf("Qual a velocidade do veículo?(Km/h): ");
    scanf("%f", &VelVe);
    printf("Qual a velocidade máxima da via?(Km/h): ");
    scanf("%f", &VelMax);
    if(VelMax<VelVe){
        perc = ((VelVe-VelMax)/VelMax) * 100;
        if(perc<20){
            printf("O valor da multa é de R$85,13\n");
        }else if(20<=perc && perc<50){
            printf("O valor da multa é R$127,69\n");
        }else if(perc>=50){
            printf("O valor da multa é R$574,62\n");
        }else{
            printf("Valores inválidos\n");
        }
    }else{
        printf("Não houve multa!\n");
    }
    return 0;
}

