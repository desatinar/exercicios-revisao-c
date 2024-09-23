#include <stdio.h>

int main() {
    int num[] = {2, 4, 6, 8, 10};
    int soma = 0;
    int tamanho = sizeof(num) / sizeof(num[0]);

    for(int i = 0; i < tamanho; i++) {
        soma += num[i];
    }

    printf("A soma dos valores do numero e: %d\n", soma);

    return 0;
}
