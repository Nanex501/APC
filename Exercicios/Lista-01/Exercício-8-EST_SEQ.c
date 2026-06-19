#include <stdio.h>

int main(){
    int anos, meses, dias, dias_de_vida;

    scanf("%i", &anos);
    scanf("%i", &meses);
    scanf("%i", &dias);

    dias_de_vida = (360 * anos) + (30 * meses) + dias;

    printf("Voce ja viveu %i dias", dias_de_vida);

return 0;
}