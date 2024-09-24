int main() {
    int A[10][10];
    int i, j;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (i < j) {
                A[i][j] = 2*i + 7*j - 2;
            } else if (i == j) {
                A[i][j] = 3*pow(i, 2) - 1;
            } else {
                A[i][j] = 4*pow(i, 3) - 5*pow(j, 2) + 1;
            }
        }
    }

    printf("Matriz gerada:\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
