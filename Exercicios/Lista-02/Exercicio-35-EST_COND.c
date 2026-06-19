#include <stdio.h>

int definirCategoria(double peso){

    if((peso > 0) && (peso <= 65.00)){
        return 1;
    }
    if((peso > 65.00) && (peso <= 75.00)){
        return 2;
    }
    if((peso > 75.00) && (peso <= 85.00)){
        return 3;
    }
    if(peso > 85.00){
        return 4;
    }

    else{
        return 0;
    }
}