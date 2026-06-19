#include <stdio.h>

int main(){
    int H, S;

    scanf("%d %d", &H, &S);
    
    if ((S >= 8) && (H <= 5)){
        printf("Sua vocacao aponta para Engenharia de Software.");
    }
    else if ((S >= 5) && (H <= 8)){
        printf("Sua vocacao aponta para Engenharia Automotiva.");
    }
    else if ((S >= 7) && (H <= 7)){
        printf("Sua vocacao aponta para Engenharia de Eletronica.");
    }
    else if ((S > 5) && (H > 5)){
        printf("Sua vocacao aponta para Engenharia de Energia.");
    }
    else{
        printf("Continue explorando as materias do Ciclo Basico.");
    }
    
    return 0;
}