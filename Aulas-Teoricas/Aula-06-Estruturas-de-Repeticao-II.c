#include <stdio.h>


//for: ideal para loops com contador ou número conhecido de iterações

//SINTAXE

for (inicializacao; condicao; incremento){
    //bloco de codigo a ser repetido
}

//1.inicializacao-> 2.condicao -> 3.codigo -> 4.incremento (Mudanca na variavel)
//OBS: dentro dos argumentos do for, apenas dois ";" são necessários, porém, isso resulta num loop infinito.

//EXEMPLO:

int main(){
    int i;
    
    printf("Contagem de 1 a 10:\n");

    for(i = 1; i <= 10; i++){
        printf("%d", i);
    }

    return 0;
}