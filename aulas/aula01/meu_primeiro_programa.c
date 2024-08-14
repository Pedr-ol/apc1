/*
Construa um programa que calcule a soma de dois numeros inteiros.
  */
#include <stdio.h>// incluir as bibliotecas
#include <math.h>

int main() { //funcao principal
  int a, b, soma;
  printf("Digite o primeiro numero: ");
  scanf("%d", &a);
  printf("Digite o segundo numero: ");
  scanf("%d", &b);
  soma = a + b;
  printf("A soma de %d e %d é %d\n", a, b, soma);
  printf("Seno de 0 é %f\n", sin(0));
  return 0;
}