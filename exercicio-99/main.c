//Faça um programa que calcule o desvio padrão de um vetor v, contendo n = 10 números, onde m é a média do vetor.

#include <stdio.h>
#include <math.h>

#define N 10

int main() {
    double v[N];
    double soma = 0.0, media, desvio_padrao = 0.0;

    printf("Digite %d numeros:\n", N);
    for (int i = 0; i < N; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%lf", &v[i]);
        soma += v[i];
    }
    media = soma / N;
    
    for (int i = 0; i < N; i++) {
        desvio_padrao += pow(v[i] - media, 2);
    }
    desvio_padrao = sqrt(desvio_padrao / N);

    printf("A media dos numeros eh: %.2f\n", media);
    printf("O desvio padrao dos numeros eh: %.2f\n", desvio_padrao);

    return 0;
}
