#include <stdio.h>

int main (){

    int numero = 0;
    int fatorial = 1;
    
    printf("Digite o numero: ");
    scanf("%i", &numero);
    
    for(int i = numero; i > 0; i--) {
        fatorial = (fatorial * i);
}
    printf("O numero: %i\nO fatorial: %i", numero, fatorial);
    return 0;
}