#include<stdio.h>
#include<stdlib.h>

int main(){
    int idade = 1;
    printf("Entre com a sua idade: ");
    scanf("%d", &idade);
    printf("Com sua idade atual: %d anos\nVocê ", idade);
    if(idade<16){
        printf("não pode votar!");
    }else if(idade>=16 && idade<18 || idade>65){
        printf("pode votar!");
    }else{
        printf("é obrigado a votar");
    }
    printf("\n");
    return 0;
}
