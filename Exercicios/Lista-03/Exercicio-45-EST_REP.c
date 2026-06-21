#include <stdio.h>

int main(){
    int num, impares = 2, counter = 3;
    int fibonnaci[1000];
    
    fibonnaci[0] = 0;
    fibonnaci[1] = 1;
    fibonnaci[2] = 1;

    scanf("%d", &num);

    if(num <= 0){
        return 0;
    }

    if(num == 1){
        printf("1 ");
        return 0;
    }

    if (num == 2){
        printf("1 1");
        return 0;
    }

    printf("%d ", fibonnaci[1]);
    printf("%d ", fibonnaci[2]);

    while(impares != num){
        fibonnaci[counter] = fibonnaci[counter - 1] + fibonnaci[counter - 2];

        if(fibonnaci[counter] % 2 != 0){
            printf("%d ", fibonnaci[counter]);
            impares++;
        }
        counter++;
    }

    return 0;
}
