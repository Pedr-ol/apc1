#include <stdio.h>
#include <string.h>
int main() {

    char primeiro_nome [20];
    char ultimo_nome [20];
    char nome [40];


    printf("Entre com seu primeiro nome: ");
    scanf("%[^\n]s", primeiro_nome);
    while (getchar() != '\n');

    printf("Entre com seu ultimo nome: ");
    scanf("%[^\n]s", ultimo_nome);
    while (getchar() != '\n');
    // nome = primeiro_nome;
    strcpy(nome, primeiro_nome);
    printf("%s\n", nome);

    // nome = nome + ultimo_nome;
    strcat(nome, " ");
    strcat(nome, ultimo_nome);
    printf("%s\n", nome);

    //TAMANHO DA STRING
    printf("A palavra '%s' tem %i caracteres\n", primeiro_nome, strlen(primeiro_nome));

    //COMPARAR STRINGS
    if (strcmp(primeiro_nome, ultimo_nome) > 0 ) {
        printf("A ordem eh %s, %s\n", ultimo_nome, primeiro_nome);

    } else {
        printf("A ordem eh %s, %s\n", primeiro_nome, ultimo_nome);
    }

    //PROCURAR POR STRING
    if (strstr(nome, "Silva")){
        printf("Voce eh da familia Silva\n");
    } else {
        printf("Voce nao eh da familia Silva\n");
    }

    //PREENCHER UMA STRING COM UM CARACTER
    memset(nome, 'a', 10);
    printf("%s\n", nome);
    memset(nome, 'b', 20);
    printf("%s\n", nome);
    memset(nome, 0, sizeof(nome)); //LIMPAR A STRING
    printf("%s\n", nome);

    return 0;
}