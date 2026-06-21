#include <stdio.h>

int main(){
    int num, contador = 1;

    scanf("%d", &num);

    while(contador <= num){
        printf("%d\n", contador);
        contador++;
    }
    return 0;
}
