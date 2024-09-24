#include <stdio.h>

int main() {
    int A[3][3], B[3][3], C[3][3] = {0};
    int i, j, k;

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
  
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            for (k = 0; k < 3; k++)
                C[i][j] += A[i][k] * B[k][j];

    printf("Matriz C:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}
