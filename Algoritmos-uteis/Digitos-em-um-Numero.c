#include <stdio.h>

int Digitos_em_um_Numero(int num){
    int digitos = 0;
    
    do{
        digitos++;
        num = num / 10;    
    } while(num > 0);

    printf("Digitos: %d", digitos);

    return 0;
}