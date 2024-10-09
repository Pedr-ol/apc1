#include <stdio.h>

int main() {
    int ano = 0;
    printf("Digite o ano: ");
    scanf("%i", &ano);
    int numero_multiplo_de_4 = ano % 4 == 0;
    int numero_multiplo_de_100 = ano % 100 == 0;
    int numero_multiplo_de_400 = ano % 400 == 0;
    if ((numero_multiplo_de_4 && !numero_multiplo_de_100) || numero_multiplo_de_400) {
        printf("O ano eh bissexto");
    } else {
        printf("O ano nao eh bissexto");
    }

    return 0;
}