#include <stdio.h>
#include <stdlib.h>

void limpar_buffer() { //Limpar buffer 
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

float determinante3x3(float matriz[9]);
float determinante4x4(float matriz[16]);


float determinante3x3(float matriz[9]) {//Calcula o determinante de uma matriz 3x3
    return (matriz[0] * matriz[4] * matriz[8]) +
           (matriz[1] * matriz[5] * matriz[6]) +
           (matriz[2] * matriz[3] * matriz[7]) -
           (matriz[2] * matriz[4] * matriz[6]) -
           (matriz[0] * matriz[5] * matriz[7]) -
           (matriz[1] * matriz[3] * matriz[8]);
}


float determinante4x4(float matriz[16]) {//Formula para a determinante da 4x4
    float submatriz[9];
    float resultado = 0;
    int sinais[4] = {1, -1, 1, -1};

    for (int i = 0; i < 4; i++) {
        int sub_index = 0;
        for (int j = 1; j < 4; j++) {
            for (int k = 0; k < 4; k++) {
                if (k != i) {
                    submatriz[sub_index++] = matriz[j * 4 + k];
                }
            }
        }
        resultado += sinais[i] * matriz[i] * determinante3x3(submatriz);
    }
    return resultado;
}



int main() {
    int opcao;
    float resultado;

    do {
        system("clear || cls");  // Limpa a tela 

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
                limpar_buffer();

                printf("%f\t %f\n", matriz[0], matriz[1]);
                printf("%f\t %f\n", matriz[2], matriz[3]);

                resultado = (matriz[0] * matriz[3]) - (matriz[1] * matriz[2]);
                printf("Resultado da Matriz 2x2: %.2f\n\n", resultado);

                printf("Pressione Enter para continuar...\n");
                getchar();
                break;
            }

            case 2: {
                float matriz[9];
                printf("Digite os numeros da matriz 3x3:\n");

                for (int i = 0; i < 9; i++) {
                    scanf("%f", &matriz[i]);
                }
                limpar_buffer();

                printf("%f\t %f\t %f\n", matriz[0], matriz[1], matriz[2]);
                printf("%f\t %f\t %f\n", matriz[3], matriz[4], matriz[5]);
                printf("%f\t %f\t %f\n", matriz[6], matriz[7], matriz[8]);

                resultado = (matriz[0] * matriz[4] * matriz[8]) +
                            (matriz[1] * matriz[5] * matriz[6]) +
                            (matriz[2] * matriz[3] * matriz[7]) -
                            (matriz[2] * matriz[4] * matriz[6]) -
                            (matriz[0] * matriz[5] * matriz[7]) -
                            (matriz[1] * matriz[3] * matriz[8]);

                printf("Resultado da Matriz 3x3: %.3f\n\n", resultado);

                printf("Pressione Enter para continuar...\n");
                getchar();
                break;
            }

            case 3: {
                float matriz[16];
                printf("Digite os numeros da matriz 4x4:\n");

                for (int i = 0; i < 16; i++) {//Guardar as 16 variaveis da matriz 4x4
                    scanf("%f", &matriz[i]);
                }
                limpar_buffer();

                printf("Matriz 4x4 digitada: \n");
                for (int i = 0; i < 16; i++) {
                    printf("%f\t", matriz[i]);
                    if ((i + 1) % 4 == 0) printf("\n");
                }

                resultado = determinante4x4(matriz);//Chama a formula do inicio do codigo
                printf("Resultado da Matriz 4x4: %.3f\n\n", resultado);//Mostra o resultado da determinante

                printf("Pressione Enter para continuar...\n");
                getchar();
                break;
            }

            case 0: {
                printf("Até logo!\n");
                break;
            }

            default: {
                printf("Opção inválida! Tente novamente.\n");
                printf("Pressione Enter para continuar...\n");
                getchar();
                break;
            }
        }
    } while (opcao != 0);

    return 0;
}
