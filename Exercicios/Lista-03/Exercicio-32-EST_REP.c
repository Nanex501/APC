#include <stdio.h>

int main(){
    int num, repeticoes = 1;
    char caractere, caractere_anterior;

    scanf("%d", &num);

    if(num < 1){
        return 0;
    }

    scanf(" %c", &caractere);
    caractere_anterior = caractere;

    for(int counter = 2; counter <= num; counter++){
        scanf(" %c", &caractere);

        if(caractere == caractere_anterior){
            repeticoes++;
        }
        else{
            printf("%c%d", caractere_anterior, repeticoes);
            repeticoes = 1;
        }
        caractere_anterior = caractere;
    }

    printf("%c%d\n", caractere_anterior, repeticoes);

    return 0;
}
