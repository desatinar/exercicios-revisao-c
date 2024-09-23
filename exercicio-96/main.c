#include <stdio.h>

#define TAMANHO 5

int main() {
    float vetor1[TAMANHO], vetor2[TAMANHO];
    float produto_escalar = 0;
  
    printf("Digite os %d elementos do primeiro conjunto:\n", TAMANHO);
    for (int i = 0; i < TAMANHO; i++) {
        scanf("%f", &vetor1[i]);
    }

    printf("Digite os %d elementos do segundo conjunto:\n", TAMANHO);
    for (int i = 0; i < TAMANHO; i++) {
        scanf("%f", &vetor2[i]);
    }

    for (int i = 0; i < TAMANHO; i++) {
        produto_escalar += vetor1[i] * vetor2[i];
    }
  
    printf("Primeiro conjunto: ");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%.2f ", vetor1[i]);
    }

    printf("\nSegundo conjunto: ");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%.2f ", vetor2[i]);
    }

    printf("\nProduto escalar: %.2f\n", produto_escalar);

    return 0;
}
