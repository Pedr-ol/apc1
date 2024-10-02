#include <stdio.h>

int main () {
    int numero;

    printf("Entre com um numero: ");
    int deu_certo = scanf("%i", &numero);

    int eh_divisivel_por_2 = numero % 2 == 0;
    // comando if completo
    if (eh_divisivel_por_2) {
        printf("%i eh um numero par!\n", numero);
    } else {
        printf("%i eh um numero impar!\n", numero);
    }

    int idade = 0;
    printf("Entre com sua idade: ");
    deu_certo = scanf("%i", &idade);

    // comando if aninhado

    if(idade <16) {
        printf("Você ainda pode voltar!\n");
    } else {
        if (idade >= 18 && idade <=70) {
            printf("Voce eh obrigado a fazer o L!\n");
        } else {
            printf("Voce nao eh obrigado a fazer o L!\n");
        }
    }

    float media = 0.0f;
    printf("Entre com sua media final: ");
    deu_certo = scanf("%f", &media);

    // if encadeado

    if(media >=9.0f && media <= 10.0f) {
        printf("Sua media eh SS\n");
    } else if (media >=7.0f && media <=8.9f) {
        printf("Sua media eh MS\n"); 
    } else if (media>=5.0f && media <= 6.9f) {
        printf("Sua media eh MM\n");
    } else if (media >=3.0f && media <= 4.9f) {
        printf("Sua media eh MI\n");
    } else if (media >= 0.1f && media <= 2.9f) {
        printf("Sua mencao eh II\n");
    } else {
        printf("Sua mencao eh SR\n");
    }

    return 0;
}