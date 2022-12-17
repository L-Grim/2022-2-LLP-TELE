// Cria um programa que receba dados via teclado e grave em um arquivo.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char Texto[30];
    printf("Escreva uma palavra:\n\n");
    char msg[30];
    scanf("%s", Texto);
    strcat(Texto," \n");
    FILE *fp;
    fp = fopen("avaliacao5.txt", "at+");

    printf ("Arquivo criado com sucesso!\n");


    fputs(Texto, fp);
    int fechou;
    fechou = fclose (fp);
    if(fechou == 0){
        puts("Arquivo fechado com sucesso!\n");
    } else {
        puts("Erro ao fechar arquivo!\n");
    }

    return 0;
}
