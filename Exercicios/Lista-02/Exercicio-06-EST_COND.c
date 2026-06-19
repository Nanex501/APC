#include <stdio.h>

int interpretarProfecia(int numeroDaSorte){
    int num, codigo = 0;
    
    if ((numeroDaSorte == 0)){
        codigo = 0;
        return codigo;    
    }
    
    if (numeroDaSorte < -10){
        codigo = 3;
        return codigo;
    }
    else if ((numeroDaSorte >= -10) && (numeroDaSorte < 0)){
        codigo = 4;
        return codigo;
    }
    else{
        if (numeroDaSorte % 2 == 0){
            codigo = 1;
            return codigo;
        }   
        else{
            codigo = 2;
            return codigo;
        }
    }
    scanf("%d", &num);
    printf("%d", interpretarProfecia(num));
}