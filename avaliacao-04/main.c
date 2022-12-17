#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("Iniciando a execucao...\n");
    int l, c, soma, mat[6][12], somaLinhas[12];

    srand(time(NULL));

    for(l = 0; l < 5; l++){
        for(c = 0; c < 10; c++){
            mat[l][c] = rand()%100;
        }
    }

    for(l = 0; l < 5; l++){
        soma = 0;
        for(c = 0; c < 10; c++){
            soma+=mat[l][c];
        }
        somaLinhas[l]=soma;
    }

    printf("\n\nMatrix:\n");
    for(l = 0; l < 5; l++) {
        for (c = 0; c < 10; c++) {
            printf("%2d", mat[l][c]);
        }
        printf("\n");
    }


    printf("\nSoma das linhas:\n");
    for(l = 0; l < 5; l++){
        printf("Linha %d: %d.\n",l,somaLinhas[l]);
    }

    return 0;
}
