//1.	Um corpo se move sobre uma reta e duplica sua velocidade, a cada segundo, 
//durante os primeiros 10s. Seja 2 m/s a velocidade inicial. Qual é a velocidade
// média nos primeiros 10s? Responda a essa pergunta elaborando um programa em C que
// simula a variação da velocidade e  o deslocamento do corpo, com intervalos de tempo variando entre 1 s e 0,1 s.

// 

#include <stdio.h>

int main() {
    float velocidade_inicial = 2.0; // Velocidade inicial em m/s
    float velocidade = velocidade_inicial;
    float deslocamento_total = 0.0;
    float intervalo_tempo;
    int i;

    // Simulação com intervalo de 1 segundo
    printf("Simulacao com intervalo de 1 segundo:\n");
    intervalo_tempo = 1.0; // Intervalo de 1 segundo

    for (i = 0; i < 10; i++) {
        deslocamento_total += velocidade * intervalo_tempo; // Calcula o deslocamento
        printf("Tempo: %d s, Velocidade: %.2f m/s, Deslocamento: %.2f m\n", i + 1, velocidade, deslocamento_total);
        velocidade *= 2; // Dobra a velocidade a cada segundo
    }

    // Calcula a velocidade média
    float velocidade_media = deslocamento_total / 10.0;
    printf("Velocidade media nos primeiros 10 segundos (intervalo de 1 segundo): %.2f m/s\n", velocidade_media);

    // Reinicia variáveis para o próximo teste
    velocidade = velocidade_inicial;
    deslocamento_total = 0.0;

    // Simulação com intervalo de 0,1 segundo
    printf("\nSimulacao com intervalo de 0,1 segundo:\n");
    intervalo_tempo = 0.1; // Intervalo de 0,1 segundo

    for (i = 0; i < 100; i++) { // 10 segundos / 0,1s = 100 iterações
        deslocamento_total += velocidade * intervalo_tempo; // Calcula o deslocamento
        if ((i + 1) % 10 == 0) {
            printf("Tempo: %.1f s, Velocidade: %.2f m/s, Deslocamento: %.2f m\n", (i + 1) * 0.1, velocidade, deslocamento_total);
        }
        if ((i + 1) % 10 == 0) {
            velocidade *= 2; // Dobra a velocidade a cada segundo
        }
    }

    // Calcula a velocidade média
    velocidade_media = deslocamento_total / 10.0;
    printf("Velocidade media nos primeiros 10 segundos (intervalo de 0,1 segundo): %.2f m/s\n", velocidade_media);

    return 0;
}
