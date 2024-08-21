#include <stdio.h>

int main() {
    printf("%s\n", "==================================");
    printf("%s\n", "           NOTA LEGAL         ");
    printf("%s\n", "===================================");
    printf("%-13s %7s %13s\n", "Produto", "Qtd", "Valor Unit");
    printf("%-13s %7.3i\t %10.2f\n", "Camiseta", 002, 39.99);
    printf("%-13s %8.3i\t %10.2f\n", "Calça", 001, 89.90);
    printf("%-13s %7.3i\t %10.2f\n", "Meia Social", 003, 19.99);
    printf("%s\n", "===================================");
    printf("%s %23.2f\n", "Total:", 229.85);
  
  return 0;
}