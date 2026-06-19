#include <stdio.h>

int validarSaque(double saldo, int valorSaque){

    if((valorSaque <= 0) || (valorSaque % 10 != 0)){
        return -1; 
    }
    else if(valorSaque > 1000){
        return -3;
    }
    else if(valorSaque > saldo){
        return -2;
    }
    else{
        return 1;
    }
    
}