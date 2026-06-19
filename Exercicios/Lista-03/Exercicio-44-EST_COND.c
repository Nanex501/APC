#include <stdio.h>

int main(){
    int valor, saldo;

    scanf("R$%d : R$%d", &valor, &saldo);

    if(valor > saldo){
        printf("Ta pobre.");
    }
    else{
        printf("Pode comprar!");
    }

    return 0;
}