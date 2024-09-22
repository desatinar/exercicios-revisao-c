#include <stdio.h>
#include <conio.h>
#include <ctype.h>

#define MAX_LENGTH 30

// função para exibir cada palavra em uma nova linha
void mostrar_palavras(char frase[]) {
    int i = 0;
    
    while (frase[i] != '\0') {
        if (frase[i] == ' ') {
            printf("\n"); // troca de linha ao encontrar espaço
        } else {
            printf("%c", frase[i]);
        }
        i++;
        
    }
    printf("\n");
}

int main() {
    char frase[MAX_LENGTH + 1]; // vetor para armazenar a frase (máx 30 caracteres + \0)
    int i = 0;
    char ch;
    
    printf("digite uma frase(máximo 30 caracteres):\n");
    
    // receber a frase caractere por caractere
    while (i < MAX_LENGTH) {
        ch = getch(); // captura o caractere sem exibir na tela
        
        if (ch == '\r') { // enter (caractere de retorno de carro '\r') finaliza a entrada
            break;
        } else if (isprint(ch)) { // apenas caracteres imprimiveis são armazenados
            frase[i] = ch;
            printf("%c", ch); // exibe o caractere digitado
            i++;
        }
    }
    
    frase[i] = '\0'; // finaliza a string
    
    printf("\n\nPalavras separadas:\n");
    mostrar_palavras(frase);  // função para mostrar cada palavra em uma linha separadas
    
    return 0;
}
