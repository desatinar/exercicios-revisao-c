/*Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores
 de cada posição das matrizes lidas.*/

#include <stdio.h>

#define SIZE 4

int main() {
    int matriz1[SIZE][SIZE], matriz2[SIZE][SIZE], matrizMaior[SIZE][SIZE];

    printf("Digite os elementos da primeira matriz 4x4:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Digite os elementos da segunda matriz 4x4:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrizMaior[i][j] = (matriz1[i][j] > matriz2[i][j]) ? matriz1[i][j] : matriz2[i][j];
        }
    }


    printf("Matriz com os maiores valores:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrizMaior[i][j]);
        }
        printf("\n");
    }

    return 0;
}
