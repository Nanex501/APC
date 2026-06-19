#include <stdio.h>

int main(){
    int O, P;

    scanf("%d %d", &O, &P);

    if(O < 130){
        printf("Creditos obrigatorios insuficientes.");
    }
    else{
        if(P < 40){
            printf("Creditos optativos insuficientes.");
        }
        else{
            if ((O + P) < 200){
                printf("Total de creditos insuficiente.");
            }
            else{
            printf("Apto para formatura!");
        }
    }

    return 0;
}