#include <stdio.h>

STRINGS

//Definição: Em C, uma string é um ARRAY de caracteres terminado por um caractere nulo ('\0')

/*Observações 
1.Não é um tipo de dado básico em C (diferente de outras linguagens)
2.Implementada como um array de caracteres (char) --> ocupa uma região contígua da memória
3.O caractere nulo ('\0') marca o FIM da string
4.O COMPRIMENTO da string é o número de caracteres até o '\0'
5.O tamanho do array deve ser pelo menos um a mais que o comprimento da string para o caractere nulo --> Uma string de n caracteres precisa de um array de pelo menos n+1 elementos
*/

/*---------------------------------------------------------------------------------------------*/

INICIALIZACAO DE STRINGS 

 // Declaração com tamanho explícito
 char nome [50]; // Pode armazenar até 49 caracteres + o nulo

 // Inicialização durante a declaração
 char cidade [20] = " Sao Paulo "; // O compilador adiciona ’\0 ’

 // Tamanho automático (contando o nulo)
 char pais [] = " Brasil "; // Equivalente a char pais [7]

 // Inicializacao por caractere
 char vogais [] = {’a’, ’e’, ’i’, ’o’, ’u’, ’\0 ’};

 // Inicializacao vazia
 char buffer [100] = ""; // String vazia (só o nulo)


//variavel que armazena o local na memoria de outra variavel (de tipo primitivo) --> por analogia: quero visitar a casa de um amigo, porém, não sei o número do casa dele. No entanto, conheco o numero da casa de uma pessoa que sabe o endereço da casa do meu amigo. Dessa forma, chego na casa dessa pessoa, pergunto qual o numero da outra, e ela me fornece a posição (na memória) da casa do meu amigo.

/*---------------------------------------------------------------------------------------------*/

ENTRADA MAIS SAIDA DE STRINGS

int main(){
 char nome [67];

 // Saida de string com printf
 printf (" Digite seu nome : ") ;

 // Entrada de string com scanf ( limitacao: para no primeiro espaco )
 scanf ("%s", nome ); // NAO use & (e comercial) com strings

 // S a d a da string lida
 printf ("Ola , %s!\n", nome );
    
 return 0;
}
    //Unico vetor que le com scanf eh string

//CUIDADO! O scanf com %s não limita a quantidade de caracteres lidos e pode causar buffer overflow.

//passar uma vetor para uma variavel --> eu passo o ENDERECO do vetor para a funcao

/*---------------------------------------------------------------------------------------------*/

LEITURA SEGURA DE STRINGS

// Usando scanf com limitador
 char nome [50];
 scanf (" %49 s", nome ); // Le no maximo 49 caracteres + nulo

// Usando fgets (le uma linha inteira , incluindo e s p a o s )
 char endereco [100];
 printf (" Digite seu endereco : ");
 fgets ( endereco , 100 , stdin ); // Le ate 99 caracteres ou \n

// Limpando o buffer apos scanf
 scanf ("%s", nome ) ;
 while ( getchar () != ’\n’); // Limpa caracteres ate o fim da linha

 // Combinando scanf e fgets
 scanf ("%s", nome ) ;
 getchar () ;                 // Consome o \n deixado pelo scanf
 fgets ( endereco , 100 , stdin );

//Nota sobre fgets:

/*---------------------------------------------------------------------------------------------*/
BIBLIOTECA STRING.H

//Pode cair na prova --> trazer impresso

/*--------------------------------------------------------------------------------------------*/
CONVERSAO DE STRINGS PARA NUMEROS

//A biblioteca stdlib.h fornece funções para converter strings em numeros:

#include <stdlib.h>
    
 int main () {
 char num_str1 [] = "42";
 char num_str2 [] = " 3.14159 ";
 char num_str3 [] = "0 xFF "; // Hexadecimal
    
 // Conversao para inteiros
 int num1 = atoi ( num_str1 ) ; // String para int
 printf ("%s -> %d\n", num_str1 , num1 );

 // Conversao para ponto flutuante
 double num2 = atof ( num_str2 ); // String para double
 printf ("%s -> %f\n", num_str2 , num2 );

 // Conversao com base especifica
 int num3 = strtol ( num_str3 , NULL , 16) ; // Base 16 ( hex )
 printf ("%s -> %d\n", num_str3 , num3 );
 return 0; 
}

//OBS: para converter números em strings, basta usar sprintf() ou snprintf()

/*--------------------------------------------------------------------------------------------*/
MANIPULACAO DE STRINGS

//A biblioteca ctype.h fornece funções para manipulação de caracteres

/*--------------------------------------------------------------------------------------------*/
BOAS PRATICAS COM STRINGS

/*
1.Sempre reserve espaço suficiente para o caractere nulo
2.Use funções seguras que limitam o número de caracteres (strncpy, strncat)
3.Verifique retornos de funções como strtok e strchr para NULL
4.Evite buffer overflow verificando limites antes de manipular strings
5.Inicialize strings vazias com em vez de deixá-las sem inicialização
6.Prefira fgets a scanf para ler strings com espaços
7.Lembre-se de remover o \n quando usar fgets
8.Use const para parâmetros de string que não devem ser modificados
9.Verifique retornos de funções de conversão (atoi, atof) para valores inválidos
10.Documente o formato esperado de strings em interfaces de função
*/

//Desafio: manipular a função meu_strcpy no slide para não precisar da linha 21
//OBS: scanf ignora espaco