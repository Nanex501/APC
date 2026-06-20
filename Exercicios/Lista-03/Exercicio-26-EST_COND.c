#include <stdio.h>

int main(){
    int num, palindromo, num_rev = 0;

    scanf("%d", &num);
    palindromo = num;

    while (num > 0) {
        num_rev = num_rev * 10 + num % 10;
        num = num / 10;
    }

    if(num_rev == palindromo){
        printf("SIM");
    }
    else{
        printf("NAO");
    }

    return 0;
}
