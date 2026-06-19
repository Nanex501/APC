#include <stdio.h>

int categorizarProduto(int codigoProduto){

    if(codigoProduto <= 0){
        return 0;
    }

    if((codigoProduto > 0) && (codigoProduto <= 100)){
        return 1;
    }
    if((codigoProduto >= 101) && (codigoProduto <= 200)){
        return 2;
    }
    if((codigoProduto >= 201) && (codigoProduto <= 300)){
        return 3;
    }
    if((codigoProduto >= 301) && (codigoProduto <= 400)){
        return 4;
    }
    else{
        return 5;
    }
}