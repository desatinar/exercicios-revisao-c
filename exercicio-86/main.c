/*86-Faça um programa que leia um vetor de 10 posições e verifique se existem valores iguais e os escreva na tela.*/

#include <stdio.h>

int main() {
    int vetor[10];
    int encontrados[10] = {0};
    int i, j, k = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (vetor[i] == vetor[j]) {
                int ehDuplicado = 0;
                for (int m = 0; m < k; m++) {
                    if (encontrados[m] == vetor[i]) {
                        ehDuplicado = 1;
                        break;
                    }
                }
                if (!ehDuplicado) {
                    encontrados[k++] = vetor[i];
                }
                break;
            }
        }
    }

    if (k > 0) {
        printf("Valores iguais encontrados: ");
        for (i = 0; i < k; i++) {
            printf("%d ", encontrados[i]);
        }
        printf("\n");
    } else {
        printf("Nenhum valor igual encontrado.\n");
    }

    return 0;
}

