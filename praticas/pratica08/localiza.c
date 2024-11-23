#include <stdio.h>

int main (){
    
    int numeros [10];
    numeros[0]=1;
    numeros[1]=2;
    numeros[2]=3;
    numeros[3]=4;
    numeros[4]=5;
    numeros[5]=6;
    numeros[6]=7;
    numeros[7]=8;
    numeros[8]=9;
    numeros[9]=10;

    for(int i=0; i<10; i++) {
        printf("Qual a posicao? ");
        scanf("%i", &numeros[i]);
    }
    int numero;
    printf("Digite o numero: ");
    scanf("%i", &numero);
    int achou = -1;
    int i=0;
    for(int i=0; i<10; i++) {
        if (numeros[i] == numero) {
        achou = i;
        }
    }

    if (achou < 0) {
        printf("O numero nao foi encontrado!");
    } else {
        printf("O numero foi encontrado na posicao %i", numeros[i]);
    }

    return 0;
}