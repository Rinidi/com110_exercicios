#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
//#include <conio.h>

int main(){
    FILE *pont;
    char nome[100], *result;
    int placar, op = 0; 
    
    do{
        printf("--------Menu--------\n");
        printf("1 - Gravar\n");
        printf("Rand: %d\n", rand() % 2);
        printf("2 - Exibir\n");
        printf("3 - Sair\n");
        printf("--------------------\n");
        printf("Escolha: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            pont = fopen("placar.txt", "a");
            if(pont == NULL){
                printf("Falha ao abrir o arquivo!\n");
                return 0;
            }
            printf("Entre com o nome: ");
            scanf("%s",nome);
            printf("Entre com o placar: ");
            scanf("%d", &placar);
            fprintf(pont, "%s: ", nome);
            fprintf(pont, "%d\n", placar);
            fclose(pont);
            break;
        case 2:
            printf("\n-------Placar-------\n");
            pont = fopen("placar.txt", "r");
            while(fscanf(pont, "%s %d", nome, &placar)!=EOF){
                printf("%s %d\n", nome, placar);
            }
            break;
            case 3:
        
            break;
        default:
            printf("Opcao invalida");
            break;
        }
    }while(op!=3);
    printf("\n");
    
    return 0;
}
