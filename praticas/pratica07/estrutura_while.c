#include <stdio.h>

int main (){
    
    int nota = 0;
    printf("Entre com a nota de 1 a 10: ");
    scanf("%i", &nota);
    while(nota < 1 || nota > 10) {
        printf("Nota invalida. Tente novamente!\n");
        printf("Digite a nota: ");
        scanf("%i", &nota);

        


}




    return 0;
}