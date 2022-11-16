#include <stdio.h>
#include <windows.h>

void mostrar_lista01();
void mostrar_lista02();
void mostrar_lista03();

void mostrar_lista01() {
    char opcao;
    do {
        system("cls");
        printf("Cadastro De Aluno\n");
        printf("-----------------\n");
        printf("1 - Inserir Aluno\n");
        printf("2 - Mostrar Lista\n");
        printf("3 - Fechar Programa\n");
        printf("Entre Com a Opção: ");
        opcao - getchar();
        if (opcao == '1')
            mostrar_lista02();
        else if (opcao == '2')
            mostrar_lista03
    } 
       
}