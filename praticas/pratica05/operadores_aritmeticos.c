#include <stdio.h>

int main(){
  
  int numero1 = 0;
  int numero2 = 0;
  
  float numero3 = 0;
  printf("Digite um número inteiro: ");
  scanf("%i", &numero1);
  printf("Digite outro número inteiro: ");
  scanf("%i", &numero2);
  
  printf("Digite um número flutuante: ");
  scanf("%f", &numero3);
  
  int soma = numero1 + numero2;
  printf("A soma %i com %i é igual a %i\n", numero1, numero2, soma);
  
  int subtracao = numero1 - numero2;
  printf("A subtração de %i com %i é igual a %i\n", numero1, numero2, subtracao);
  
  int multiplicacao = numero1 * numero2;
  printf("A multiplicação de %i com %i é igual a %i\n", numero1, numero2, multiplicacao);
  
  int divisao = numero1 / numero2;
  printf("A divisão de %i com %i é igual a %i\n", numero1, numero2, divisao);
  
  int resto_divisao = numero1 % numero2;
  printf("O resto da divisão de %i com %i é igual a %i\n", numero1, numero2, resto_divisao);
  
  float divisao_fracionada = numero1 / numero3;
  printf("A divisão fracionaria de %i com %f é igual a %f\n", numero1, numero3, divisao_fracionada);
  


  return 0;
}