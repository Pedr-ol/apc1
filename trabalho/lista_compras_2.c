#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    struct compras_t {
        char nome[50];           
        char itens[10][50];      
        float precos[10];             
        int total_itens;         
    } compras;

    compras.total_itens = 0;  
    int opcao = 0;

    void limpar_buffer() {
        while (getchar() != '\n');
    }

    // Entrada do nome do usuário
    printf("Antes de comecarmos, digite seu nome: ");
    fgets(compras.nome, 50, stdin);
    compras.nome[strcspn(compras.nome, "\n")] = '\0';  // Remove a quebra de linha
    printf("Ola, %s!\n", compras.nome);

    do {
        // Limpar a tela (não portátil, mas mantém o código funcional)
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif

        printf("====================\n");  
        printf("MENU PRINCIPAL\n");
        printf("====================\n");  
        printf("1 - Adicionar itens na lista de compras\n");
        printf("2 - Gerar nota fiscal\n");
        printf("0 - Sair\n");
        printf("Entre com a opcao => ");
        scanf("%d", &opcao);
        limpar_buffer();

        switch (opcao) {
            case 1: {
                int num_itens;
                printf("Quantos itens voce deseja adicionar (maximo 10): ");
                scanf("%d", &num_itens);
                limpar_buffer();

                // Verificar se o número de itens é válido
                if (compras.total_itens + num_itens > 10) {
                    printf("Limite de itens atingido! Você pode adicionar até 10 itens no total.\n");
                    break;
                }

                // Adicionar os itens na lista
                for (int i = 0; i < num_itens; i++) {
                    printf("Digite o nome do item %d: ", compras.total_itens + 1);
                   
                    compras.itens[compras.total_itens][strcspn(compras.itens[compras.total_itens], "\n")] = '\0';  // Remove a quebra de linha

                    printf("Digite o preco do item: ");
                    if (scanf("%f", &compras.precos[compras.total_itens]) != 1) {
                        printf("Preço inválido! Tente novamente.\n");
                        limpar_buffer();
                        i--;  // Decrementa i para tentar novamente
                        continue;
                    }
                    limpar_buffer();

                    compras.total_itens++;
                }

                printf("Itens adicionados com sucesso!\n"); 
                break;
            }
            case 2: {
                if (compras.total_itens == 0) {
                    printf("Nenhum item na lista de compras.\n");
                    break;
                }
                printf("=================\n");
                printf("NOTA FISCAL:\n");
                printf("=================\n");
                printf("Item\t\t\tPreco\n");
                printf("-------------------------------------------------\n");

                float total_geral = 0.0;
                for (int i = 0; i < compras.total_itens; i++) {
                    total_geral += compras.precos[i];
                    printf("%-20s\t%.2f\n", compras.itens[i], compras.precos[i]);
                }

                printf("-------------------------------------------------\n");
                printf("Valor Total: %.2f\n", total_geral); 
                break;
            }
            case 0: {
                printf("Ate logo, %s!\n", compras.nome); 
                break;
            }
            default: {
                printf("Opcao invalida! Tente novamente.\n"); 
                break;
            }
        }

        printf("Pressione Enter para continuar...\n");
        getchar();

    } while (opcao != 0);

    return 0;