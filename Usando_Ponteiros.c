#include <stdio.h>

int main() {
	float dias[7] = {32.12, 33.00, 31.25, 34.21, 30.54, 27.45, 29.21};
    
    float *p; // Ponteiro para a variavel float
    
    p = &dias[0]; // Armazena em p o primeiro endereco do array
    
    printf("O tamanho do tipo float eh = %d\n", sizeof(float));
    
    printf("Acessando os valores do Array usando dias[i]\n");
    for (int i = 0; i < 7; i++) {
    	// Imprime o conteudo de array usando o nome do array e 		//o indice correspondente.
    	printf("indice %d = ", i);
        printf("%5.2f\n", dias[i]);
    }
    
    printf("Acessando os valores dos elementos do Array\n");
    for (int i = 0; i < 7; i++) {
    	// Imprime o conteudo de cada elemento do array 				// identificados pelos seus indices correspondentes.
    	printf("indice %d = ", i);
        printf("%p\n", (p + i));
    }
    
    printf("Acessando os valores do Array usando ponteiro (Endereços)\n");
    for (int i = 0; i < 7; i++) {
    	// Imprime o conteudo dp array usando o deferenciamento
    	// da expressão p + i Essa expressão apresenta i * 				// sezeof(float) ao valor armazenado em p.
    	printf("indice %d = ", i);
        printf("%5.2f\n", *(p + i));
    }
    return 0;
}
