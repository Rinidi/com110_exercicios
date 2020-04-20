#include<stdio.h>
#include<stdlib.h>

int main(){
    float sal=0, salReaj=0;
    printf("Entre com o seu salário atual: R$");
    scanf("%f", &sal);
    if(sal<=1000){
        salReaj = sal*1.15;
    }else if(sal<=2000 && sal>=1000){
        salReaj = sal*1.10;
    }else{
        salReaj = sal*1.05;
    }
    printf("Seu salário foi reajustado para: R$%.2f\n", salReaj);
    return 0;
}

