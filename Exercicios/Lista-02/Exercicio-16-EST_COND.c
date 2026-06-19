#include <stdio.h>

int main(){
    float T;
    int P, S;

    scanf("%f %d %d", &T, &P, &S);

    if((S < 90) || (P < 80)){
        printf("Classificacao de Risco: VERMELHO");
    }
    else if((T > 39.0) || (P > 180)){
        printf("Classificacao de Risco: LARANJA");
    }
    else if((T >= 38.0) && (T <= 39.0)){
        printf("Classificacao de Risco: AMARELO");
    }
    else{
        printf("Classificacao de Risco: VERDE");
    }

    return 0;
}