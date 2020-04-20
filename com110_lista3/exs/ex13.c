#include<stdio.h>
#include<stdlib.h>

int main(){
    int n1, n2;
    printf("Entre com o primeiro número: ");
    scanf("%d", &n1);
    printf("Entre com o segundo número: ");
    scanf("%d", &n2);
    printf("Entre esses números existe a seguinte sequencia:\n");
    if(n1>n2){
        for(int i=n2;i<=n1;i++){
            printf(" %d,",i);
        }
    }else{
        for(int i=n1;i<=n2;i++){
            printf(" %d,",i);
        }
    }
    printf("\n");
    return 0;
}

