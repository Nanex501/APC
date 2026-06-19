#include <stdio.h>

void age(int dias){
    int A, M, D;

    A = dias / 360;
    M = (dias / 30) - (12 * A);
    D = dias % 30;

    printf("%i ano(s), %i mes(es) e %i dia(s)\n", A, M, D);
 
}

int main(){
    int n1, n2, n3;

    scanf("%i %i %i", &n1, &n2, &n3);

    age(n1);
    age(n2);
    age(n3);
    
    return 0;
}

//funcionou de primeira!