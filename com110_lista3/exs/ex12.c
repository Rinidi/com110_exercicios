#include<stdio.h>
#include<stdlib.h>

int main(){
    int i=1;
    printf("---Numeros de 1 até 20---\n");
    while(i<=20){
        printf("\t%d\n",i);
        i++;
    }
    printf("-------------------------\n");
    printf("---Numeros de 20 até 1---\n");
    while(i>=1){
        printf("\t%d\n",i);
        i--;
    }
    printf("-------------------------\n");
    printf("Numeros impares de 1 a 20\n");
    
    while(i<=20){
        if(i%2 != 0){
            printf("\t%d\n",i);
        }
        i++;
    }
    printf("-------------------------\n");
    return 0;
}