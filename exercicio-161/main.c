#include <stdio.h>

int main() {
    int i, j;
    float matriz[3][3]; // Matriz 3x3 de float
    // Imprime o endereço de cada posição da matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Endereço da posição [%d][%d]: %p\n", i, j, &matriz[i][j]);
        }
    }

    return 0;
}
