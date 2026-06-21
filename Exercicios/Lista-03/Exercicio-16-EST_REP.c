#include <stdio.h>

int main(){
    int num, numAnterior, sequencia, indicador = 0;

    scanf("%d", &sequencia);
    if(sequencia < 2){  //Verifica se existe uma sequencia com no minimo dois numeros
        printf("Padrao 'par-par' nao detectado.");
        return 0;
    }
    
    scanf("%d", &num); //Leitura do primeiro numero da sequencia
    numAnterior = num; //Estabelece o primeiro numAnterior para comparacao

    scanf("%d", &num); //Leitura do segundo numero

    for(int counter = 2; counter <= sequencia; counter++){
        if(num % 2 == 0 && numAnterior % 2 == 0){
                indicador++; //Padrao par-par detectado
            }
            numAnterior = num; //Estabelece o numero do loop atual para ser comparado com o proximo
            scanf("%d", &num); //Leitura do proximo numero
    }

    if(indicador > 0){
        printf("Padrao 'par-par' detectado.");
    }
    else{
        printf("Padrao 'par-par' nao detectado.");
    }
    return 0;
}
