#include <stdio.h>

int main(void) {
  int chute;
  int a, b;
  printf("Qual � o seu chute? ");
  scanf("%d", &chute);
  
  printf("Voc� chutou o n�mero %d!\n \n", chute);

   printf("Digite dois numeros separados por espa�o? ");
  scanf("%d %d", &a, &b);

  printf("a=%d\n", a);
  printf("a=%d\n", b);
  return 0;
}
