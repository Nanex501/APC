#include <stdio.h>

int main(){
    int num;

    do{
        printf("1 - Opcao A\n2 - Opcao B\n3 - Opcao C\n0 - Sair\nEscolha uma opcao: ");

        scanf("%d", &num);

        switch(num){
            case 0:
                printf("\nSaindo...");
                break;
            case 1:
                printf("\nVoce escolheu a Opcao A\n\n");
                break;
            case 2:
                printf("\nVoce escolheu a Opcao B\n\n");
                break;
            case 3:
                printf("\nVoce escolheu a Opcao C\n\n");
                break;
            default:
                printf("\nOpcao invalida!\n\n");
            }
    } while(num != 0);

    return 0;
}
