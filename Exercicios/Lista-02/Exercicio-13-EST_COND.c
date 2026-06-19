#include <stdio.h>

int selecionarPneu(char c, char e){

    if( ((c == "U") && (e == "V")) || ((c == "u") && (e == "v")) ){
        return 1;
    }
    else if( ((c == "U") && (e == "I")) || ((c == "u") && (e == "i")) ){
        return 2;
    }
    else if( ((c == "R") && (e == "V")) || ((c == "r") && (e == "v")) ){
        return 3;
    }
    else if( ((c == "R") && (e == "I")) || ((c == "r") && (e == "i")) ){
        return 4;
    }
    else{
        return 0;
    }

}
    int main(){
    char tipoTerreno, estacao;

    scanf("%c %c", &tipoTerreno, &estacao)

    selecionarPneu(tipoTerreno, estacao);
}