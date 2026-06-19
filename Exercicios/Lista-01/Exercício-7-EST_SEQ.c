#include <stdio.h>

int main(){
    float conta, porcentagem_gorjeta, gorjeta, valor_total;

    scanf("%f", &conta);
    scanf("%f", &porcentagem_gorjeta);

    gorjeta = conta * (porcentagem_gorjeta / 100);
    valor_total = conta + gorjeta;

    printf("Valor da gorjeta: R$%.2f \n", gorjeta);
    printf("Valor total: R$%.2f", valor_total );
    
return 0;
}
    