#include <stdio.h>

int main() {
  float nota1 = 0;
  float nota2 = 0;
  scanf("%f", &nota1);
  scanf("%f", &nota2);
  float media = nota1 * 0.4 + nota2 * 0.6;
  printf("A média é de %f com %f é igual a %f\n", nota1, nota2, media);
  

  return 0;
}