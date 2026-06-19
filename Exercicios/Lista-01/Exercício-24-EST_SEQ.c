#include <stdio.h>

int main(){
    
    float n1, n2, n3, media_ponderada;
    int p1, p2, p3;

    scanf("%f %f %f", &n1, &n2, &n3);
    scanf("%i %i %i", &p1, &p2, &p3);

    media_ponderada = ((n1 * p1) + (n2 * p2) + (n3 * p3)) / (p1 + p2 + p3);

    printf("%.6f", media_ponderada);
    

return 0;
}