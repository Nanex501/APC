#include <stdio.h>

int main(){
    int num, i, divisores = 0;

    scanf("%d", &num);

    for(i = 1; i <= num ; i++){
        if(num % i == 0){
            divisores++;
        }
    }

    if(divisores == 2){
        printf("%d eh primo", num);
    }
    else{
        printf("%d nao eh primo", num);
    }
}
