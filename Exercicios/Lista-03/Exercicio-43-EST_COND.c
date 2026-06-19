#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, delta, x1, x2;

    scanf("%fx^2 + %fx + %f", &a, &b, &c);

    delta = (b * b) - (4 * a * c);

    x1 = (-b + sqrt(delta)) / (2*a);
    x2 = (-b - sqrt(delta)) / (2*a);


    if(a == 0){
        printf("NAO E EQUACAO DO SEGUNDO GRAU");
    }

    else if(delta < 0){
        printf("NAO POSSUI RAIZES NOS REAIS");
    }
    else{
        if(delta == 0){
            printf("A EQUACAO POSSUI APENAS UMA RAIZ REAL:\nA RAIZ E: %.2f", x1);
        }
        else{
            printf("A EQUACAO POSSUI DUAS RAIZES REAIS:\nX1 = %.2f\nX2 = %.2f", x1, x2);
        }
    }

    return 0;
}