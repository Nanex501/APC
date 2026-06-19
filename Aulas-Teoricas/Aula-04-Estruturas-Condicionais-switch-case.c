#include <stdio.h>

ESTRUTURA SWITCH CASE

//Definição: o Switch-case é uma estrutura de controle que permite escolher entre múltiplas altenativas com base no valor de uma expressão. 
//OBS: útil para realizar uma "triagem" bem específica.

//SINTAXE:

int main(){
    
    switch ( expressao ) {
        case valor1 :
            // código executado se expressao == valor1
            break;
        case valor2 :
            // código executado se expressao == valor2
            break;
        // ... mais casos ...
        default :
            // código executado se expressao não corresponder a nenhum caso (não é obrigatório)
 }

    return 0;
}

/* FUNCIONAMENTO DO SWITCH-CASE:

    1.A expressão no switch é avaliada uma única vez.
    2.O valor da expressão é comparado com os valores de cada case.
    3.Se houver correspondência, o código do case é executado.
    4.A execução continua até encontrar um break ou o fim do switch.
    5.Se nenhum case corresponder, o bloco default é executado (se existir).
    6.Um Switch pode ser aninhado dentro de outro switch (+complexidade).

    IMPORTANTE! A instrução break é essencial para sair do switch após executar um caso. Sem ela, a execução "cai" (comportamento "fall-through") para os próximos casos.

*/

/* LIMITAÇÕES DO SWITCH-CASE:

    1.A expressão no switch deve resultar em um tipo inteiro (int, char, enum).
    2.Não funciona com strings (em C) ou números reais (float/double).
    3.Cada valor de case deve ser uma constante ou expressão constante.
    4.Não permite faixas de valores ou expressões relacionais diretamente.
    5.Não é possível usar variáveis para definir os casos

*/

/*---------------------------------------------------------------------------------------------*/
OPERADOR TERNARIO

//Definição: o operador ternário é uma forma compacta de expressar uma condição simples if-else.

//SINTAXE:
int main(){
    
resultado = ( condicao ) ? valorSeVerdadeiro : valorSeFalso ;

    return 0;
}

//O operador ternário é útil para atribuições condicionais SIMPLES, o que torna o código mais conciso.
//Para lógica complexa, prefira if-else ou switch-case.
//O operador ternário também pode ser aninhado dentro de outro operador ternário, mas isso prejudica a legibilidade.

//Exemplo: 

int main(){
    // Versao com if - else
    int max ;
    
    if (a > b) {
        max = a;
    } else {
        max = b;
    }

// Versao com operador ternario (mais concisa)
 int max = ( a > b) ? a : b;
    
    return 0;
}

/* QUADRO-RESUMO:


               CRITÉRIO                IF-ELSE
    Tipo de comparação
    Tipos de dados suportados
    Legibilidade para multi. casos
    Adequado para

*/

/*---------------------------------------------------------------------------------------------*/
BOAS PRATICAS COM SWITCH CASE

/*
1.Sempre inclua uma instrução break ao final de cada case.
2.Sempre inclua um caso default para tratar valores não esperados.
3.Comente intencionalmente se omitir um break (para mostrar que é proposital).
4.Evite switch-case aninhados quando possível.
5.Considere usar enum para tornar o código mais legível.
6.Use switch-case para igualdades exatas; use if-else para expressões relacionais.
7.Mantenha a indentação consistente para melhorar a legibilidade.
*/