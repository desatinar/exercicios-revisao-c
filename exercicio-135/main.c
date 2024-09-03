#include <stdio.h>

int main() {
    int i, j;
    double matriz[3][3]; // Matriz 3x3
    double soma = 0.0; // Variável para armazenar a soma dos elementos abaixo da diagonal principal

    // Leia a matriz 3x3
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%lf", &matriz[i][j]);
        }
    }

    // Calcula a soma dos elementos abaixo da diagonal principal
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i < j) {
                soma += matriz[i][j];
            }
        }
    }

    // Mostra o resultado
    printf("Soma dos elementos abaixo da diagonal principal: %.2f\n", soma);

    return 0;
}
