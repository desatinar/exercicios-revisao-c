#include <stdio.h>

int main() {
    int vetor1[10], vetor2[10], vetor3[10];

    // Leitura do primeiro vetor
    printf("Digite os 10 valores do primeiro vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("vetor1[%d]: ", i);
        scanf("%d", &vetor1[i]);
    }

    // Leitura do segundo vetor
    printf("Digite os 10 valores do segundo vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("vetor2[%d]: ", i);
        scanf("%d", &vetor2[i]);
    }

    // Construção do terceiro vetor
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            vetor3[i] = vetor1[i];  // Posições pares recebem do vetor1
        } else {
            vetor3[i] = vetor2[i];  // Posições ímpares recebem do vetor2
        }
    }

    // Exibição do terceiro vetor
    printf("\nO vetor resultante é:\n");
    for (int i = 0; i < 10; i++) {
        printf("vetor3[%d] = %d\n", i, vetor3[i]);
    }

    return 0;
}
