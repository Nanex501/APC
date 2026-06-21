#include <stdio.h>

int main(){
    int num, soma = 0;

    scanf("%d", &num);

    for(int counter = 1; counter <= num; counter ++){
        soma += counter;
    }

    printf("Soma: %d", soma);

    return 0;
}
