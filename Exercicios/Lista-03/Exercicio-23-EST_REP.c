#include <stdio.h>

int main(){
    int linhas;

    scanf("%d", &linhas);

    for(int counter_1 = 1; counter_1 <= linhas; counter_1++){
        for(int counter_2 = 1; counter_2 <= counter_1; counter_2++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
