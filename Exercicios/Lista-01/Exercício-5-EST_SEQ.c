#include <stdio.h>

int main(){
    int n1, n2, n3, soma;

    scanf("%d", &n1);
    scanf(" %d", &n2);
    scanf(" %d", &n3);

    soma = (12 * n1) + (9 * n2) + (2 * n3);

    printf("Você economizou %i litros de água", soma);
    
return 0;
}