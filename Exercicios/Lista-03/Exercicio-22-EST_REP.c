#include <stdio.h>

int main(){
    int L, C, traco = 0, determinante, diagonal_principal, diagonal_secundaria;

    scanf("%d", &L);
    scanf("%d", &C);

    if( (L != C) || (L < 1) || (C < 1)){
        printf("A Matriz Nao E Quadrada");
        return 0;
    }
    
    int matriz[L][C];

    for(int linha = 0; linha <= (L - 1); linha++){
        for(int coluna = 0; coluna <= (C - 1); coluna++){
            scanf("%d", &matriz[linha][coluna]);

            if(linha == coluna){
                traco += matriz[linha][coluna];
            }
        }
    }
    
    printf("%d\n", traco);
    
    if(L <= 3){
    
        if(L == 1){
            determinante = matriz[0][0];
            }
    
        if(L == 2){
            determinante = matriz[0][0] * matriz[1][1] - matriz [0][1] * matriz[1][0];
        }
    
        if(L == 3){
            diagonal_principal = (matriz[0][0] * matriz[1][1] * matriz[2][2]) + (matriz[0][1] * matriz[1][2] * matriz[2][0]) + (matriz[0][2] * matriz[1][0] * matriz[2][1]);
            diagonal_secundaria = (matriz[0][1] * matriz[1][0] * matriz[2][2]) + (matriz[0][0] * matriz[1][2] * matriz[2][1]) + (matriz[0][2] * matriz[1][1] * matriz[2][0]);
        
            determinante = diagonal_principal - diagonal_secundaria;
        }
        printf("%d", determinante);
    }
    
    return 0;
}
