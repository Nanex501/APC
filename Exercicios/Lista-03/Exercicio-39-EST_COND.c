#include <stdio.h>

int analisarRisco(int pontuacao){

    if(pontuacao < 0){
        return 0;
    }

    if((pontuacao >= 0) && (pontuacao <= 300)){
        return 4;
    }
    else if((pontuacao >= 301) && (pontuacao <= 600)){
        return 3;
    }
    else if((pontuacao >= 601) && (pontuacao <= 800)){
        return 2;
    }
    else{
        return 1;
    } 
}