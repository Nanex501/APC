#include <stdio.h>

int main(){
    int L, C;

    scanf("%d", &L);
    scanf("%d", &C);

    
    for(int i = 1; i <= L; i++){
        for(int j = 1; j <= C; j++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
