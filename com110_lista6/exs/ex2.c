#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    float porc=0;
    int qtdAlunos = 10, nota = 0;
    int qtdQuestoes = 8;
    char gab[qtdQuestoes], res[qtdQuestoes];
    int alunosNota[qtdAlunos][2];
    printf("Insira o gabarito da prova (A a B): \n");
    for (int i = 0; i < qtdQuestoes; i++)
    {
        printf("Questao %d: ", i + 1);
        scanf("%s", &gab[i]);
    }
    printf("\e[H\e[2J");
    printf("Gabarito Inserido com sucesso!\nInsira as notas os alunos\n");
    printf("=======Gabarito=======\n");
    for (int i = 0; i < qtdQuestoes; i++)
    {
        printf("Questao %d: %c\n", i + 1, gab[i]);
    }
    printf("======================\n");
    for (int i = 0; i < qtdAlunos; i++)
    {
        printf("Entre com o numero do aluno: ");
        scanf("%d", &alunosNota[i][0]);
        printf("Respostas:\n");
        for (int j = 0; j < (qtdQuestoes); j++)
        {
            printf("Questao %d: ", j + 1);
            scanf("%s", &res[j]);
            if(res[j] == gab[j]){
                nota++;
            }
        }
        alunosNota[i][1] = nota;
        nota=0;
        printf("\n");
    }
    printf("Resultado geral!\n");
    for(int i = 0; i<qtdAlunos; i++){
        printf("Aluno: %d - nota: %d\n", alunosNota[i][0], alunosNota[i][1]);
        if(alunosNota[i][1]>=6){
            porc++;
        }
    }
    porc = (porc/qtdAlunos)*100;
    printf("Porcentagem de aprovados: %.0f%%\n",porc);
    return 0;
}