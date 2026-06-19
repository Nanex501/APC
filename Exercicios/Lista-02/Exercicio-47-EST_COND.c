#include <stdio.h>

int main(){
    int num;

    scanf("%d", &num);

    if(num == 0){
        int a;
        char b;

        scanf("%d^%c", &a, &b);

        if(a == 0)
            printf("0");
        else{
            printf("%d^%c.ln(%d)", a, b, a);
        }
    }
    else if(num == 1){
        int b;
        char a;

        scanf(" %c^%d", &a, &b);

        if(b == 0)
            printf("0");
        else{
            printf("%d%c^%d", b, a, b - 1);
        }
    }
    return 0;
}