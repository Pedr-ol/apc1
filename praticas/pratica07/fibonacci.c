#include <stdio.h>

int main (){

    int n=0;
    int proximo = 1;
    int anterior;
    printf("Digite o n: ");
    scanf("%i", &n);

    for(int i=0; i<n; i++) {
        printf("%i, ", proximo);
        int auxiliar = proximo;
        proximo = (anterior + proximo);
        anterior = auxiliar;
}

    return 0;
}