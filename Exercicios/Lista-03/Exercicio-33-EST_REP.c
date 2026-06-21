#include <stdio.h>

int main(){
    int num, bits_1 = 0;

    scanf("%d", &num);

    while(num != 0){
        if(num % 2 == 1){
            bits_1++;
        }
        num = num / 2;
    }

    printf("Bits '1': %d", bits_1);

    return 0;
}
