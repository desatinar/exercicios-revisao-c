#include <stdio.h>
#include <stdlib.h>

int recebe_vetor(int **vetor) {
    int n;
    printf("escreva o tamanho do vetor: ");
    scanf("%d", &n);

    if (n <= 0) {
        return 0;
    }
    *vetor = (int *)malloc(n * sizeof(int));
    if (*vetor == NULL) {
        return 0;
    }
    printf("escreva os valores do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &(*vetor)[i]);
    }
    return n;
}

int main() {
    int *vetor;
    int n, i;

    n = recebe_vetor(&vetor);
    if (n == 0) {
        printf("Erro :/ .\n");
        return 1;
    }

    printf("parabens! vetor criado com sucesso :) \n");
    for (i = 0; i < n; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    free(vetor);

    return 0;
}
