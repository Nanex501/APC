#include <stdio.h>

int main(){
    float l1, l2, l3;
    
    scanf("%f %f %f", &l1, &l2, &l3);

    if( ((l1 + l2) > l3) && ((l1+l3) > l2) && ((l2 + l3) > l1) ){
        if( (l1 == l2) && (l2 == l3) ){
            printf("Equilatero");
        }
        else if( ((l1 == l2) && (l2 != l3)) || ((l1 == l3) && (l3 != l2)) ){
            printf("Isosceles");
        }
        else{
            printf("Escaleno");
        }
    }
    else{
        printf("Nao forma um triangulo");
    }
    return 0;
}