#include <stdio.h>

int main() {
int matricula = '\0';//caractere nulo
float a1 = 0.0f;
float a2 = 0.0f;
float media = 0.0f;
  printf("Digite a matricula: ");
    scanf("%i", &matricula);
  printf("Digite a 1° nota: ");
    scanf("%f", &a1);
  printf("Digite a 2° nota: ");
    scanf("%f", &a2);
  media = (a1 + a2) / 2;
  printf("Sua média foi: %f\n", media);
  printf("%s\t\t%s\t%s\t%s\t\n", "Matricula", "Nota 1", "Nota 2", "Média");
  printf("%s\t\t%.1f\t\t%.1f\t\t%.1f\t\n", "24121301" , a1, a2, media);
  
  
  return 0;
}