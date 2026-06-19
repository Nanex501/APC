#include <stdio.h>

int main(){
    int A, F, M;

    scanf("%d %d %d", &F, &M, &A);

    if ((F >= 8) && (M <= 5)){
        printf("Classe recomendada: Guerreiro");
    }
    else if ((F <= 5) && (M >= 8)){
        printf("Classe recomendada: Mago");
    }
    else if ((F <= 6) && (M <= 6) && (A >= 8)){
        printf("Classe recomendada: Arqueiro");
    }
    else{
        if ((F > 5) && (M > 5)){
            printf("Classe recomendada: Paladino");
        }
        else if ((A > F) && (A > M)){
            printf("Classe recomendada: Ladino");
        }
        else{
            printf("Classe recomendada: Indeciso");
        }
    }   

    return 0;
}
    return 0;
}