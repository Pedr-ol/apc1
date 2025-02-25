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
    
    printf("Antes de comecarmos, digite seu nome: ");
    printf("Ola, %s!\n", compras.nome);

    do {
        
        system("clear || cls");
        printf("====================");  
        printf("\nMENU PRINCIPAL\n");
        printf("====================");  
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

                if (num_itens <= 0 || num_itens > 10) {
                    printf("Numero de itens invalido! Tente novamente.\n"); break;
                }

                for (int i = 0; i < num_itens; i++) {
                    if (compras.total_itens >= 10) {
                        printf("Limite de itens atingido!\n"); break;
                    }

                    printf("Digite o nome do item %d: ", compras.total_itens + 1);

                   strcspn(compras.itens[compras.total_itens], "\n") = '\0';

                    printf("Digite o preco do item: ");
                    scanf("%f", &compras.precos[compras.total_itens]);



                    compras.total_itens++;
                }

                printf("Itens adicionados com sucesso!\n"); break;
            }
            case 2: {
                if (compras.total_itens == 0) {
                printf("Nenhum item na lista de compras.\n"); break;
                }
                printf("\nNOTA FISCAL:\n\n");

                printf("Item\t\tPreco\n");
                printf("\t\t\t\t\t\t\t--------------------------------------------------------------------\n");
                float total_geral = 0.0;
                for (int i = 0; i < compras.total_itens; i++) {

                    total_geral += total_item;
                    printf("\t\t%-10.s\t\t%-10.2f\n", compras.itens[i], compras.precos[i]);
                }


            }
            case 0: {
                printf("Ate logo, %s!\n", compras.nome); break;
            }
            default: {
                printf("Opcao invalida! Tente novamente.\n"); break;
            }
        }

        printf("Pressione Enter para continuar...\n");
        getchar();

    } while (opcao != 0);

    return 0;
}