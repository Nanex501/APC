#include <stdio.h>

int main(){
    float n1, n2, n3, media;
    
    scanf("%f %f %f", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3;

    if (media >= 7.0){
        printf("Aprovado \n%.2f", media);
    }
    else {
        if ((media >= 5.0) && (media < 7.0)){
            printf("Recuperacao \n%.2f", media);
        }
        else {
            printf("Reprovado \n%.2f", media);
        }
    }
    
    return 0;
}