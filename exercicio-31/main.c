#include <stdio.h>

// Função para verificar se um número é primo
int eh_primo(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

// Função para decompor um número em fatores primos
void decompor_em_fatores_primos(int num) {
    for (int i = 2; i <= num; i++) {
        while (num % i == 0 && eh_primo(i)) {
            printf("%d ", i);
            num /= i;
        }
    }
    printf("\n");
}

int main() {
    int num; // Variável para armazenar o número do usuário

    // Solicita o número do usuário
    printf("Por favor, digite um número: ");
    scanf("%d", &num);

    // Decompõe o número em fatores primos
    printf("Fatores primos: ");
    decompor_em_fatores_primos(num);

    return 0;
}
