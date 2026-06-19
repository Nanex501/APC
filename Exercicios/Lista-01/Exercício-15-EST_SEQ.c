#include <stdio.h>

int main(){

    float pi = 3.14159;
    float raio, diametro, area, perimetro;

    scanf("%f", &raio);

    diametro = 2 * raio;
    area = pi * (raio * raio);
    perimetro = 2 * pi * raio;

    printf("%.2f \n%.2f \n%.2f", diametro, area, perimetro); 

return 0;
}