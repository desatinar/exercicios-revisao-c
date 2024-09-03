#include <stdio.h>

void ordenaVetor(double vetor[], int tamanho) {
    int i, j;
    double temp;
    for (i = 0; i < tamanho - 1; i++) {
        for (j = i + 1; j < tamanho; j++) {
            if (vetor[i] > vetor[j]) {
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
}
int main() {
    int i;
    double vetor[10];
    // Leia o vetor com 10 números reais
    for (i = 0; i < 10; i++) {
        printf("Digite o número real %d: ", i + 1);
        scanf("%lf", &vetor[i]);
    }
    // Ordena o vetor
    ordenaVetor(vetor, 10);
    // Escreve os elementos do vetor ordenado
    printf("Vetor ordenado:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");

    return 0;
}
