#include <stdio.h>

int main(){
    int celsius, zork;

    scanf("%d", &celsius);

    zork = (3 * celsius) - 15;

    printf("%d graus Celsius equivalem a %d graus Zork", celsius, zork);

return 0;    
}