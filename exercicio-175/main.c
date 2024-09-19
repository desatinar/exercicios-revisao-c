#include <stdio.h>
#define T 3

void preencherMatriz(int matriz[T][T]) {
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < T; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}
void iMatriz(int matriz[T][T]) {
    printf("Matriz:\n");
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < T; j++) {
            printf("%d ", matriz[i][j]);
        }
    }
}
void multiMatrizes(int A[T][T], int resultado[T][T]) {
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < T; j++) {
            resultado[i][j] = 0; 
            
            for (int k = 0; k < T; k++) {
                resultado[i][j] += A[i][k] * A[k][j];
            }
        }
    }
}
int main() {
    int A[T][T];
    int resultado[T][T];
    
    preencherMatriz(A);
    multiMatrizes(A, resultado);

    printf("A matriz A^2 eh:\n");
    iMatriz(resultado);

    return 0;
}
