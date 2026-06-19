#include <stdio.h>

int main(){
    int idade;

    scanf("%d", &idade);

    if((idade >= 0) && (idade <= 12)){
        printf("Crianca");
    }
    if((idade >= 13) && (idade <= 17)){
        printf("Adolescente");
    }
    if((idade >= 18) && (idade <= 59)){
        printf("Adulto");
    }
    if(idade >= 60){
        printf("Idoso");
    }
    
    return 0;
}