#include <stdio.h>

int age(int dias){
    int A, M, D;

    A = dias / 360;
    M = (dias / 30) - (12 * A);
    D = dias % 30;

    printf("%i %i %i\n", A, M, D);
    
    return 1;
}

int main(){
    int d1, d2, d3;

    scanf("%i %i %i", &d1, &d2, &d3);
    
    d1 = age(d1);
    d2 = age(d2);
    d3 = age(d3);
    
    return 0;
} 