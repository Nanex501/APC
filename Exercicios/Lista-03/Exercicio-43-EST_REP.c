#include <stdio.h>

int main(){
    int num;

    scanf("%d", &num);

    printf("Fatores:");
    for(int divisor = 2; divisor <= num; divisor++){
        while(num % divisor == 0){
            printf(" %d", divisor);
            num = num / divisor;
        } 
    }
    
    return 0;
}
