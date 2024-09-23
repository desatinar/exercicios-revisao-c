#include <stdio.h>

int main() {
    int vetor[8];
    int x, y;

    printf("Digite os 8 valores do vetor:\n");
    for (int i = 0; i < 8; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite a posição X (1-8): ");
    scanf("%d", &x);
    printf("Digite a posição Y (1-8): ");
    scanf("%d", &y);

    if (x < 1 || x > 8 || y < 1 || y > 8) {
        printf("Posição inválida!\n");
        return 1;
    }

    int soma = vetor[x - 1] + vetor[y - 1];

    printf("A soma dos valores nas posições %d e %d é: %d\n", x, y, soma);

    return 0;
}
