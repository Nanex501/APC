#include <stdio.h>

double calcularPrecoIngresso(int idade, int ehEstudante){

    if (idade < 0){
        return 0.0;
    }

    if(idade < 12){
        return 15.00;
    }
    else if(idade >= 60){
        return 20.00;
    }
    else{
        if((ehEstudante = 1)){
            return 25.00;
        }
        else{
            return 30.00;
        }
    }
}