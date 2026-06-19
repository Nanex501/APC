#include <stdio.h>

int main(){
    
    int galeoes, sicles, nuques, total_nuques;
    
    scanf("%d", &galeoes);
    scanf("%d", &sicles);
    scanf("%d", &nuques);

    total_nuques = (17 * 29 * galeoes) + (29 * sicles) + nuques;

    printf("O bruxo possui %i Nuques", total_nuques);

return 0;
}