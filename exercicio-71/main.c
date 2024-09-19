#include <stdio.h>

int main() {
    int A[6];
    
    printf("Digite 6 numeros inteiros para o vetor:\n");
    
    for (int i = 0; i < 6; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }
    int soma = A[0] + A[1] + A[5];

    printf("A soma de A[0], A[1] e A[5] e: %d\n", soma);

    return 0;
}
