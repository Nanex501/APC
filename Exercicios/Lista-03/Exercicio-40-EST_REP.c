#include <stdio.h>

int main(){
    int num;

    scanf("%d", &num);

    if( num % 2 == 0 || num < 1 ){
        printf("Numero invalido");
        return 0;
    }

    if(num == 1){
        printf("*");
        return 0;
    }
    

    for(int linha_antes = 1; linha_antes < num; linha_antes += 2){                     
        for(int espacos = 0 ; espacos < (num - linha_antes) / 2; espacos++){   
            printf(" ");
        }
        for(int asteriscos = 1; asteriscos <= linha_antes; asteriscos++){
            printf("*");
        }
        printf("\n");
    }
    
    for(int linha_central = 1; linha_central <= num; linha_central++){
        printf("*");
    }
    printf("\n");

    
    for(int linha_depois = num - 2; linha_depois >= 1; linha_depois -= 2){                     
        for(int espacos = 0; espacos < ((num - linha_depois) / 2); espacos++) {
            printf(" ");
        }

        for(int asteriscos = 1; asteriscos <= linha_depois; asteriscos++) {
            printf("*");
        }

    printf("\n");
    }

    return 0;
}
