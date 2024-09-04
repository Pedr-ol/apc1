#include <stdio.h>

int main() {
char tecla;
char nome [31];
  printf("Digite uma tecla: ");
  scanf("%c", &tecla);
  printf("A tecla digitada foi: %c\n", tecla);
  printf("Digite seu nome: ");
  scanf("%s", &nome);
  printf("Seu nome é: %s\n", nome);
  scanf("%[^]s", nome);
  return 0;
}