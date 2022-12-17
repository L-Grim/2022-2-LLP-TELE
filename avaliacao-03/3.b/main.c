//Resolução 1.b.:
#include <stdio.h>
int inversor(char frase[]){
    int tam = 0;
    int i;
    for(i = 17; frase[i]; i--) {
        printf("%d %c\n", i, frase [i]);
    }
    tam = i;
    return tam;
}
int main() {
    int size;

    char s1 []= "Yuri Daniel Uchoa Fernandes";
    size = inversor(s1);
    size = sizeof(s1);
    printf("O Tamanho da String=%d\n", size);
    return 0;
}
