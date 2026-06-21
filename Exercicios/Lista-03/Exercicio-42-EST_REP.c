#include <stdio.h>

int main(){
    int termos;
    float temp, temp_anterior, soma = 0, maximo, minimo;

    scanf("%d", &termos);
    scanf("%f", &temp);

    if(termos == 1){
        printf("Maximo: %.2f\nMinimo: %.2f\nMedia: %.2f", temp, temp, temp);
        return 0;
    }

    temp_anterior = temp;
    maximo = temp;
    minimo = temp;
    soma += temp_anterior;

    for(int counter = 2; counter <= termos; counter++){
        scanf("%f", &temp);
        
        if(temp > maximo){
            maximo = temp;
        }
        if(temp < minimo){
            minimo = temp;
        }
        soma += temp;
        temp_anterior = temp;
    }

    printf("Maximo: %.2f\nMinimo: %.2f\nMedia: %.2f", maximo, minimo, (soma / termos));

    return 0;
}
