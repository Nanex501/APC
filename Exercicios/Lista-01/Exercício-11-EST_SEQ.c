#include <stdio.h>

int main(){

    float celsius, fahrenheit;

    scanf("%f", &celsius);

    fahrenheit = (9* celsius + 160) / 5;
        
    printf("%.1f", fahrenheit);
    
return 0;
}
