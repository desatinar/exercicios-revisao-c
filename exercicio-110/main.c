#include <stdio.h>

void ordenaVetor(int A[], int tamanho) {
    int i, j, temp;

   
    int pontoInflexao = -1;
    for (i = 0; i < tamanho - 1; i++) {
        if (A[i] > A[i + 1]) {
            pontoInflexao = i;
            break;
        }
    }


    if (pontoInflexao == -1) {
        return;
    }

 
    for (i = 0; i < pontoInflexao; i++) {
        for (j = i + 1; j < pontoInflexao; j++) {
            if (A[i] > A[j]) {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    for (i = pontoInflexao; i < tamanho - 1; i++) {
        for (j = i + 1; j < tamanho; j++) {
            if (A[i] < A[j]) {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}

int main() {
    int A[11] = {1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1};
    int tamanho = sizeof(A) / sizeof(A[0]);

    printf("Vetor original: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    ordenaVetor(A, tamanho);

    printf("Vetor ordenado: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
