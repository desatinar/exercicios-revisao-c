#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define NUM_PALAVRAS 10
#define TAMANHO_MAX_PALAVRA 20

char palavras[NUM_PALAVRAS][TAMANHO_MAX_PALAVRA] = {
    "programacao", "computador", "teclado", "monitor", "internet", 
    "codigo", "desenvolvedor", "tecnologia", "sistema", "software"
};

void obterPalavraAleatoria(char palavra[]) {
    int indice = rand() % NUM_PALAVRAS;
    strcpy(palavra, palavras[indice]);
}

int main() {
    srand(time(NULL)); 

    char entrada[TAMANHO_MAX_PALAVRA];
    char palavraAleatoria[TAMANHO_MAX_PALAVRA];
    int palavrasCorretas = 0;
    int palavrasErradas = 0;

    printf("Teste de velocidade de digitação. Você tem 1 minuto.\n");
    printf("Digite as palavras exibidas e pressione ENTER.\n");
    printf("Pressione ENTER para começar...\n");
    getchar();

    time_t inicio = time(NULL); 

    while (1) {
        time_t agora = time(NULL);
        if (agora - inicio >= 60) {
            break;
        }

        obterPalavraAleatoria(palavraAleatoria);
        printf("Digite a palavra: %s\n", palavraAleatoria);
        
        scanf("%s", entrada);

        if (strcmp(entrada, palavraAleatoria) == 0) {
            palavrasCorretas++;
        } else {
            palavrasErradas++;
        }
    }

    printf("Tempo esgotado!\n");
    printf("Palavras corretas: %d\n", palavrasCorretas);
    printf("Palavras erradas: %d\n", palavrasErradas);

    return 0;
}
