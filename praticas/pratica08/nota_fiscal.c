#include <stdio.h>

int main (){

    float total = 0.0f;
    float nota_fiscal [5] [3];
    
    for(int i=0; i<5; i++) {

        printf("Digite: ");
        scanf("%f", &nota_fiscal[i][0]);
        printf("Digite: ");
        scanf("%f", &nota_fiscal[i][1]);

        nota_fiscal[i][2] = nota_fiscal[i][0] * nota_fiscal[i][1];
        total = total + nota_fiscal[i][2];
    }
    for(int i=0; i<5; i++) {
        for(int j=0; j<3; j++) {
            printf("%f\t", nota_fiscal [i][j]);
        }
        printf("\n");

    }

    printf("Valor total eh %f", total);
    
    return 0;
}