#include <stdio.h>
//Entrada
int main() {
  int numero1;
  int numero2;
  float numero3;

  printf ("Entre com o primeiro numero: ");
  int deu_certo = scanf("%i", &numero1);

  printf ("Entre com o segundo numero: ");
  int deu_certo = scanf("%i", &numero2);

  printf ("Entre com o terceiro numero decimal: ");
  int deu_certo = scanf("%f", &numero3);
  //Processamento
  int soma = numero1 + numero2;
  int subtracao = numero1 - numero2;
  int multiplicacao = numero1 * numero2;
  float fracao = numero1 / numero3;
  int divisao = numero1 / numero2;
  int resto_divisao = numero1 % numero2; // "%" não é utilizado para calcular a porcentagem

  //Saida
  printf("%i + %i = %i\n", numero1, numero2, soma);
  printf("%i - %i = %i\n", numero1, numero2, subtracao);
  pritnf("%i * %i = %i\n", numero1, numero2, multiplicacao);
  pritnf("%i / %i = %i\n", numero1, numero2, divisao);
  printf("%i / %f = %f\n", numero1, numero3, fracao);
  pritnf("%i % %i = %i\n", numero1, numero2, resto_divisao);

  //Operadores Lógicos
  int main() {
    // Entrada
    int numero1;
    int numero2;
    float numero3;

    printf("Entre com um numero inteiro: ");
    int deu_certo = scanf("%i", &numero1);

    printf("Entre com outro numero inteiro: ");
    deu_certo = scanf("%i", &numero2);

    printf("Entre com outro numero decimal: ");
    deu_certo = scanf("%f", &numero3);

    // Processamento
    int soma = numero1 + numero2;
    int subtracao = numero1 - numero2;
    int multiplicacao = numero1 * numero2;
    float divisao = numero1 / numero2;
    int resto_divisao = numero1 % numero2;

    // Saida
    printf("%i + %i = %i\n", numero1, numero2, soma);
    printf("%i - %i = %i\n", numero1, numero2, subtracao);
    printf("%i x %i = %i\n", numero1, numero2, multiplicacao);
    printf("%i / %i = %f\n", numero1, numero2, divisao);
    printf("%i % %i = %i\n", numero1, numero2, resto_divisao);




    return 0;
  }	

  #include <stdio.h>

  int main() {
    int p = 0;
    int q = 0;

    // E logico
    int e_logico = p && q;
    printf("%i E %i = %i\n", p, q, e_logico);
    q = 1;
    e_logico = p && q;
    printf("%i E %i = %i\n", p, q, e_logico);
    p = 1;
    q = 0;
    e_logico = p && q;
    printf("%i E %i = %i\n", p, q, e_logico);
    q = 1;
    e_logico = p && q;
    printf("%i E %i = %i\n", p, q, e_logico);

    // OU logico
    p = 0;
    q = 0;
    int ou_logico = p || q;
    printf("%i OU %i = %i\n", p, q, ou_logico);
    q = 1;
    ou_logico = p || q;
    printf("%i OU %i = %i\n", p, q, ou_logico);
    p = 1;
    q = 0;
    ou_logico = p || q;
    printf("%i OU %i = %i\n", p, q, ou_logico);
    q = 1;
    ou_logico = p || q;
    printf("%i OU %i = %i\n", p, q, ou_logico);
    // NAO logico
    int nao_logico = !p;
    printf("NAO %i = %i\n", p, nao_logico);

  
  
  return 0;
}