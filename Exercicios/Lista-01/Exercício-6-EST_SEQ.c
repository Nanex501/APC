#include <stdio.h>

int main(){
    float custo, guardado, economia;
    int meses;

    scanf("%f", &custo);
    scanf("%f", &guardado);
    scanf("%i", &meses);

    economia = (custo - guardado) / meses;

    printf("Voce deve economizar R$%.2f por mes", economia);
        
return 0;
}