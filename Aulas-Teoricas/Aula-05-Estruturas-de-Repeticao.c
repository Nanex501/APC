#include <stdio.h>

ESTRUTURAS DE REPETICAO

//Definição: estruturas de repetição (ou loops) permitem executar um bloco de código múltiplas vezes enquanto uma condição for verdadeira.

/* 
    1.Reduz a Duplicação de código;
    2.Permite processar coleções de dados;
    3.Essencial para algoritmos iterativos;
    4.Base para muitas operações computacionais.
*/

/*--------------------------------------------------------------------------------------------*/

ESTRUTURA WHILE

//Sintaxe:

while(condicao){
    //bloco de código a ser executado
    //enquanto a condição for verdadeira
}

/* CARACTERÍSTICAS:             
    1.A condição é avaliada ANTES de cada execução do bloco;
    2.Se a condição for falsa inicialmente, o bloco nunca é executado;
    3.O bloco continua repetindo enquanto a condição permanecer verdadeira;
    4.A condição deve eventualmente se tornar falsa para evitar um loop infinito.
*/

//Exemplo:

int main () {
    int contador = 10;

    printf (" Contagem regressiva :\n");

    while ( contador > 0) {
    printf ("%d ...\ n", contador );
    contador - -; // Decrementa o contador
    }

    printf (" Lancamento !\n");

    return 0;
}

/* CONDIÇÕES NO WHILE
    1.A condição pode ser qualquer expressão lógica válida;
    2.Pode usar operadores relacionais (==, ! =, <, >, <=, >=);
    3.Pode usar operadores lógicos (&&, ||, !);
    4.Em C, qualquer valor diferente de zero é considerado verdadeiro;
    5.Zero é considerado falso.
*/

//INSTRUÇÃO BREAK: interrompe a execução do loop e transfere o controle para a próxima instrução após o loop.

/*--------------------------------------------------------------------------------------------*/
ESTRUTURA DO WHILE

//Sintaxe:

do{
    //bloco de código a ser repetido
    //pelo menos uma vez
} while(condicao);

/* CARACTERÍSTICAS
    1.O bloco de código é executado ANTES de verificar a condição;
    2.Garante que o bloco seja executado pelo menos uma vez;
    3.A condição é verificada APÓS cada execução do bloco;
    4.O loop continua repetindo enquanto a condição for verdadeira;
    5.Observe o ponto e vírgula (;) após a condição.
*/

//Exemplo: validação de entrada (um dos melhores usos para do-while) 

int main () {
    int numero ;

    do{
        printf (" Digite um numero positivo : ");
        scanf ("%d", & numero );

        if ( numero <= 0) {         //verifica um input inválido
            printf (" Valor invalido! Tente novamente .\n"); 
        }
    } while ( numero <= 0) ; //executa pelo menos uma vez

    printf (" Voce digitou o numero positivo : %d\n", numero );

    return 0;
}

/*WHILE VS. DO-WHILE
WHILE: verifica a condição ANTES da execução; execução mínima: 0 vezes; Ideal para loops que podem ser pulados;

DO-WHILE: verifica a condição DEPOIS da execução; execução mínima: UMA vez; Ideal para validação de entrada.
*/

/*--------------------------------------------------------------------------------------------*/
INSTRUCAO CONTINUE

//Definição: a intrução continue interrompe a iteração atual e passa para a próxima interação do loop.

/*CARACTERÍSTICAS
    1.Pula o restante do codigo no loop para a iteração atual;
    2.A execução continua na próxima iteração;
    3.Útil para ignorar certos casos dentro do loop ç
    4. Funciona com while, do-while e for.
*/

//EXEMPLO:

// Imprimir apenas numeros impares de 1 a 10
int main(){
    int i = 0;
    
    while (i < 10) {
        i++;

        if (i % 2 == 0) {
            continue ; // Pula os numeros pares
        }

    printf ("%d ", i); // So imprime numeros ímpares
    }
} // Saída: 1 3 5 7 9

/*--------------------------------------------------------------------------------------------*/
PREVENINDO LOOPS INFINITOS

/*
    1.Sempre garanta que a condiço eventualmente se torne falsa;
    2.Verifique se você está atualizando corretamente as variáveis da condição;
    3.Use contadores de segurança para limitar o número máximo de iterações;
    4.Considere incluir condições de saída adicionais com break;
    5.Teste seus loops com valores limite e casos extremos.
*/

/*--------------------------------------------------------------------------------------------*/
BOAS PRATICAS COM LOOPS

/*
    1.Use nomes significativos para variáveis de controle;
    2.Inclua inicialização clara antes do loop;
    3.Garanta que a condição de parada seja atingível;
    4.Atualize consistentemente as variáveis de controle dentro do loop;
    5.Evite modificar variáveis de controle em vários lugares do loop;
    6.Prefira do-while quando a execução do loop deve ocorrer pelo menos uma vez;
    7.Use while quando for possível pular completamente o loop;
    8.Evite loops muito aninhados (mais de 3 níveis).
    9. Mande um pix pro johnny (+50 reais)
*/