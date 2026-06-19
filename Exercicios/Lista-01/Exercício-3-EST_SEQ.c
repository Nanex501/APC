#include <stdio.h>

int main(){
    char c1, c2, c3;

    scanf(" %c", &c1);
    scanf(" %c", &c2);
    scanf(" %c", &c3);

    printf("%c", c1);
    printf("%c", c2);
    printf("%c \n", c3);
    
    printf("%c \n", c1);
    
    printf("%c", c2);
    printf("%c \n", c2);
    
    printf("%c", c3);
    printf(" %c", c3);
    printf(" %c \n", c3);
    
    printf("X == %c,", c1);
    printf(" Y == %c,", c2);
    printf(" Z == %c \n", c3);
    
    printf("X != %c,", c2);
    printf(" Y != %c,", c1);
    printf(" Z == %c", c3);
    

  return 0;
}