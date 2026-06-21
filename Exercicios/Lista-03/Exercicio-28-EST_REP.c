#include <stdio.h>

int main(){
    int eleitores, voto, cand1 = 0, cand2 = 0, cand3 = 0, nulos = 0;

    scanf("%d", &eleitores);

    if(eleitores == 0){
        return 0;
    }

    for(int counter = 1; counter <= eleitores; counter++){
        scanf("%d", &voto);

        switch(voto){
            case 1:
                cand1++;
                break;
            case 2:
                cand2++;
                break;
            case 3:
                cand3++;
                break;
            default:
                nulos++;
        }
    }

    printf("Candidato 1: %d\nCandidato 2: %d\nCandidato 3: %d\nNulos: %d", cand1, cand2, cand3, nulos);

return 0;
}
