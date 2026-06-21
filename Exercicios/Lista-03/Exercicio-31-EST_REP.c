#include <stdio.h>

int main(){
    int num, soma = 0;

    scanf("%d", &num);

    for(int divisor = 1; divisor <= num; divisor++){
        if(num % divisor == 0){
            soma += divisor;
        }
    }
    
    soma = soma - num;
    
    if(soma == num){
        printf("O numero %d e Perfeito", num);
    }
    else if(soma < num){
        printf("O numero %d e Deficiente", num);
    }
    else{
        printf("O numero %d e Abundante", num);
    }

    return 0;
}
