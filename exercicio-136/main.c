#include <stdio.h>

int main() {
    int matriz[3][3];
    int soma = 0;

    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        soma += matriz[i][i];
    }

    printf("Soma dos elementos da diagonal principal: %d\n", soma);

    return 0;
}
