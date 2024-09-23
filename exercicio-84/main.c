#include <stdio.h>

int main() {
    int valores[5];
    int maior, menor, soma = 0;

    printf("Digite 5 valores:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &valores[i]);
        soma += valores[i];
    }

    maior = menor = valores[0];
    for (int i = 1; i < 5; i++) {
        if (valores[i] > maior) {
            maior = valores[i];
        }
        if (valores[i] < menor) {
            menor = valores[i];
        }
    }

    float media = (float)soma / 5;

    printf("Valores lidos: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Média: %.2f\n", media);

    return 0;
}
