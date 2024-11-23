#include <stdio.h>

int main (){

    int numero;
    int maior;
    int menor;
    printf("Digite o numero: ");
    scanf("%i", &numero);
    maior = numero;
    menor = numero;

    while(numero != 0) {
if (numero > maior) {
   maior = numero;
} else {
    if (numero < menor) {
   menor = numero;
}

}
    printf("Digite o numero: ");
    scanf("%i", &numero);
}
    printf("%i eh o numero maior\n%i eh o numero menor", maior, menor);
    return 0;
}