#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int q = 50, n=0, tam=0, tamAbc, resto, aux;
    char abc[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char entrada[q], saida[q];
    printf("Algoritmo de codificação de César\n");
    printf("Entre com a chave para codificação N: ");
    scanf("%d", &n);
    printf("Agora entre com a sequência à ser codificada: \nSequencia: ");
    scanf("%s", entrada);
    tam = strlen(entrada);
    tamAbc = (strlen(abc)-4);
    resto = n % tamAbc;
    for(int i= 0 ; i<tam; i++){
        saida[i] = entrada[i];
        for(int j = 0; j<(tamAbc); j++){
            if(entrada[i]==abc[j]){
                if(tamAbc>j+n){
                    saida[i] = abc[j+n];
                }else if(resto<tamAbc-j){
                    saida[i] = abc[j+resto];
                }else{
                    aux = resto-(tamAbc-j);
                    saida[i] = abc[aux];
                }
            }else{
            }
        }
    }
    printf("Sequencia codificada: ");
    for(int i=0; i<tam ; i++){
        printf("%c", saida[i]);
    }
    printf("\n");
    return 0;
}