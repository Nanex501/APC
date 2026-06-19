#include <stdio.h>

int main(){
    float peso, altura, IMC;

    scanf("%f", &peso);
    scanf("%f", &altura);

    IMC = peso / (altura * altura);
    
    printf("Seu IMC é: %.2f", IMC);

return 0;    
}