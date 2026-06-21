#include <stdio.h>

int main(){
    int num;

    scanf("%d", &num);

    if(num == 1){
        printf("*");
        return 0;
    }

    for(int linha = 1; linha <= num; linha++){
        for(int espacos = (num - linha); espacos > 0; espacos--){
            printf(" ");
        }
        for(int asteriscos = 1; asteriscos <= linha; asteriscos++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
