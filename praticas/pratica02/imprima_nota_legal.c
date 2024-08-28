#include <stdio.h>

int main() {
    printf("%s\n", "==================================");
    printf("%s\n", "           NOTA LEGAL         ");
    printf("%s\n", "===================================");
    printf("%-15s %9s %13s\n", "Produto", "Qtd", "Valor Unit");
    printf("%-15s %9.3i %10.2f\n", "Camiseta", 002, 39.99);
    printf("%-15s %10.3i %10.2f\n", "Calça", 001, 89.90);
    printf("%-15s %9.3i %10.2f\n", "Meia Social", 003, 19.99);
    printf("%s\n", "===================================");
    printf("%s %29.2f\n", "Total:", 229.85);
  
  return 0;
}