#include <stdio.h>

int identificarZonaCardiaca(int idade, int bpmAtual){
    int FCM;
    
    if((idade <= 0) || (bpmAtual <= 0)){
        return 0;
    }

    FCM = 220 - idade;

    if(bpmAtual < (0.6 * FCM)){
        return 1;
    }
    else if((bpmAtual >= (0.6 * FCM)) && (bpmAtual < (0.7 * FCM)){
        return 2;
    }
    else if((bpmAtual >= (0.7 * FCM)) && (bpmAtual < (0.8 * FCM)){
        return 3;
    }
    else if((bpmAtual >= (0.8 * FCM)) && (bpmAtual < (0.9 * FCM)){
        return 4;
    }
    else{
        return 5;
    }
}