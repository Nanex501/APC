#include <stdio.h>

int contarPicos(int valores[], int n){
    int picos = 0;

    for(int counter = 1; counter < (n - 1); counter ++){
        if( valores[counter - 1] < valores[counter] && valores[counter] > valores[counter + 1] ){
            picos++;
        }
    }

    return picos;
}
