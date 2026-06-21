#include <stdio.h>

int main(){
    int num, fatorial = 1;

    scanf("%d", &num);

    if(num == 0){
        printf("Fatorial de 0: 1");
        return 0;
    }

    for(int counter = 2; counter <= num; counter++){
    fatorial = fatorial * counter;
    }

    printf("Fatorial de %d: %d", num, fatorial);

return 0;
}
