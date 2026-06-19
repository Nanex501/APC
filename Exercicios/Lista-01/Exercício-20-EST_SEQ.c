#include <stdio.h>

void peso_ideal(float alt){
    float homens, mulheres;

    homens = 72.7 * alt - 58;
    mulheres = 62.1 * alt - 44.7;
    
    printf("%.2f %.2f", homens, mulheres);
    
}

int main(){
    float alt;

    scanf("%f", &alt);

    peso_ideal(alt);
    
return 0;
}
   