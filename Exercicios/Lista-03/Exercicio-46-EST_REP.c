#include <stdio.h>

int main(){
    float capital, juros, meta;
    int meses = 0;

    scanf("%f", &capital);
    scanf("%f", &juros);
    scanf("%f", &meta);

    while(capital < meta){
    capital = capital + capital * (juros / 100);
    meses++;
    }

    printf("Meses: %d", meses);

    return 0;
}
