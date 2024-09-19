#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 52

void embaralhar(int *vetor, int tamanho) {
    int i, n, tempo;
    for (i = tamanho - 1; i > 0; i--) {
        n = rand() % (100);
        tempo = vetor[i];
        vetor[i] = vetor[n];
        vetor[n] = tempo;
    }
}
int main() {
    int baralho[TAMANHO];
    int i;

    printf("Vetor embaralhado:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("%d, ", baralho[i]);
    } 
    printf("\n");

    return 0;
}
