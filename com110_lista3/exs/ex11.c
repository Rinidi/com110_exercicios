#include<stdio.h>
#include<stdlib.h>

int main(){
    int diaNas, mesNas, anoNas, dia, mes, ano;
    int idD, idM, idA;
    printf("Preencha os seguites dados sobre seu nascimento.\nDia: ");
    scanf("%d", &diaNas);
    printf("Mes: ");
    scanf("%d", &mesNas);
    printf("Ano: ");
    scanf("%d", &anoNas);
    printf("Entre com a data atual.\nDia: ");
    scanf("%d", &dia);
    printf("Mes: ");
    scanf("%d", &mes);
    printf("Ano: ");
    scanf("%d", &ano);
    idA = ano - anoNas;
    if(mesNas>mes){
        idM = 12 - (mesNas-mes);
        idD = 365 - ((idM*30)+6);
    }else{
        idM = mes-mesNas;
        idD = (idM-2)*30+(dia-diaNas);
    }
    printf("Você tem %d anos %d meses e %d dias\n", idA, idM, idD);
    return 0;
}
