#include <stdio.h>

int main(){
    char C;

    if(C == 'E'){
        printf("Valor a pagar: R$ 5.00");
    }
    else if(C == 'S'){
        printf("Valor a pagar: R$ 15.00");
    }
    else if(C == 'V'){
        printf("Valor a pagar: R$ 20.00");
    }
    else{
        printf("Categoria Invalida")
    }

    return 0;
}