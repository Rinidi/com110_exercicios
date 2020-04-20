#include<stdio.h>
#include<stdlib.h>

int main(){
    int n=0;
    printf("Monte seu triangulo retangulo\n");
    printf("Entre com um número/(N >=2),N: ");
    scanf("%d", &n);
    for(int i=0; i<n;i++){
        for(int j=0; j<=i;j++){
            printf(" #");
        }
        printf("\n");
    }
    return 0;
}

