#include <stdio.h>

int main(){
    char V;
    int num_eixos;
    float tarifa;

    scanf("%c %d",&V, &num_eixos);

    if(V == 'M'){
        tarifa = 3.00;
        printf("Valor a pagar: R$ %.2f", tarifa);
    }
    else if(V == 'P'){
        tarifa = (4.50 * num_eixos) * 0.95;
        printf("Valor a pagar: R$ %.2f", tarifa);
    }
    else if(V == 'C'){
        tarifa = (4.50 * num_eixos) * 1.10;
        printf("Valor a pagar: R$ %.2f", tarifa);
    }
    else{
        printf("Input inválido!");
    }

    return 0;
}