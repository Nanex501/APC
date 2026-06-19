#include <stdio.h>

void hexadecimal(int n){
    printf("0x%X\n", n)
}

int main(){
    int num1, num2, num3, num4, num5;

    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    scanf("%d", &num4);
    scanf("%d", &num5);

    hexadecimal(num1);
    hexadecimal(num2);
    hexadecimal(num3);
    hexadecimal(num4);
    hexadecimal(num5);
   
    
    return 0;
}
