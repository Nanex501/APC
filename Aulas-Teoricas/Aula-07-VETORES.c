#include <stdio.h>

VETORES

//Definição: um vetor (ou array unidimensional) é uma estrutura de dados que armazena uma coleção de elementos do MESMO TIPO sob um único nome, com acesso através de índices (posição do elemento).

//OBS: em C, o primeiro índice é "0". Os índices são contíguos na memória.
//OBS: segmentation fault error --> tentativa de acessar espaço de memória reservado para outro processo

//SINTAXE:
tipo nome_do_vetor[Tamanho];

//Exemplos:

int numeros[10]; //Vetor com espaço para até 10 números inteiros

/*---------------------------------------------------------------------------------------------*/

INICIALIZACAO DE VETORES

//Inicialização na declaração
int numeros[5] = {10, 20, 30, 40, 50};

//Inicialização parcial (restante preenchido com zeros)
int valores[5] = {5, 10, 15}; //Equivale a {5, 10, 15, 0, 0}

//Inicialização com tamanho implícito
int dias[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//O compilador determina o tamanho (12)

//Inicializacao com zeros
int zeros[100] = {0}; //todos os elementos são zero
                                                        //Estruturas equivalentes.
int zeros[100] = {}; //todos os elementos são zero

//Inicializacao manual (elemento por elemento)

float precos[3];
precos[0] = 10.5;  //observe que o primeiro elemento ocupa a posicao "zero".
precos[1] = 20.75;
precos[2] = 15.99;

/*---------------------------------------------------------------------------------------------*/

INDICES DE VETORES

//Só fazemos operações com os elementos dos vetores, não com os vetores em si.

int numeros[5] = {10, 20, 30, 40, 50};

//Acesso para leitura
printf("Elemento na posicao 2: %d\n", numeros[1]); //20

//Acesso para modificação
numeros[3] = 45;

//Usando variaveis como indices
int i = 4;
printf("Elemento na posicao %d: %d\n", i, numeros[i]);

//Operacoes com elementos
numeros[0] + numeros[1] = numeros[2] //10 + 20 = 30

/*---------------------------------------------------------------------------------------------*/

TAMANHO DE UM VETOR

//em C, para obter o tamanho de um vetor, usamos o operador "sizeof" (da biblioteca <stdio.h>)
//Cada elemento de um vetor de inteiros possui 4 bytes.

//Exemplo: encontrar o maior valor de um vetor

int encontrar_maior(int vetor[], int tamanho){
    int maior = vetor[0];
    int i;

    for(i = 1; i < tamanho; i++)}
    if (vetor[i] > maior){
        maior = vetor[i]
    }
}

//Exemplo 2: Calcular a media de valores




//Exemplo 3:contar ocorrencias de um valor especifico
int contar_ocorrencias(int vetor[], int tamanho, int valor){
    int contador = 0, i;

    for(i = 0; i < tamanho; i++){
        if(vetor[i] == valor){
            contador++;
        }
    }

    return contador;
}

//Exemplo 4: copiar um vetor --> útil passagem de parametro por valor (primitivo) [não repercute fora da função] vs. por referencia (nao primitivo)

//Exemplo 5: inverter um vetor (in-place)
void inverter_vetor(int vetor[], int tamanho){
    int i, temp;

    for(i = 0; i < tamanho / 2; i++){
        temp = vetor[i]
            vetor[i] = vetor[tamanho - 1 - i];
            vetor[tamanho - 1 - i] = temp;
    }
}