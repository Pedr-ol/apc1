#include <stdio.h>

int main() {
    
    enum dia_da_semana_e {
        dom,
        seg,
        ter,
        qua,
        qui,
        sex,
        sab,
    };

    printf("Entre com o dia da semana: ");
    scanf("%i", dia);

    switch(dia)
    {
        case dom:
        printf("DOMINGO\n"); break;
        case seg:
        printf("TERCA\n"); break;
        
    }

    return 0;
}