#include<stdlib.h>
#include<stdio.h>

int main(){
    float n1 = 0, n2 = 0, n3 = 0, n4 = 0, media =0;
    printf("Entre com as quatro notas: \n");
    printf("Nota 1: ");
    scanf("%f", &n1);
    printf("Nota 2: ");
    scanf("%f", &n2);
    printf("Nota 3: ");
    scanf("%f", &n3);
    printf("Nota 4: ");
    scanf("%f", &n4);

    media = (n1+n2+n3+n4)/4;
    printf("Sua média foi: %.1f\n", media);
    printf("Você está: ");
    if(media>=6){
        printf("APROVADO");        
    }else{
        printf("REPROVADO");
    }
    printf("\n");
    return 0;
}

