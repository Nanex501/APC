#include <stdio.h>

int main(){
    float T, G, A;
    
    scanf("%f %f %f", &T, &G, &A);

    if(T >= 6){
        if(G >= 5){
            if(A >= 7){
                printf("Grupo Aprovado!");
            }
            else{
                printf("Grupo Reprovado.");
            }
        }
        else{
            printf("Grupo Reprovado.");
        }
    }
    else{
        printf("Grupo Reprovado.");
    }

    return 0;
}