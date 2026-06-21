#include <stdio.h>

int main(){
    int quantidade_caracteres, digitos = 0, vogais = 0, consoantes = 0, outros = 0;

    scanf("%d", &quantidade_caracteres);

    for(int counter = 0; counter <= quantidade_caracteres -1 ; counter++){
        char caractere;

        scanf(" %c", &caractere);

        if(caractere == '0' || caractere == '1' || caractere == '2' || caractere == '3' || caractere == '4' || caractere == '5' || caractere == '6' || caractere == '7' || caractere == '8' || caractere == '9'){
            digitos++;
        }
        else if(caractere == 'a' || caractere == 'A' || caractere == 'e' || caractere == 'E' || caractere == 'i' || caractere == 'I' || caractere == 'o' || caractere == 'O' || caractere == 'u' || caractere == 'U'){
            vogais++;
        }
        else if(caractere == 'b' || caractere == 'B' || caractere == 'c' || caractere == 'C' || caractere == 'd' || caractere == 'D' || caractere == 'f' || caractere == 'F' || caractere == 'g' || caractere == 'G' || caractere == 'h' || caractere == 'H' || caractere == 'j' || caractere == 'J' || caractere == 'k' || caractere == 'K' || caractere == 'l' || caractere == 'l' || caractere == 'm' || caractere == 'M' || caractere == 'n' || caractere == 'N' || caractere == 'p' || caractere == 'P' || caractere == 'q' || caractere == 'Q' || caractere == 'r' || caractere == 'R' || caractere == 's' || caractere == 'S' || caractere == 't' || caractere == 'T' || caractere == 'u' || caractere == 'U' || caractere == 'v' || caractere == 'V' || caractere == 'w' || caractere == 'W' || caractere == 'x' || caractere == 'X' || caractere == 'y' || caractere == 'y' || caractere == 'z' || caractere == 'Z'){
            consoantes++;
        }
        else{
            outros++;
        }
        
    }
    
    printf("Vogais: %d\nConsoantes: %d\nDigitos: %d\nOutros: %d", vogais, consoantes, digitos, outros);
        
    return 0;
}
