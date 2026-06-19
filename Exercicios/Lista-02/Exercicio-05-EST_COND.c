#include <stdio.h>

int main(){
    int pot;
    
    scanf("%i", &pot);

    if (pot <= 0){
        printf("Classificacao: Gema sem poder.");
    }
    else if ((pot >= 1) && (pot <= 10)){
        printf("Classificacao: Comum.");
    }
    else if ((pot >= 11) && (pot <= 30)){
        printf("Classificacao: Incomum.");
    }
    else if ((pot >= 31) && (pot <= 60)){
        printf("Classificacao: Rara.");
    }
    else if ((pot >= 61) && (pot <= 100)){
        printf("Classificacao: Epica.");
    }
    else{
        printf("Classificacao: Lendaria.");
    }
    
    return 0;
}