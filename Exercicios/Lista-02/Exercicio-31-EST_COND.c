#include <stdio.h>

double calcularBonus(double valorVendas, int metasBatidas){

    if((valorVendas < 0) || (metasbatidas < 0)){
        return 0.0;
    }

    if(valorVendas > 50000){
        if(metasBatidas > 3){
            return (valorVendas * 0.15);
        }
        else{
            return (valorVendas * 0.10);
        }
    }
    else if((valorVendas > 25000.01) && (valorVendas <= 50000)){
        if(metasBatidas > 3){
            return (valorVendas * 0.07);
        }
        else{
            return (valorVendas * 0.05);
        }
    }
    else{
        return (valorVendas * 0);
    }
}