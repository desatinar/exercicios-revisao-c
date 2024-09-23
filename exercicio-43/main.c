#include <stdio.h>
#include <stdbool.h>

// Função para verificar se um número é primo
bool ehPrimo(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int numero;

    // Lê o número do usuário
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Encontra o maior número primo menor que o número digitado
    int maiorPrimo = -1;
    for (int i = numero - 1; i > 1; i--) {
        if (ehPrimo(i)) {
            maiorPrimo = i;
            break;
        }
    }

    // Exibe o resultado
    if (maiorPrimo == -1) {
        printf("Não há números primos menores que %d.\n", numero);
    } else {
        printf("O maior número primo menor que %d é %d.\n", numero, maiorPrimo);
    }

    return 0;
}
