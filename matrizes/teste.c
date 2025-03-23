#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Função para limpar o buffer de entrada
//void limpar_buffer() {
  //  int c;
   // while ((c = getchar()) != '\n' && c != EOF);
//}

int main() {
    int opcao;
    float resultado;

    do {
        system("clear || cls");  // Limpa a tela no Linux ou Windows
        printf("====================\n");  
        printf("MENU PRINCIPAL\n");
        printf("====================\n");  
        printf("1 - Matriz 2x2\n");
        printf("2 - Matriz 3x3\n");
        printf("3 - Matriz 4x4\n");
        printf("0 - Sair\n");
        printf("Entre com a opcao => ");
        scanf("%d", &opcao);
        limpar_buffer();

        switch (opcao) {
            case 1: {
                float matriz[4];
                printf("Digite os numeros da matriz 2x2:\n");

                for (int i = 0; i < 4; i++) {
                    scanf("%f", &matriz[i]);
                }

                printf("%f\t %f\n", matriz[0], matriz[1]);
                printf("%f\t %f\n", matriz[2], matriz[3]);

                resultado = (matriz[0] * matriz[3]) - (matriz[1] * matriz[2]);
                printf("Matriz 2x2: %.2f\n\n", resultado);
            printf("Pressione Enter para continuar...\n");
            getchar();
                
            }

            case 2: {   
                float matriz[9];
                printf("Digite os numeros da matriz 3x3:\n");

                for (int i = 0; i < 9; i++) {
                    scanf("%f", &matriz[i]);
                }

                printf("%f\t %f\t %f\n", matriz[0], matriz[1], matriz[2]);
                printf("%f\t %f\t %f\n", matriz[3], matriz[4], matriz[5]);
                printf("%f\t %f\t %f\n", matriz[6], matriz[7], matriz[8]);

                resultado = (matriz[0] * matriz[4] * matriz[8]) + 
                            (matriz[1] * matriz[5] * matriz[6]) + 
                            (matriz[2] * matriz[3] * matriz[7]) - 
                            (matriz[2] * matriz[4] * matriz[6]) - 
                            (matriz[0] * matriz[5] * matriz[7]) - 
                            (matriz[1] * matriz[3] * matriz[8]);

                printf("Matriz 3x3: %.3f\n\n", resultado);
            printf("Pressione Enter para continuar...\n");
            getchar();
                
            }

            case 3: {
                printf("Opção de matriz 4x4 ainda não implementada.\n");
                break;
            printf("Pressione Enter para continuar...\n");
            getchar();
            }

            case 0: {
                printf("Até logo!\n");
                break;
                
            }

            default: {
                printf("Opção inválida! Tente novamente.\n");
                break;
            }
        }

        printf("Pressione Enter para continuar...\n");
        getchar(); // Aguarda o usuário pressionar Enter antes de continuar
        getchar();
    } while (opcao != 0);

    return 0;
}