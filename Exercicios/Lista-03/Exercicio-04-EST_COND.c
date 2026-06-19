#include <stdio.h>

int main(){
    char q1, q2, q3, q4;
    float nota = 0;

    scanf("%c %c %c %c", &q1, &q2, &q3, &q4);

    if (q1 == 'C'){
        nota += 1.0;  
    }
    if (q2 == 'B'){
        nota += 7.0;
    }
    if (q3 == 'C'){
        nota += 1.5;
    }
    if (q4 == 'B'){
        nota += 0.5;
    }

    printf("%.1f", nota);

    return 0;
}