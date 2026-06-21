#include <stdio.h>
#include <math.h>

int main(){
    int num, indicador = 0;

    scanf("%d", &num);
    
    if(num == 0){
        printf("O proximo primo depois de 0 e: 2");
        return 0;
    }

    for(int counter = (num + 1); counter > num; counter++){
        indicador = 0;
        for(int divisor = 2; divisor <= sqrt(counter); divisor++){
            if(counter % divisor == 0){
                indicador++;
            }
        }

        if(indicador == 0){
            printf("O proximo primo depois de %d e: %d", num, counter);
            return 0;
        }
    }
}
