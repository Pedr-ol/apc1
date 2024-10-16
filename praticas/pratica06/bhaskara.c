#include <stdio.h>
#include <math.h>

int main() {

//Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).
int a = 0;
int b = 0;
int c = 0;
printf("Digite a: ");
scanf("%i", &a);
printf("Digite b: ");
scanf("%i", &b);
printf("Digite c: ");
scanf("%i", &c);
int delta = (b * b - 4 * a * c);
if (delta < 0) {
    printf("Essa equacao nao tem raizes!\n");
} else {
    float x1 = (-b + sqrt(delta)) / 2*a;
    float x2 = (-b - sqrt(delta)) / 2*a;
    printf("X1 eh igual a %.2f, X2 e igual a %.2f\n", x1, x2);
}





    return 0;
}