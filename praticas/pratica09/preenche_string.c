#include <stdio.h>
#include <string.h>

int main (){

    char string [11];
    memset(string, '\0', sizeof(string));
    char tecla;
    printf("Digite: ");
    scanf("%c", &tecla);
    memset(string, tecla, 10);
    printf("%s\n", string);
    memset(string, '*', 5);
    printf("%s", string);
    string[5] = '\0';
    printf("%s", string);
    for(int i=0; i<10; i++){
        printf("%c", string[i+1]);
        printf("\n");
    }
    
    return 0;
}