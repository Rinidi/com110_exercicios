#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    float n;
    float pot;
    printf("Entre com um número: ");
    scanf("%f", &n);
    printf("Potencias de 3:\n");
    for(int i =0; i<=n;i++){
        pot = pow(3,i);
        printf("3^%d = %.1f\n",i,pot);
    }
    return 0;
}

