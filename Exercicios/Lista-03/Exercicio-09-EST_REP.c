#include <stdio.h>

int main(){
    int a, b;
    char operacao;

    do{
        scanf("%c", &operacao);
        
        if(operacao == 'S'){
            printf("Saindo...");
            return 0;
        }
        scanf("%d", &a);
        scanf("%d", &b);
        
        if(operacao == '+'){
            printf("Resultado: %d\n", (a + b));
        }
        if(operacao == '*'){
            printf("Resultado: %d\n", (a * b));
        }
        if(operacao == '/'){
            printf("Resultado: %d\n", (a / b));
        }

    } while(operacao != 'S');

    return 0;
}
