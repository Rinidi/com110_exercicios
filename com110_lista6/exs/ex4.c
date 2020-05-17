#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int letras = 10;
    char palavra[letras];

    printf("Entre com 10 letras:\n");
    scanf("%s", palavra);
    printf("Invertendo:\n");
    for(int i = letras; i>=0;i--){
        if(palavra[i]){
            printf("%c ", palavra[i]);
        }
    }
    printf("\n");
    return 0;
}