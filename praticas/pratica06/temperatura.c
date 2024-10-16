#include <stdio.h>

int main() {

    float temperatura = 0.0f;
    printf("Qual a temperatura: ");
    scanf("%f", &temperatura);
    if (temperatura >= 40.0f){
        printf("Muito quente!\n");
    } else if (40.0f > temperatura && temperatura > 30.0f){
        printf("Quente!\n");
    } else if (30.0f > temperatura && temperatura > 20.0f){
        printf("Agradavel!\n");
    } else if (temperatura <= 20.0f) {
        printf("Frio!\n");
    } 
    return 0;
}