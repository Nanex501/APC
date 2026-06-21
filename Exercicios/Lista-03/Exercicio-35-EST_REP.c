#include <stdio.h>

int main(){
    float nota;
    int aprovados = 0, reprovados = 0;

    do{
        scanf("%f", &nota);

        if(nota >= 5.0){
            aprovados++;
        }
        if(nota >= 0 && nota < 5.0){
            reprovados++;
        }
        
    } while(nota >= 0);

    printf("Aprovados: %d\nReprovados: %d", aprovados, reprovados);

    return 0;
}
