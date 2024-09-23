#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

#define LINHAS 4
#define COLUNAS 4

/*
139º) Gere matriz 4 x 4 com valores no intervalo [1, 20]. Escreva um programa que transforme a matriz gerada numa matriz triangular inferior, ou seja, atribuindo zero a todos os elementos acima da diagonal principal. Imprima a matriz original e a matriz transformada.

*/


void imprimeMatriz(int matriz[LINHAS][COLUNAS], char *titulo) {
    printf("%s\n", titulo);
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void transformaMatrizTriangularInferior(int matriz[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (j > i) {
                matriz[i][j] = 0;
            }
        }
    }
}

int main() {
    int matriz[LINHAS][COLUNAS];
    setlocale(LC_ALL,"Portuguese");

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matriz[i][j] = (rand() % 20) + 1;
        }
    }

    imprimeMatriz(matriz, "Matriz Original:");

    transformaMatrizTriangularInferior(matriz);

    imprimeMatriz(matriz, "Matriz Triangular Inferior:");

    return 0;
}
