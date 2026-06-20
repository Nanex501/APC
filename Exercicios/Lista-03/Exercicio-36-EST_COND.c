#include <stdio.h>

int contarPares(int inicio, int fim){
    int pares = 0;

    for(int counter = inicio; counter <= fim; counter++){
        if(counter % 2 == 0){
            pares++;
        }
    }

    return pares;
}
