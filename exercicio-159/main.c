#include <stdio.h>

void somaEAtribui(int *a, int b) {
    *a = *a + b;
}

int main() {
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    somaEAtribui(&num1, num2);

    printf("A soma e: %d\n", num1);
    printf("O valor de B e: %d\n", num2);

    return 0;
}
