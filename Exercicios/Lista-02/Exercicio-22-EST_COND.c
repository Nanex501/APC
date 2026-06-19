#include <stdio.h>

int validarForcaSenha(int comprimento){
    if(comprimento <= 0){
        return 0;
    }
    else{
        if(comprimento < 6){
            return 1;
        }
        else if((comprimento >= 6) && (comprimento <= 7)){
            return 2;
        }
        else if((comprimento >=8) && (comprimento <= 11)){
            return 3;
        }
        else{
            return 4;
        }
    }
    
}