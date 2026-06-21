#include <stdio.h>

int main(){
    int num, somatorio = 0, contador = 0;
    float mediaPares;

    scanf("%d", &num);

    while(num != 0){
        if(num % 2 == 0){     //verifica se eh par
            somatorio += num; 
            contador++;       //contador de numeros pares
        }
        scanf("%d", &num);
    }

    if(contador == 0){               //verifica se saiu do loop sem um unico numero par digitado
        printf("Nenhum numero par");
    }
    else{
        mediaPares = (float) somatorio / contador;
        printf("Media dos pares: %.2f", mediaPares);
    }

    return 0;
}
