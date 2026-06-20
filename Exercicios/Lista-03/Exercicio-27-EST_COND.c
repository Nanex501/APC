#include <stdio.h>

int ehEstritamenteCrescente(int array[], int n){
    int indicador = 1;

    if( n == 0 || n == 1 ){
        return indicador;
    }

    int num_anterior = array[0];

    for(int counter = 1; counter < n; counter++){
        if(array[counter] <= num_anterior){
            indicador = 0;
            break;
        }
        num_anterior = array[counter];
    }

    return indicador;
}
