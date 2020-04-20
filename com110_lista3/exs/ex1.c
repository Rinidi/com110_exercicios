#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int n = 0;
    int pot = 0;
    printf("Entre com um valor: ");
    scanf("%d", &n);
    printf("Potências de %d\n", n);
    for(int i = 0 ; i<=10 ; i++){
        pot = pow(n,i);
        printf("%d^%d = %d\n", n,i,pot);
    }
    return 0;
}
