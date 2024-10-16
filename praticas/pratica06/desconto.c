#include <stdio.h>

int main() {
    float valor_bruto = 0.0f;
    float valor_desconto = 0.0f;
    printf ("Digite o valor bruto: ");
    scanf("%f", &valor_bruto);
    if (valor_bruto <= 100.00f) {
        float valor_desconto = valor_bruto * 0.01f;
        printf("O valor bruto eh de %.2f e o desconto eh de %.2f\n", valor_bruto, valor_desconto);
    } else if (100 < valor_bruto <= 500.00f) {
        float valor_desconto = valor_bruto * 0.05f;
        printf("O valor bruto eh de %.2f e o desconto eh de %.2f\n", valor_bruto, valor_desconto);
    } else if (valor_bruto <= 100.00f) { 
        float valor_desconto = valor_bruto * 0.1f;
        printf("O valor bruto eh de %.2f e o desconto eh de %.2f\n", valor_bruto, valor_desconto);
    }

    
    return 0;
}