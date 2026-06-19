#include <stdio.h>

int main(){
    int F;
    float N;
    
    scanf("%f %d", &N, &F);

    if (F < 75){
        printf("Mencao final: SR");
    }
    else{

        if ((N >= 0) && (N <= 2.9)){
            printf("Mencao final: II");
        }
        else if ((N >= 3.0) && (N < 5.0)){
            printf("Mencao final: MI");
        }
        else if ((N >= 5.0) && (N < 7.0)){
            printf("Mencao final: MM");
        }
        else if ((N >= 7.0) && (N < 9.0)){
            printf("Mencao final: MS");
        }
        else{
            printf("Mencao final: SS");
        }
    }
    return 0;
}