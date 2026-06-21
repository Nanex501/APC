#include <stdio.h>

int main(){
    int num, numAnterior, sequencia, indicador, denteDeSerra = 0;

    scanf("%d", &sequencia);

    if(sequencia <= 2){
        printf("SIM");
        return 0;
    }

    scanf("%d", &num);
    numAnterior = num;

    scanf("%d", &num);

    if(num < numAnterior){
        indicador = 0;          //Indicador 0: a sequencia desce
    }
    else if(num > numAnterior){
        indicador = 1;          //Indicador 1: a sequencia sobe
    }

    numAnterior = num; //Primeiro numero para comparar dentro do loop

    for(int counter = 3; counter <= sequencia; counter++){
        scanf("%d", &num); //Leitura do terceiro numero em frente
        
        if(indicador == 0 && num > numAnterior){
            indicador = 1;    //A sequencia desceu e subiu em seguida
            denteDeSerra = 1;
        }
        else if(indicador == 1 && num < numAnterior){
            indicador = 0;    //A sequencia subiu e desceu em seguida
            denteDeSerra = 1;
        }
        else{
            denteDeSerra = 0; //A sequencia, como um todo, nao forma um dente de serra
        } 
        numAnterior = num; //Atualiza o numAnterior para o proximo loop
    }

    if(denteDeSerra != 0){
        printf("SIM");
    }
    else{
        printf("NAO");
    }

    return 0;
}
