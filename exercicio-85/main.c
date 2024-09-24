/*85-Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontram o maior e o menor valor.*/

#include <stdio.h>

int main() {
    int valores[5];
    int maior, menor;
    int pMaior, pMenor;

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    maior = menor = valores[0];
    pMaior = posMenor = 0;

    for (int i = 0; i < 5; i++) {
        if (valores[i] > maior) {
            maior = valores[i];
            pMaior = i;
        }
        if (valores[i] < menor) {
            menor = valores[i];
            pMenor = i;
        }
    }

    printf("Maior valor: %d na posicao %d\n", maior, pMaior + 1);
    printf("Menor valor: %d na posicao %d\n", menor, pMenor + 1);

    return 0;
}
