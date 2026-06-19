#include <stdio.h>

void binario(int n){
    
    if (n == 0) {
        printf("0b0\n");
    }
    else{
        int resto[1000];
        int contador = 0;

        while (n > 0){
        resto[contador] = n % 2;
        n = n / 2;
        contador++;      
        }
        printf("0b");
        for (int j = contador - 1; j >= 0; j--){
        printf("%d", resto[j]);
        }
        printf("\n");
    }
}

int main(){
    int num1, num2, num3, num4, num5;

    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    scanf("%d", &num4);
    scanf("%d", &num5);

    binario(num1);
    binario(num2);
    binario(num3);
    binario(num4);
    binario(num5);
    
    return 0;
}


