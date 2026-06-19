#include <stdio.h>

int calcularBonusJogo(int tempoRestante, int segredosEncontrados){

    if((tempoRestante < 0) || (segredosEncontrados < 0)){
        return 0;
    }

    if((tempoRestante > 120) && (segredosEncontrados >= 3)){
        return 4;
    }
    else{
        if(((tempoRestante > 60) && (segredosEncontrados >= 2)){
            return 3;
        }
        else{
            if((tempoRestante > 0) && (segredosEncontrados >= 1)){
                return 2;
            }
            else{
                return 1;
            }
        }
    }
}