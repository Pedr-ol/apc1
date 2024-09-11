#include <stdio.h>

int main() {
  int numero1= 0;
  int numero2= 0;
  scanf("%i", &numero1);
  scanf("%i", &numero2);
  
  printf("%i é igual %i? %i\n", numero1, numero2, numero1 == numero2);
  printf("%i é diferente %i? %i\n", numero1, numero2, numero1 != numero2);
  printf("%i é menor que %i? %i\n", numero1, numero2, numero1 < numero2);
  printf("%i é menor ou igual a %i? %i\n", numero1, numero2, numero1 <= numero2);
  printf("%i é maior que %i? %i\n", numero1, numero2, numero1 > numero2);
  printf("%i é maior ou igual a %i? %i\n", numero1, numero2, numero1 >= numero2);
  return 0;
}