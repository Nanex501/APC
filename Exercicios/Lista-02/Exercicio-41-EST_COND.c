#include <stdio.h>

int main(){
    int v;

    scanf("%d", &v);

    if(v < 119){
        printf("Depressao/Tempestade Tropical");
    }
    else if((v >= 119) && (v < 154)){
        printf("Furacao Categoria 1");
    }
    else if((v >= 154) && (v < 178)){
        printf("Furacao Categoria 2");
    }
    else if((v >= 178) && (v < 209)){
        printf("Furacao Categoria 3 (Grande Furacao)");
    }
    else if((v >= 209) && (v <= 251)){
        printf("Furacao Categoria 4 (Grande Furacao)");
    }
    else{
        printf("Furacao Categoria 5 (Grande Furacao)");
    }

    return 0;
}