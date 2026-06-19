#include <stdio.h>

double calcularTarifa(int diaDaSemana, int horas){

    if((diaDaSemana < 1) || (diaDaSemana > 7) || (horas < 0)){
        return 0.0;
    }
    if((diaDaSemana == 1) || (diaDaSemana == 7)){
        return (horas * 8.00);
    }
    else{
        return (horas * 5.00);
    }
}`