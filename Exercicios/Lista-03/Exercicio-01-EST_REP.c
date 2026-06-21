#include <stdio.h>

int main(){
    int num_pecas, contador = 0, indicador = 0;
    float peso;
    
    scanf("%d", &num_pecas);

    while(contador <= num_pecas){

        scanf("%f", &peso);
        
        if((peso < 100) || (peso > 110)){
            indicador = 1;
        }
    contador++;
    }

    if(indicador == 1){
        printf("Lote REPROVADO");
    }
    else{
        printf("Lote APROVADO");  
    }
    return 0;
}
