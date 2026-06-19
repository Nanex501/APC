#include <stdio.h>

int main(){
    int segundos_totais, hh, mm, ss;

    scanf("%d", &segundos_totais);

    hh = segundos_totais / 3600;
    mm = (segundos_totais / 60) - (hh * 60);
    ss = segundos_totais % 60;

    printf("%dh %.02dm %.02ds ",hh, mm, ss);

    return 0;
}