#include <stdio.h>

int main(){
    int base, expoente, numAtual, resultado;

    scanf("%d", &base);
    scanf("%d", &expoente);

    if(expoente == 0){
        printf("%d elevado a 0 = 1", base);
        return 0;
    }
    if(expoente == 1){
        printf("%d elevado a 1 = %d", base, base);
        return 0;
    }

    numAtual = base;
    
    for(int i = 2; i <= expoente; i++){
        numAtual = numAtual * base;
        resultado = numAtual;
    }

    printf("%d elevado a %d = %d", base, expoente, resultado);

    return 0;
}
