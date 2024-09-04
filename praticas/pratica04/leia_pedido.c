#include <stdio.h>

int main() {
char produto [21];
int quantidade = 0;
float valor = 0.0f;
  printf("Digite o nome do produto: ");
  scanf("%[^\n]c", produto);
  printf("Digite a quantidade: ");
  scanf("%i", &quantidade);
  printf("Digite o valor: ");
  scanf("%f", &valor);
  printf("%s\n", "=============================");
  printf("%s\n", "         P E D I D O");
  printf("%s\n", "=============================");
  printf("%s\t\t%s\t%s\n", "Produto", "Qtd", "Valor Unit");
  printf("%s\t%03i\t%10.2f\n", produto, quantidade, valor);
  printf("%s\n", "=============================");
  
  
  return 0;
}