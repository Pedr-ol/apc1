#include <stdio.h>

int main() {
  int numero = 0;
  scanf("%i", &numero);
  int milhares = (numero/1000);
  int centenas = (numero/10) % 10;
  int dezenas = (numero/10) % 10;
  int unidades = (numero/10) % 10;
  printf("O número %i é decomposto em %i milhar(es), %i centena(s), %i dezena(s) e %i unidade(s)\n", numero, milhares, centenas, dezenas, unidades);
  return 0;
}