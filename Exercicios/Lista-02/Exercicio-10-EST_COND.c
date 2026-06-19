#include <stdio.h>

int main(){
    float salario, reajuste, salario_reajustado;
    scanf("%f", &salario);

    if ((salario >= 0) && (salario <=1000.00)){
        salario_reajustado = salario * 1.2;
        reajuste = salario * 0.2;
        
        printf("Novo salario: %.2f\n", salario_reajustado);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 20%%");
    }
    else if ((salario >= 1000.01) && (salario <=2000.00)){
        salario_reajustado = salario * 1.15;
        reajuste = salario * 0.15;
        
        printf("Novo salario: %.2f\n", salario_reajustado);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 15%%");
    }
    else if ((salario >= 2000.01) && (salario <=3000.00)){
        salario_reajustado = salario * 1.1;
        reajuste = salario * 0.1;
        
        printf("Novo salario: %.2f\n", salario_reajustado);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 10%%");
    }
    else{
        salario_reajustado = salario * 1.05;
        reajuste = salario * 0.05;
        
        printf("Novo salario: %.2f\n", salario_reajustado);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 5%%");
    }

    return 0;
}