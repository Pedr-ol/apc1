#include <stdio.h>

int main() {
    
    struct contato_t{
        char nome[61];
        long int telefone;
        char email[61];

    };

    struct contato_t contato;
    printf("Entre com o nome: ");
    scanf("%s", contato.nome);
    printf("Entre com o telefone: ");
    scanf("%li", &contato.telefone);
    printf("Entre com email: ");
    scanf("%s", contato.email);
    
    printf("Dados do contato\n");
    printf("Nome......: %s\n", contato.nome);
    printf("Telefone..: %li\n", contato.telefone);
    printf("Email.....: %s\n", contato.email);

    struct contato_t contatos [10];
        for (int i = 0; i<10; i++){
        printf("Entre com o nome: ");
         scanf("%s", contato[i].nome);
         printf("Entre com o telefone: ");
         scanf("%li", &contato[i].telefone);
         printf("Entre com email: ");
         scanf("%s", contato[i].email);
    }

    return 0;
}