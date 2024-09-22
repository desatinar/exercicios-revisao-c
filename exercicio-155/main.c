#include <stdio.h>

int valor_1;
int valor_2;

int main() {
    printf("Digite 2 valores inteiros: \n");
    scanf("%d %d", &valor_1, &valor_2);

    // Comparando os endereços de valor_1 e valor_2
    if (&valor_1 > &valor_2) {
        printf("O conteúdo do maior endereço é: %d\n", valor_1);
    } else {
        printf("O conteúdo do maior endereço é: %d\n", valor_2);
    }

    return 0;
}
