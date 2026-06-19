#include <stdio.h>

char atribuirConceito(int nota){
    
    if((nota < 0) || (nota > 100)){
        return 'I';
    }

    if((nota >= 90) && (nota <= 100)){
        return 'A';
    }
    else if((nota >= 80) && (nota <= 89)){
        return 'B';
    }
    else if((nota >= 70) && (nota <= 79)){
        return 'C';
    }
    else if((nota >= 60) && (nota <= 69)){
        return 'D';
    }
    else{
        return 'F';
    }
}