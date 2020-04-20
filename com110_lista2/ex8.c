#include <stdio.h>
#include <stdlib.h>

int main(){
    float n[3];
    scanf("%f", &n[0]);
    scanf("%f", &n[1]);
    scanf("%f", &n[2]);

    int i, j, aux;
    for (i = 1; i < 3; i++){
        j = i;
        while ((j != 0) && (n[j] < n[j - 1])){
            aux = n[j];
            n[j] = n[j - 1];
            n[j - 1] = aux;
            j--;
        }
    }
    if (n[0] == n[1] && n[0] == n[2]){
        printf("Os numeros são iguais\n");
    }
    for (int i = 0; i < 3; i++){
        printf("%.1f\n", n[i]);
    }
    return 0;
}
