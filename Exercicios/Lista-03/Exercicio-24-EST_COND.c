#include <stdio.h>

int main(){
    int T;
    float I;

    scanf("%d %f", &T, &I);

    if(I == 0){
        printf("Pedido de Trancamento Negado");
    }
    else{
        if(T > 2){
        printf("Pedido de Trancamento Negado");
        }
            
        else{
            if((T == 0) && (I > 0)){
                printf("Pedido de Trancamento Aprovado");
            }
            else if((T == 1) && (I > 2.5)){
                printf("Pedido de Trancamento Aprovado");
            }
            else{
                printf("Pedido de Trancamento Negado");
            }
        }
    }

    return 0;
}