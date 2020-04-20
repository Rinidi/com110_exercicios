#include<stdio.h>
#include<stdlib.h>

int main(){
    int hora;
    printf("Entre com a hora atual(0 a 24): ");
    scanf("%d", &hora);
    printf("O período do dia é: ");
    if(hora>=5 && hora<=11){
        printf("Manhã.\n");
    }else if(hora>=12 && hora<=17){
        printf("Tarde.\n");
    }else if(hora>=18 && hora<=24 || hora>=0 && hora<=4){
        printf("Noite.\n");
    }else{
        printf("Inválida\n");
    }
    return 0;
}

