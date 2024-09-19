//Zeca está organizando um bolão de futebol. Segundo suas regras, os apostadores informam o placar 
//do jogo e ganham 10 pontos se acertarem o vencedor ou se acertarem que foi empate, e ganham mais 5 
//pontos para o placar de cada time que acertarem. A tabela a seguir dá um exemplo, considerando que o
// placar real foi 3x2:

// Escreva um programa que requisita do usuário o placar apostado e depois o placar do jogo e informa
// quantos pontos o apostador fez

#include <stdio.h>

int main() {
    int time1_placar_aposta, time2_placar_aposta;
    int time1_placar_real = 3;
    int time2_placar_real = 2;
    int pontos = 0;

    // Leitura do placar apostado
    printf("Digite o placar apostado (no formato time1Xtime2): ");
    scanf("%d %d", &time1_placar_aposta, &time2_placar_aposta);

    // Cálculo dos pontos
    if (time1_placar_aposta == time1_placar_real && time2_placar_aposta == time2_placar_real) {
        // Acertou o placar exato
        pontos = 20;
    } else if (time1_placar_aposta == time1_placar_real || time2_placar_aposta == time2_placar_real) {
        // Acertou o número de gols de um dos times
        pontos = 15;
    } else if ((time1_placar_aposta > time2_placar_aposta && time1_placar_real > time2_placar_real) ||
               (time1_placar_aposta < time2_placar_aposta && time1_placar_real < time2_placar_real) ||
               (time1_placar_aposta == time2_placar_aposta && time1_placar_real == time2_placar_real)) {
        // Acertou o vencedor ou o empate
        pontos = 10;
    } else {
        // Não acertou
        pontos = 0;
    }

    // Exibição dos pontos
    printf("Você fez %d pontos!\n", pontos);

    return 0;
}
