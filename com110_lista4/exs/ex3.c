#include <stdio.h>
#include <stdlib.h>
int main(){
    int op;
    do{
        printf("###############MENU###############\n");
        printf("\t>1)Dizer olá mundo!\n");
        printf("\t>2)Dizer Hello word!\n");
        printf("\t>3)Dizer bonjour le monde!\n");
        printf("##################################\n");
        printf("Selecione uma opção: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("\n\n\tOlá Mundo!!\n\n\n");
            break;
        case 2:
            printf("\n\n\tHello World!!\n\n\n");
            break;
        case 3:
            printf("\n\n\tbonjour le monde!!\n\n\n");
            break;
        default:
        printf("Opção inválida!\n");
            break;
        }
    } while (op != 1 && op != 2 && op != 3);
    printf("Obrigado!\n");
    return 0;
}

