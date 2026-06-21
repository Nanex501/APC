#include <stdio.h>

int main(){
    int secreto, palpite;

    scanf("%d", &secreto);

    do{
        scanf("%d", &palpite);

        if(palpite < secreto){
            printf("MAIOR\n");
        }
        else if(palpite > secreto){
            printf("MENOR\n");
        }
        else{
            printf("Acertou!");
        }
        
    } while(palpite != secreto);

    return 0;
}
