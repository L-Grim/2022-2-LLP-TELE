#include <stdio.h>

int main() {
	int var = 43; // Declarando a variavel
    
    int *p; // p é um ponteiro para uma variavel inteira
    
    p = &var;
    
    //Referncia: mostrar o endereço da variavel var na     //memória
    printf("O valor de P(Referencia)\n");
    printf("%p\n\n", p);
    
    //Deferencia: mostrar o valor da variavel var 
    //indiretamente usando o ponteiro P
    printf("O valor de var acessado usando um ponteiro\n");
    printf("%d\n", *p);
    
    return 0;
}
