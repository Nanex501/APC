# include <stdio.h>

int main(){

    double x, y, z, media_aritimetica;
    //float media_aritimetica;

    scanf("%lf %lf %lf", &x, &y, &z);

    media_aritimetica = (x + y + z) / 3;

    printf("%.2lf", media_aritimetica);

return 0;
}