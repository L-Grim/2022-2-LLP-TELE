//Faça um programa que armazene dados na memória (use um array)
//depois grave esses dados em um arquivo.
#include <stdio.h>
#include <stdlib.h>

#define LINHAS 3
#define COLUNAS 3

int main()
{
    FILE *arq;
    int i, j;
    int result;
    char matrix[LINHAS][COLUNAS][14] = { {"nome", "matricula", "media"},
                                         {"Yuri", "85996929657", "10.0"},
                                         {"Taveira","123456", "10"} };
    
    arq = fopen("MediasAlunos.txt", "wt");
    if (arq == NULL) {
        printf("Problemas na CRIACAO do arquivo\n");
        exit(1);
    }
    for(i = 0; i < LINHAS; i++) {
        for(j = 0; j < COLUNAS; j++) {
            fputs(matrix[i][j], arq);
            fputs(" ", arq);
        }
        fputs("\n", arq);
    }
    fclose(arq);
    return 0;
}
