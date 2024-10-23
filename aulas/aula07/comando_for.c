#include <stdio.h>

int main() {

int numero = 0;
printf("Entre com um numero de 1 a 10: ");
scanf("%i", &numero);    

// if (numero > 0 && numero < 11) {
    // printf("Tabuada de %i\n", numero);
    // printf("1 X %i = %i\n", numero, 1 * numero);
    // printf("2 X %i = %i\n", numero, 2 * numero);
    // printf("3 X %i = %i\n", numero, 3 * numero);
    // printf("4 X %i = %i\n", numero, 4 * numero);
    // printf("5 X %i = %i\n", numero, 5 * numero);
    // printf("6 X %i = %i\n", numero, 6 * numero);
    // printf("7 X %i = %i\n", numero, 7 * numero);
    // printf("8 X %i = %i\n", numero, 8 * numero);
    // printf("9 X %i = %i\n", numero, 9 * numero);
    // printf("10 X %i = %i\n", numero, 10 * numero);

// } else {
//     printf("Numero inavalido!\n");
// }


//FUNCAO 'FOR'

if (numero > 0 && numero < 11) {
    printf("Tabuada de %i\n", numero);
    printf("Crescente\n");
    for(int i=0; i<10; i++) {
        
        printf("%i x %i = %i\n", i+1, numero, (i+1)*numero);

    }
    printf("Decrescente\n");
    for(int i=10; i>0; i--) {
        
        printf("%i x %i = %i\n", i, numero, 1*numero);
    }
    for(int i = 0; i < 10; i++) {
        for(int j=0; j<10; j++) {
            printf("(%i, %i), ", i, j);
        }
    }
    //REPETIÇAO INFINITA
// for(;;){
//     printf("Ao infinito e alem!");
// }







          
}
    return 0;
}