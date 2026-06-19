#include <stdio.h>

int main(){
    float peso, altura, IMC;

    scanf("%f %f", &peso, &altura);

    IMC = peso / (altura * altura);

    if(IMC < 18.5){
        printf("Abaixo do peso");
    }
    else if((IMC >= 18.5) && (IMC < 25)){
        printf("Peso normal");
    }
    else if((IMC >= 25.0) && (IMC < 30)){
        printf("Sobrepeso");
    }
    else if((IMC >= 30.0) && (IMC < 35)){
        printf("Obesidade grau I"); 
    }
    else if((IMC >= 35.0) && (IMC < 40)){
        printf("Obesidade grau II");
    }
    else{
         printf("Obesidade grau III");
    }

    return 0;
}