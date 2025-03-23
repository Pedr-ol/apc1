#include <stdio.h>
#include <math.h>
#include <stdlib.h>



void limpar_buffer() {//Limpar buffer 
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    int opcao;
    float resultado;

    do {
        system("clear || cls"); //Limpa a tela 

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

                for (int i = 0; i < 4; i++) {//Usei para guardar as 4 variaveis
                    scanf("%f", &matriz[i]);
                }
                limpar_buffer();

                printf("%f\t %f\n", matriz[0], matriz[1]);
                printf("%f\t %f\n", matriz[2], matriz[3]);

                resultado = (matriz[0] * matriz[3]) - (matriz[1] * matriz[2]);//Formula para calcular a determinante
                printf("Resultado da Matriz 2x2: %.2f\n\n", resultado);//Mostra o resultado da determinante

                printf("Pressione Enter para continuar...\n");
                getchar();
                break;
            }

            case 2: {
                float matriz[9];
                printf("Digite os numeros da matriz 3x3:\n");

                for (int i = 0; i < 9; i++) {//Guardar as 9 variaveis
                    scanf("%f", &matriz[i]);
                }
                limpar_buffer();

                printf("%f\t %f\t %f\n", matriz[0], matriz[1], matriz[2]);
                printf("%f\t %f\t %f\n", matriz[3], matriz[4], matriz[5]);// Mostra a matriz que vc digitou
                printf("%f\t %f\t %f\n", matriz[6], matriz[7], matriz[8]);

                resultado = (matriz[0] * matriz[4] * matriz[8]) +
                            (matriz[1] * matriz[5] * matriz[6]) +
                            (matriz[2] * matriz[3] * matriz[7]) -
                            (matriz[2] * matriz[4] * matriz[6]) -//Formula para calcular a determinante da matriz 3x3
                            (matriz[0] * matriz[5] * matriz[7]) -
                            (matriz[1] * matriz[3] * matriz[8]);

                printf("Resultado da Matriz 3x3: %.3f\n\n", resultado);//Mostra o resultado da determinante

                printf("Pressione Enter para continuar...\n");
                getchar();
                break;
            }

            case 3: {
                printf("Opção de matriz 4x4 ainda não implementada.\n");
                break;
            printf("Pressione Enter para continuar...\n");
            getchar();
            }
            case 0: {
                printf("Até logo!\n");//Finaliza o programa
                break;
            }

            default: {
                printf("Opção inválida! Tente novamente.\n");//Caso digite algo errado
                printf("Pressione Enter para continuar...\n");
                getchar();
                break;
            }
        }
    } while (opcao != 0);

    return 0;
 }

