#include <stdio.h>

int main() {
    int vetor[10];
    int x, i, contador = 0;

   
    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

   
    printf("Digite um número inteiro x: ");
    scanf("%d", &x);

   
    printf("Os múltiplos de %d no vetor são:\n", x);
    for (i = 0; i < 10; i++) {
        if (vetor[i] % x == 0) {
            printf("%d ", vetor[i]);
            contador++;
        }
    }

   
    if (contador > 0) {
        printf("\nTotal de múltiplos de %d: %d\n", x, contador);
    } else {
        printf("Nenhum múltiplo de %d foi encontrado no vetor.\n", x);
    }

    return 0;
}
