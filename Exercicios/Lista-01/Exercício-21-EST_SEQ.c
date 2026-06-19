#include <stdio.h>

int main(){
    int hh, mm, ss, segundos_totais;

    scanf("%d%*c%d%*c%d%*c", &hh, &mm, &ss);

    segundos_totais = (3600 * hh) + (60 * mm) + ss;

    printf("La se foram %d segundos que nao voltam mais...", segundos_totais);

    return 0;
} 
