#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, maior, menor, c=0;
    printf("Insira Numeros positivos\n");
    do{
        printf("Entre com um número: ");
        scanf("%d", &n);
        if(c==0){
            maior= n;
            menor= n;
        }
        if(n<0){
            break;
        }
        if(n>maior){
            maior = n;
        }else if(n<menor){
            menor = n;
        }
        c++;
    }while(n>=0);
    printf("O maior número digitado foi: %d\n", maior);
    printf("O menor número digitado foi: %d\n", menor);
    return 0;
}

