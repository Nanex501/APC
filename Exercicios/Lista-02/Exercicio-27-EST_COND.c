#include <stdio.h>

int verificarElegibilidade(int idade, double peso, int mesesUltimaTatuagem){

    if((idade < 0) || (peso < 0) || (mesesUltimaTatuagem < 0)){ //filtragem valores negativos
        return 0;
    }

    if((idade < 18) || (idade > 69)){ //verifica aptidão por idade
        return 1;
    }
    else{
        if(peso < 50.0){ //verifica aptidão por peso
            return 2;
        }
        else{
            if(mesesUltimaTatuagem < 12){ //verifica aptidão por tatuagem
                return 3;
            }
            else{
                return 4; //candidato apto a doar sangue
            }
        }
    }
    
}