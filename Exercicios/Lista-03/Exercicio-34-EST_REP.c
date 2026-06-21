#include <stdio.h>

int main(){
    int num, digitos = 0;
    
    scanf("%d", &num);

    do{
        digitos++;
        num = num / 10;    
    } while(num > 0);

    printf("Digitos: %d", digitos);

    return 0;
}
