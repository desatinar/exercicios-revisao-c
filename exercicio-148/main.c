#include <stdio.h>

void readMatrix(int matrix[3][3], char name) {
    printf("Digite os elementos da matriz %c (3x3):\n", name);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c[%d][%d]: ", name, i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[3][3], char name) {
    printf("Matriz %c:\n", name);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrices(int A[3][3], int B[3][3], int C[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[3][3], B[3][3], C[3][3];

    readMatrix(A, 'A');
    readMatrix(B, 'B');

    multiplyMatrices(A, B, C);

    printf("Resultado da multiplicação (C = A * B):\n");
    printMatrix(C, 'C');

    return 0;
}
