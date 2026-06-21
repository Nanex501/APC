#include <stdio.h>

int main(){
    int secreto, tentativas, counter, palpite;

    scanf("%d", &secreto);
    scanf("%d", &tentativas);

    for(counter = 0; counter < tentativas; counter++){
        scanf("%d", &palpite);

        if(palpite < secreto){
            printf("MAIOR\n");
        }
        if(palpite > secreto){
            printf("MENOR\n");
        }
        if(palpite == secreto){
            printf("ACERTOU EM %d TENTATIVAS\n", (counter+1));
            break;
        }  
    }

    if((counter == tentativas) && (palpite != secreto)){
        printf("PERDEU");
    }
    return 0;
}
