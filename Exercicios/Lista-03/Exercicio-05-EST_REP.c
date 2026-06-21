#include <stdio.h>

int main(){
    int a, b, i, menor, mdc;

    scanf("%d", &a);
    scanf("%d", &b);

    if(a > b){
        menor = b;
    } else{
        menor = a;
    }

    for( i = 1; i <= menor; i++){
        if((a % i == 0) && (b % i == 0)){
            mdc = i;
        }
    }

    printf("MDC: %d", mdc);

    return 0;
}
