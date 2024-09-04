#include <stdio.h>

int main() {
  int numero1 = 0;
  int x = 0;
  int y = 0;
  printf("Digite um número inteiro: ");
  scanf("%i", &numero1);
  printf("Você digitou: %i\n", numero1);
  printf("Digite as coordenadas x e y: ");
  scanf("%i %i", &x, &y);
  printf("Você digitou: %i %i\n", x, y);


  return 0;
}
