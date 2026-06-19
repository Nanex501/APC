#include <stdio.h>

int a = 10, b = 3

int resultado_int

float resultado_real1 = (float) a / b; // casting
float resultado_real2 = 10.0 / 3; // literal_float

/* ------------------------------------------------------------------------------------------------------- */

OPERADOR MODULO

// bom para programar ciclos. EX: um ciclo a cada 60 min, 24h, etc.
// Também pode ser usado para determinar se um número é PAR ou ÍMPAR.
// extrair dados da minha matricula --> questão recorrente na prova. 
// EXEMPLO:

int main(){
    int matricula = 261234567;
    //como extrair o número no intervalo 1...4?
    int matricula_1_a_4 = 261234567 % 100000; // = 2612
    // utiliza-se o "100000" (10^5) para andar com a vírgula e assegurar que utlizemos apenas a parte            inteira.
    int r;

    r = m/ (1000 % 10);

return 0;
}

/* ------------------------------------------------------------------------------------------------------- */

OPERADORES DE ATRIBUICAO

int x = 10;

x += 2;   //  x = x + 20.
x -= 2;   //  x = x - 20.    
x *= 2;   //  x = x * 20.
x /= 2;   //  x = x / 20.
x %= 2;   //  x = x % 20.
    
x++ //incrementa o valor por 1 --> bom para while loops.   

int main(){

    int x = 10;

    printf("%d \n", x); // 10

    x += 20 // equivalente a escrever x = x + 20.
    printf("%d \n", x); //30

return 0;    
}

/* -------------------------------------------------------------------------------------------------------*/

PRECEDENCIA DE OPERADORES
    
()                                      ; // prioridade 1 (maior)
++, -(pre/pos), - (negacao), + (unario) ; // prioridade 2              PROPRIEDADE ASSOCIATIVA:
* , / , %                               ; // prioridade 3              Ler da esquerda para a direita.
+ , - (binario)                         ; // prioridade 4
= , += , -+, *=, /= , %=                ; // prioridade 5 (menor)

/* -------------------------------------------------------------------------------------------------------*/

FUNCOES

/*
Definição: são blocos de código que realizam tarefas específicas e podem ser reutuilizados em diferentes    partes do programa.

Importante: devem seguir a ordem "DECLARAÇÃO --> DEFINIÇÃO --> CHAMADA".
Podem ser declaradas antes ou após da função main.

Sintaxe:

    tipo_retorno nome_da_funcao(tipo_param1 param1, tipo_param2 param2, ...) {
    
        return valor_de_retorno;   (opcional, dependendo do tipo)
    }


"nome_da_funcao" é o identificador da função.
"parâmetros" --> dados que a função recebe para processar.
corpo --> instruções que serão executadas.

OBS: NÃO podemos declarar funções dentro de funções.  
    
EXEMPLO:                                                                   */

placeholder;

    
int celsius_para_fahrenheit(float c){       //Declaração
    float f;                                //Definição 
    f = c * 1.8 + 32
    
    return f;                               //Retorno de valor
}

int main(){
    float temp = 10;
    
    printf("%.1f graus Celsius são", temp)

    temp = celsius_para_fahrenheit(temp)    //Chamada
        
    printf(" %f", temp);    

return 0;    
}
    