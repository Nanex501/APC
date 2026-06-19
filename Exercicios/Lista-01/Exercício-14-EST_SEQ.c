#include <stdio.h>

int main(){

    float du, dudu, edu, valor_total, conta_Du, conta_Dudu, conta_Edu;

    scanf("%f", &du);
    scanf("%f", &dudu);
    scanf("%f", &edu);

    conta_Du = du * 1.1;
    conta_Dudu = dudu * 1.1;
    conta_Edu = edu * 1.1;

    valor_total = conta_Du + conta_Dudu + conta_Edu;

    printf("%.2f %.2f %.2f \n", conta_Du, conta_Dudu, conta_Edu);
    printf("%.2f", valor_total);

return 0;
}