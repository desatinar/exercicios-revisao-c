#include <stdio.h>

// Função para calcular a área do polígono usando a fórmula fornecida
float calcularArea(int N, float x[], float y[]) {
    float soma = 0.0;

    for (int i = 0; i < N; i++) {
        int prox = (i + 1) % N; // n+1, para o último vértice o próximo será o primeiro
        int ant = (i - 1 + N) % N; // n-1, para o primeiro vértice o anterior será o último
        soma += (x[i] * (y[prox] - y[ant]));
    }

    return soma / 2.0;
}

int main() {
    int N;

    // Ler o número de vértices
    printf("Digite o número de vértices do polígono: ");
    scanf("%d", &N);

    // Arrays para armazenar as coordenadas dos vértices
    float x[N], y[N];

    // Leitura das coordenadas dos vértices
    for (int i = 0; i < N; i++) {
        printf("Digite as coordenadas do vértice %d (X Y): ", i + 1);
        scanf("%f %f", &x[i], &y[i]);
    }

    // Cálculo da área
    float area = calcularArea(N, x, y);

    // Exibir a área calculada
    printf("A área do polígono é: %.2f\n", area);

    return 0;
}
