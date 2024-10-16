#include <stdio.h>

int main() {


    char operacao = 0;
    printf("Digite a operacao: ");
    scanf ("%c", &operacao);
    float numero1 = 0.0f;
    float numero2 = 0.0f;
    printf("Digite o primeiro numero: ");
    scanf ("%f", &numero1);
    printf("Digite o segundo numero: ");
    scanf ("%f", &numero2);
    float soma = numero1 + numero2;
    float subs = numero1 - numero2;
    float mult = numero1 * numero2;
    float divi = numero1 / numero2;
    

    if (operacao == '+'){
        printf("A soma deu %.1f\n", soma);
    } else if (operacao == '-') {
        printf("A subtracao deu %.1f\n", subs);
    } else if (operacao == '*') {
        printf("A multiplicacao deu %.1f\n", mult);
    } else if (operacao == '/') {
        printf("A divisao deu %.1f\n", divi);
    } else {
        printf("Operacao invalida\n");
    }


    return 0;
}