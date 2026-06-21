#include <stdio.h>

int main(){
    float num;

    do{
        scanf("%f", &num);
    } while( num < 0 || num > 10);

    printf("Nota valida: %.2f", num);


    return 0;
}
