#include <stdio.h>

int calcularBonus(int pontuacoes[], int n){
    int bonus = 0;

    for(int counter = 0; counter < n; counter++){
        if(pontuacoes[counter] > 1000){
            bonus += 50;
        }
    }
    return bonus;
}
