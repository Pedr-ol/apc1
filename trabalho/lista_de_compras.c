#include <stdio.h>


int main() {
    char opcao;
    int itens;
    char compras [20];
    int i = 0;

    printf("        Lista de Compras\n");
    printf("------------------------------------------\n");


    do{
    
    printf("Menu Principal\n");
    printf("1. Adcionar itens na lista\n");
    printf("2. Ver a lista.\n");
    printf("3. Retirar itens da lista.\n");
    printf("4. Salvar e Sair.\n");
    printf("Por favor escolha o que deseja fazer: ");
    scanf("%i",&opcao);
   
    


        switch(opcao){
            case 1: {
            
            printf("Quantos itens você quer adcionar? ");
            scanf("%i", &itens);
            if (itens = 0){ 
            printf("Você ainda nao adicionou nenhum item\n"); break;
            } else {
                
                if (itens > 0){
                    for(int i  = 0; itens < i; i++) { 
                    printf("Qual item você deseja adiconar: ");
                    scanf("&s", &compras);
                        }
                    }
                }
            }
            case 2: printf("Escolha um valor\n"); break;
            case 3: printf("Voce tem 4 recados\n"); break;
            case 4: printf("61 6666-6666\n61 0000-0000"); break;
            default: printf("Opcao invalida. Tente novamente\n "); break;
        }
        
     } while (opcao !=0);

        return 0;
}
    