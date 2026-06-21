#include <stdio.h>

int main(){
    int num, constante;

    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        constante = i;
        for(int j = 1; j <= constante; j++){
            printf("%d ", constante);
        }
        printf("\n");
    }
    return 0;
}
