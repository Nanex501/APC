#include <stdio.h>

void maiorAB(int a, int b){
    if (a > b){
    printf("%d\n", a);

    }
        
    else{
    printf("%d\n", b);
        
    }

}

int main(){
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
    scanf("%d %d \n%d %d \n%d %d \n%d %d \n%d %d \n", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10);
    
    maiorAB(n1, n2);
    maiorAB(n3, n4);
    maiorAB(n5, n6);
    maiorAB(n7, n8);
    maiorAB(n9, n10);
    
    return 0;
}