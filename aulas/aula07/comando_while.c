#include <stdio.h>

int main (){
    int numero = 0;

    printf("Entre com um numero de 1 a 10: ");
    scanf("%i", &numero);
    
//FUNÇAO 'WHILE'
    while (numero <1 || numero >10){
        while(getchar() != '\n');  //LIMPAR O BUFFER DO TECLADO
        printf("Numero invalido. Tente novamente\n\n");
        printf("Entre com um numero de 1 a 10: ");
        scanf("%i", &numero);
        
    }

//UMA REPETIÇÃO PARECIDA COM O 'FOR'
    int i =0;
    while (i < numero){
        printf("%i", i);
        i++;
    }








    return 0;
}