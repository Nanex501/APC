#include <stdio.h>

int main(){
    int num, numAnterior, passos = 0, pico;

    scanf("%d", &num);

    if(num == 1){
        printf("Passos: 0\nPico: 1");
        return 0;
    }
    pico = num;

    while(num != 1){
        numAnterior = num;
        
        if(num % 2 == 0){
            num = num / 2;
        }
        else{
            num = 3 * num + 1;
        }
        
        if(num > numAnterior && num > pico){
            pico = num;
        }
        passos++;
    }

    printf("Passos: %d\nPico: %d", passos, pico);
    
    return 0;
}
