#include <stdio.h>

int main(){
    int n;

    scanf("%d", &n);

    if ( n == 0){
        printf("A profecia eh sobre recomecos.");
    }
    else{
        if (n > 0){
            if ((n % 2) == 0){
            printf("A profecia eh sobre sucesso e abundancia."); 
            } 
            else{
            printf("A profecia eh sobre jornadas e desafios.");
            }
        }
        else{
            if ((n % 2) == 0){
            printf("A profecia eh sobre cautela e reflexao.");
            }
            else{
            printf("A profecia eh sobre superacao e aprendizado.");
            }
        }
    }
    return 0;
}