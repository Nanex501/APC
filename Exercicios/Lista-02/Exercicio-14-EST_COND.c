#include <stdio.h>

int main(){
    int IQA, polen;

    scanf("%d %d", &IQA, &polen);

    if (IQA > 150){
        printf("Alerta Vermelho");
    }
    else if ((IQA > 100) || (polen > 80)){
        printf("Alerta Laranja");
    }
    else if ((IQA > 50) || (polen > 50)){
        printf("Alerta Amarelo");
    }
    else{
        printf("Alerta Verde");
    }

    return 0;
}