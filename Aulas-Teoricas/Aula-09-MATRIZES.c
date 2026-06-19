#include <stdio.h>

MATRIZES

//Definição: uma matriz (ou array bidimensional) é uma estrutura de dados que organiza elementos em linhas e colunas, formando uma tabela.

/*OBSERVAÇÕES
1.Extensão natural dos vetores para duas dimensões
2.Ideal para representar dados tabulares e estruturas bidimensionais
3.Em C, matrizes são aramazenadas como "arrays de arrays"
4.Os elementos são acessados usando DOIS ÍNDICES: linhas e colunas
*/

//SINTAXE:
tipo nome_da_matriz[linhas][colunas];

//OBS:Ambas as dimensões devem ser constantes ou expressões constantes
//OBS2: Os elementos não são inicializados automaticamente

// Exemplos :
int matriz [3][4];              // Matriz 3x4 de inteiros
float temperaturas [7][24];     // Temperaturas para cada hora da semana
char tabuleiro [8][8];          // Tabuleiro de xadrez
double altitudes [100][100];    // Grade de altitudes

/*---------------------------------------------------------------------------------------------*/

INICIALIZACAO DE MATRIZES

int matriz1 [2][3] = {
        {1, 2, 3} ,    // Primeira linha
        {4, 5, 6}      // Segunda linha
    };


 // Inicialização parcial ( restante preenchido com zeros )
 int matriz2 [3][3] = {
        {1, 2, 3} ,
        {4, 5} ,       // Ultimo elemento sera 0
        {7}             // Ultimos dois elementos serao 0
    };


 // Inicialização linear ( sem chaves internas )
 int matriz3 [2][3] = {1, 2, 3, 4, 5, 6}; // Equivalente a matriz1


 // Omitindo primeira dimensao ( deve ser deduzida )
 int matriz4 [][3] = {
 {1, 2, 3} ,
 {4, 5, 6}
 };         // Compilador deduz que ha 2 linhas
