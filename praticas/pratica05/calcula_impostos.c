#include <stdio.h>

int main() {
  #define ICMS 0.17
  #define CONFIS 0.076
  #define PIS_PASEP 0.0165
  
  float preco_inicial = 0;
  scanf("%f", &preco_inicial);
  
  float valor_icms = (preco_inicial * ICMS);
  float valor_confis = preco_inicial * CONFIS;
  float valor_pis_pasep = preco_inicial * PIS_PASEP;
  float preco_final = (preco_inicial + valor_pis_pasep + valor_confis + valor_icms);

  printf("Preço Inicial..............: %.2f\n", preco_inicial);
  printf("Valor ICMS (17%)...........: %.2f\n", valor_icms);
  printf("Valor COFINS (7,6%)........: %.2f\n", valor_confis);
  printf("Valor PIS/PASEP (1,65%)....: %.2f\n", valor_pis_pasep);
  printf("Preço Final................: %.2f\n", preco_final);
  return 0;
}