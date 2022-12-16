#include <stdio.h>

int main(void) {
    //Escreva um programa em C onde é mostrado os valores de inteiros pares e múltiplos de 5.
    int numero;
    printf("Vai começar o programa que mostrará os valores de inteiros pares e múltiplos de 5.\n\n\n");
    printf("Digite um número:\n");
    scanf("%d", &numero);


    int i;
    for (i=1;i<=numero;i++){
        if(i%2==0 & i%5==0){
            printf("O número %d é múltiplo de 2 e 5.\n",i);
        }
    }

    return 0;
}
