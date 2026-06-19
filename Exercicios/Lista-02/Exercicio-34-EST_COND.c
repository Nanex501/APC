#include <stdio.h>

double calcularFrete(int codigoRegiao){

    if(codigoRegiao == 1){
        return 55.00;
    }
    if(codigoRegiao == 2){
        return 48.50;
    }
    if(codigoRegiao == 3){
        return 37.80;
    }
    if(codigoRegiao == 4){
        return 25.00;
    }
    if(codigoRegiao == 5){
        return 32.40;
    }
    else{
        return 0.0;
    }
}