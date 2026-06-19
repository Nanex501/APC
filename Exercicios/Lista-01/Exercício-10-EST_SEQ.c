#include <stdio.h> 
#include <math.h>

double powAPC(double a, double b){
    double pot;
    
    pot = pow(a, b); //OBS: "pow" usa doubles para melhorar a precisão.

    return pot;
}

int main(){
    double x, y, resultado;
    
    scanf("%lf %lf", &x, &y);
    
    resultado = powAPC(x , y);
    
    printf("%.1lf", resultado);
    
return 0;    
}
