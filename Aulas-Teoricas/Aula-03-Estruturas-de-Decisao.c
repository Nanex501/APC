#include <stdio.h>

maratona APC --> C++ 
    strings  

/*--------------------------------------------------------------------------------------------*/
ESTRUTURAS DE DECISAO

//Definição: em programação, a tomada de decisões permite que o programa escolha diferentes caminhos de execução com base em decisões. 

/*--------------------------------------------------------------------------------------------*/

OPERADORES RELACIONAIS
//Utilizados para comparar valores e retornar verdadeiro (1) ou falso (0). Em C, não existem booleanos, apenas 1 ou 0.

int x, y;

// OPERADOR      SIGNIFICADO          EXEMPLO
      ==    |      Igual a        | 5 == 5 é verdadeiro ;    //cuidado para não confundir com o 
      !=    |    Diferente de     | 5 != 7 é verdadeiro ;    //operador de atribuição ("=").
      >     |     Maior que       | 8 > 4  é verdadeiro ;
      <     |     Menor que       | 3 < 9  é verdadeiro ;
      >=    | Maior ou igual que  | 5 >= 5 é verdadeiro ;
      <=    | Menor ou igual que  | 7 <= 3 é falso      ;

p
/*---------------------------------------------------------------------------------------------*/

OPERADORES LOGICOS
//Utilizados para combinar ou negar expressões lógicas.

  OPERADOR      SIGNIFICADO            EXEMPLO
      &&    |       AND        | (x > 0) && (x > 10)    ;
      ||    |       OR         | (x > 0) || (x > 100)   ;
      !     |       NOT        |     !(x == 0)          ;

/*Tabela Verdade do Operador && (AND):
   Condição 1    Condição 2      Resultado
    True     |     True      |      True     //Ambas condições devem ser verdadeiras para que
    True     |     False     |      False    //o resultado também seja.
    False    |     True      |      False
    False    |     False     |      False
    
  Tabela Verdade do Operador || (OR):
   Condição 1    Condição 2      Resultado
    True     |     True      |      True
    True     |     False     |      True
    False    |     True      |      True     
    False    |     False     |      False    //Falso apenas para duas condições falsas.
    
  Tabela Verdade do Operador ! (NOT):
          Condição    |    Resultado
            True      |      False
            False     |      True
*/  
placeholder;
/*-------------------------------------------------------------------------------------------*/ ESTRUTURA IF

//A condição é uma expressão que avalia para VERDADEIRO(1) ou FALSO(0).
//Se a expressão for verdadeira, o código é executado, caso contrário, o bloco é ignorado.

//SINTAXE:

int main(){

    if (condicao) {             // note a ausência de ponto e vírgula.
    
    // bloco de codigo executado se a condicao for verdadeira
    }
    
return 0;
}

// Para condições simples com apenas uma instrução, as chaves são opcionais.
//EX:  if (x >= 0)
//     código que rodará ser for verdadeiro.

/*--------------------------------------------------------------------------------------------*/
ESTRUTURA IF-ELSE

//O bloco ELSE é executado quando a condição do if é falsa.
//Permite que o programa escolha entre dois caminhos alternativos, pois sempre um, e apenas um, dos blocos de código será executado (nunca ambos).

//SINTAXE:
int main(){
 if ( condicao ) {
    // bloco executado se a condicao for verdadeira
 } else {
    // bloco executado se a condicao for falsa
 }

return 0;
}

/*--------------------------------------------------------------------------------------------*/
ESTRUTURA IF-ELSE-IF
    
//Permite testar múltiplas condições em sequência, pois somente o primeiro bloco cuja condição seja verdadeira será executado.
//O bloco "ELSE" final é opcional.

//SINTAXE:

int main(){
 if ( condicao1 ) {
    // codigo executado se condicao1 for verdadeira
 } else if ( condicao2 ) {
    // codigo executado se condicao1 for falsa E condicao2 for verdadeira
 } else {
    // codigo executado se todas as condicoes anteriores forem falsas
 }
    
return 0;
}

/*--------------------------------------------------------------------------------------------*/
ESTRUTURAS CONDICIONAIS ANINHADAS
//DEFINIÇÃO: Estruturas condicionais aninhadas são estruturas if-else dentro de outras estruturas if-else.
//EXEMPLO:
int main(){
 if ( condicao1 ) {
    // codigo
    if ( condicao2 ) {
            // codigo executado se condicao1 E condicao2 forem verdadeiras
     } else {
            // codigo executado se condicao1 for verdadeira E condicao2 for falsa
     }
 } else {
 // codigo executado se condicao1 for falsa
    if ( condicao3 ) {
        // codigo executado se condicao1 for falsa E condicao3 for verdadeira
 }

return 0;
}

//Estruturas muito aninhadas podem tornar o código difícil de ler e manter. Use com moderação!