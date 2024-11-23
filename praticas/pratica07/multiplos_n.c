#include <stdio.h>

int main (){

    int numero = 0;
    int i=1;
    printf("Digite o numero: ");
    scanf("%i", &numero);

    for (int i=1; i<101; i++) {
        if (i % numero == 0) {
            printf("%i\n", i);
        }

    }

    return 0;
}