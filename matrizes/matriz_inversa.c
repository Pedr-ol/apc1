#include <stdio.h>
#include <stdlib.h>

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void preencherMatriz(int m, int n, float matriz[m][n]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Digite o valor para matriz[%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
}

float determinante2x2(float m[2][2]) {
    return m[0][0] * m[1][1] - m[0][1] * m[1][0];
}

void inversa2x2(float m[2][2], float inv[2][2]) {
    float det = determinante2x2(m);
    if (det == 0) return;

    inv[0][0] =  m[1][1] / det;
    inv[0][1] = -m[0][1] / det;
    inv[1][0] = -m[1][0] / det;
    inv[1][1] =  m[0][0] / det;
}

float determinante3x3(float m[3][3]) {
    return
        m[0][0]*(m[1][1]*m[2][2] - m[1][2]*m[2][1]) -m[0][1]*(m[1][0]*m[2][2] - m[1][2]*m[2][0]) + m[0][2]*(m[1][0]*m[2][1] - m[1][1]*m[2][0]);
}

void cofactor3x3(float m[3][3], float cof[3][3]) {
    cof[0][0] =  (m[1][1]*m[2][2] - m[1][2]*m[2][1]);
    cof[0][1] = -(m[1][0]*m[2][2] - m[1][2]*m[2][0]);
    cof[0][2] =  (m[1][0]*m[2][1] - m[1][1]*m[2][0]);
    cof[1][0] = -(m[0][1]*m[2][2] - m[0][2]*m[2][1]);
    cof[1][1] =  (m[0][0]*m[2][2] - m[0][2]*m[2][0]);
    cof[1][2] = -(m[0][0]*m[2][1] - m[0][1]*m[2][0]);
    cof[2][0] =  (m[0][1]*m[1][2] - m[0][2]*m[1][1]);
    cof[2][1] = -(m[0][0]*m[1][2] - m[0][2]*m[1][0]);
    cof[2][2] =  (m[0][0]*m[1][1] - m[0][1]*m[1][0]);
}

void transposta(float m[3][3], float mt[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            mt[i][j] = m[j][i];
}

void inversa3x3(float m[3][3], float inv[3][3]) {
    float det = determinante3x3(m);
    if (det == 0) return;

    float cof[3][3], adj[3][3];
    cofactor3x3(m, cof);
    transposta(cof, adj);

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            inv[i][j] = adj[i][j] / det;
}

void imprimirMatriz(int m, int n, float matriz[m][n]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%7.3f ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int opcao;

    do {
        system("clear || cls");
        printf("====================\n");
        printf("MENU PRINCIPAL\n");
        printf("====================\n");
        printf("1 - Matriz 2x2\n");
        printf("2 - Matriz 3x3\n");
        printf("0 - Sair\n");
        printf("Entre com a opcao => ");
        scanf("%d", &opcao);
        limpar_buffer();

        switch (opcao) {
            case 1: {
                float matriz[2][2], inversa[2][2];
                preencherMatriz(2, 2, matriz);
                float det = determinante2x2(matriz);

                printf("\nMatriz:\n");
                imprimirMatriz(2, 2, matriz);
                printf("Determinante: %.3f\n", det);

                if (det == 0) {
                    printf("A matriz não é inversível.\n");
                } else {
                    inversa2x2(matriz, inversa);
                    printf("Matriz inversa:\n");
                    imprimirMatriz(2, 2, inversa);
                }

                printf("Pressione Enter para continuar...\n");
                getchar();
                break;
            }

            case 2: {
                float matriz[3][3], inversa[3][3];
                preencherMatriz(3, 3, matriz);
                float det = determinante3x3(matriz);

                printf("\nMatriz:\n");
                imprimirMatriz(3, 3, matriz);
                printf("Determinante: %.3f\n", det);

                if (det == 0) {
                    printf("A matriz não é inversível.\n");
                } else {
                    inversa3x3(matriz, inversa);
                    printf("Matriz inversa:\n");
                    imprimirMatriz(3, 3, inversa);
                }

                printf("Pressione Enter para continuar...\n");
                getchar();
                break;
            }

            case 0:{
                printf("Até logo!\n");
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
                printf("Pressione Enter para continuar...\n");
                getchar();
                break;
            }
        } while (opcao != 0);
    
    return 0;
}
}