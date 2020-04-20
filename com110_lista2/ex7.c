#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n[2];
    scanf("%f", &n[0]);
    scanf("%f", &n[1]);

    int i ,j, aux;
    for(i = 1; i < 2; i++){
        j=i;
        while((j!=0) && (n[j] < n[j-1])){
            aux = n[j];
            n[j] = n[j-1];
            n[j-1] = aux;
            j--;
        }
    }
    if(n[0] == n[1]){
        printf("Os números são iguais\n%.1f,%.1f\n", n[0],n[1]);
    }else{
        printf("%.1f,%.1f\n", n[0],n[1]);
    }
    return 0;
}


