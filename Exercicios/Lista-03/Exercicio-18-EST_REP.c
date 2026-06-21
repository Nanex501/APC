#include <stdio.h>

int main(){
    int num, digito, soma_pares = 0, soma_impares = 0, counter = 1;

    scanf("%d", &num);

    while(num != 0){
        digito = num % 10;

        if(digito % 2 == 0){
            soma_pares += digito;
        }
        else{
            soma_impares += digito;
        }
        num = num / 10;
        counter++;
    }

    printf("Soma Pares: %d\nSoma Impares: %d", soma_pares, soma_impares);

    return 0;
}
