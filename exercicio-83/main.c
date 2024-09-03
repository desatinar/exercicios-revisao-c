#include <stdio.h>

int main() {
    int i; // Variável para controle do loop
    int qtdNegativos = 0; // Variável para armazenar a quantidade de números negativos
    double somaPositivos = 0.0; // Variável para armazenar a soma dos números positivos
    double vetor[10]; // Vetor para armazenar os 10 números reais

    // Preenche o vetor com 10 números reais
    for (i = 0; i < 10; i++) {
        printf("Digite o número real %d: ", i + 1);
        scanf("%lf", &vetor[i]);
    }

    // Calcula a quantidade de números negativos e a soma dos números positivos
    for (i = 0; i < 10; i++) {
        if (vetor[i] < 0) {
            qtdNegativos++;
        } else if (vetor[i] > 0) {
            somaPositivos += vetor[i];
        }
    }

    // Mostra os resultados
    printf("Quantidade de números negativos: %d\n", qtdNegativos);
    printf("Soma dos números positivos: %.2f\n", somaPositivos);

    return 0;
}
