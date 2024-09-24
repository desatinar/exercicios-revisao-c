#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main() {
    int numero_magico, palpite, tentativas = 0;

    srand(time(NULL));
    numero_magico = rand() % 501;

    printf("Tente adivinhar o numero magico entre 0 e 500!\n");

    do {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite < numero_magico) {
            printf("Seu palpite e menor que o numero magico.\n");
        } else if (palpite > numero_magico) {
            printf("Seu palpite e maior que o numero magico.\n");
        } else {
            printf("Parabens! Você acertou o nmero magico %d em %d tentativas.\n", numero_magico, tentativas);
            if (tentativas <= 3) {
                printf("vc e muito sortudo!\n");
            } else if (tentativas <= 6) {
                printf("vc e sortudo!\n");
            } else if (tentativas <= 10) {
                printf("Você é normal.\n");
            } else {
                printf("Tente novamente.\n");
            }
        }
    } while (palpite != numero_magico);

}
