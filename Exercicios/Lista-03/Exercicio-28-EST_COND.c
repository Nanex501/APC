#include <stdio.h>

int verificarSituacao(double notaFinal, double frequencia){

    if(frequencia < 75.0){
    return 2;
    }
    else{
        if(notaFinal < 4.0){
            return 4;
        }
        else if((notaFinal >= 4.0) && (notaFinal < 6.0)){
            return 3;
        }
        else{
            return 1;
        }
    }
}