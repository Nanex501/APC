#include <stdio.h>

float recomendarPlano(int categoria){
    double valorDoPlano = 0;

    switch(categoria){
        case 1:
                valorDoPlano = 39.90;
                return valorDoPlano;
                break;
        case 2:
                valorDoPlano = 59.90;
                return valorDoPlano;
                break;
        case 3:
                valorDoPlano = 89.90;
                return valorDoPlano;
                break;
        case 4:
                valorDoPlano = 119.90;
                return valorDoPlano;
                break;
        default:
                return 0.0;
    }

    int plano;

    printf("1: Consumo Baixo (até 5GB)");
    printf("2: Consumo Médio (de 6GB a 20GB)");
    printf("3: Consumo Alto (de 21GB a 50GB)");
    printf("4: Consumo Ilimitado (acima de 50GB)");

    scanf("%d", &plano);
    printf("%.2f", recomendarPlano(plano));
}