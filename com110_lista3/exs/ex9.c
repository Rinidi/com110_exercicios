#include<stdio.h>
#include<stdlib.h>

int main(){
    int cod=0, j, i;
    for(i=0;i<7;i++){
        for(j=0; j<23; j++){
            if(cod==0 || cod == 6){
                printf(" #");
            }else if(cod == 3){
                if(j==0 || j==16){
                    printf(" #");
                }else if(j==8){
                    printf("SEJA BEM-VINDO");
                }else{
                    printf("  ");
                }
            }else{
                if(j==0 || j ==22){
                    printf(" #");
                }else{
                    printf("  ");
                }
            }
        }
        printf("\n");
        cod ++;
    }
    return 0;
}

