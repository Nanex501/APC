#include <stdio.h>

int main(){
    float num, somatorio = 0, contador = 0;

    scanf("%f", &num);

    if(num < 0){
        printf("Nenhuma nota valida.");
        return 0;
    }
        
    while(num > 0){
        somatorio += num;
        contador++;
        scanf("%f", &num);
    }
    printf("Media: %.2f", (somatorio / contador));
    
    return 0;
}
