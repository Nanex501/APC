#include <stdio.h>

int Decimal_para_Binario(int num){
    int counter = 0;
    int binary[1000];

    scanf("%d", &num);

    while(num != 0){
        binary[counter] = num % 2;
        num = num / 2;
        counter++;
    }

    for(int counterPrint = counter - 1; counterPrint >= 0; counterPrint--){
        printf("%d", binary[counterPrint]);
    }

    return 0;
}