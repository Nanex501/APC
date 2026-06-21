#include <stdio.h>

int main(){
    int num;

    do{
        scanf("%d", &num);
    } while(num <= 0);

    printf("Numero positivo lido: %d", num);

    return 0;
}
