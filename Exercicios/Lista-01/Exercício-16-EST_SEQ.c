#include <stdio.h>

int main(){
    int dd, mm, aa;

    scanf("%d%*c%d%*c%d", &dd, &mm, &aa);

    printf("%.02d-%.02d-%.02d\n", dd, mm, aa);
    printf("%.02d-%.02d-%.02d\n", mm, dd, aa);
    printf("%.02d/%.02d/%.02d", aa, mm, dd); 

return 0;
}