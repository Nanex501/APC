#include <stdio.h>

int diagnosticarQualidadeAr(int codigoSensor){

    switch(codigoSensor){
        case 1:
            return 10;
            break;
        
        case 2:
            return 20;
            break;
        
        case 3:
            return 30;
            break;
        
        case 4:
            return 40;
            break;
        
        case 5:
            return 50;
            break;
        
        default:
            return 0;            
    }  
}