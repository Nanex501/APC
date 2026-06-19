#include <stdio.h>

int main(){
    float pH, umidade;

    scanf("%f %f", &pH, &umidade);

    if (((pH < 4.5) || (pH > 7.0)) || ((umidade < 60.0) || (umidade > 90.0))){
        printf("Cultura inadequada \n");

    }
    else {
        if(((pH < 6.0) && (pH <= 7.0)) && ((umidade > 60.0) && (umidade <= 80.0))){
            printf("Soja \n");
        }
        else if(((pH > 5.5) && (pH <= 6.5)) && ((umidade > 50) && (umidade <= 70.0))){
            printf("Milho \n");
        }
        else if((pH <=5.5) && ((umidade > 70.0) && (umidade <= 90.0))){
            printf("Café \n");
        }
    }

    return 0;
}