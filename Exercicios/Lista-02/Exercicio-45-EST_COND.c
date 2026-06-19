#include <stdio.h>

int identificarCategoria(int idade){
    if (idade < 5){
        return 0;
    }

    if((idade >= 5) && (idade < 8)){
        return 1;
    }
    else if((idade >= 8) && (idade < 11)){
        return 2;
    }
    else if((idade >= 11) && (idade < 14)){
        return 3;
    }
    else if((idade >= 14) && (idade < 18)){
        return 4;
    }
    else{
        return 5;
    }
}