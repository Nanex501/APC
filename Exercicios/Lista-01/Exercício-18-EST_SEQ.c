#include <stdio.h>

void trocarAB(int a, int b){
   printf("%i %i\n", b, a);
}

int main(){
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
    
    scanf("%i %i \n%i %i \n %i %i \n %i %i \n %i %i", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10);
    
    trocarAB(n1, n2);
    trocarAB(n3, n4);
    trocarAB(n5, n6);
    trocarAB(n7, n8);
    trocarAB(n9, n10);
    
    return 0;
}