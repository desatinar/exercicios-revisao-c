#include <stdio.h>

int main() {
    int numeros[6];
    int soma_pares = 0;
    int quantidade_impares = 0;

    printf("Digite os 6 números inteiros:\n");
    for (int i = 0; i < 6; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Números pares digitados: ");
    for (int i = 0; i < 6; i++) {
        if (numeros[i] % 2 == 0) {
            printf("%d ", numeros[i]);
            soma_pares += numeros[i];
        } else {
            quantidade_impares++;
        }
    }
    printf("\n");

    printf("Soma dos números pares digitados: %d\n", soma_pares);

    printf("Números ímpares digitados: ");
    for (int i = 0; i < 6; i++) {
        if (numeros[i] % 2 != 0) {
            printf("%d ", numeros[i]);
        }
    }
    printf("\n");

    printf("Quantidade de números ímpares digitados: %d\n", quantidade_impares);

    return 0;
}
