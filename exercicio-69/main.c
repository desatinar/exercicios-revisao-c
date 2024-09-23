#include <stdio.h>

int main() {
    // Declaração e atribuição de valores ao vetor
    int vetor[6] = {1, 0, 5, -2, -5, 7};

    // Exibição dos valores do vetor
    printf("Os valores do vetor são: \n");
    for (int i = 0; i < 6; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}
