#include <stdio.h>

int main(void) {
  int chute;
  int a, b;
  printf("Qual é o seu chute? ");
  scanf("%d", &chute);
  
  printf("Você chutou o número %d!\n \n", chute);

   printf("Digite dois numeros separados por espaço? ");
  scanf("%d %d", &a, &b);

  printf("a=%d\n", a);
  printf("a=%d\n", b);
  return 0;
}
