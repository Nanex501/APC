#include <stdio.h>

int main(){
    int num;

    scanf("%d", &num);

    for(int counter = 1; counter <= 10; counter++){
        printf("%d x %d = %d\n", num, counter, (num * counter));
    }

    return 0;
}
