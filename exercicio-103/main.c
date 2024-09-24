/*103-Faça  um  programa  que  leia  dois  vetores  de  10  elementos.   Crie  um  vetor  que  seja  a intersecção entre os 2 vetores anteriores, 
ou seja, que contém apenas os números que estão em ambos os vetores. Não deve conter números repetidos.*/

#include <stdio.h>

int main() {
    int vetorA[10], vetorB[10], intersecao[10];
    int k = 0;

    printf("Digite os 10 elementos do vetor A:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetorA[i]);
    }

    printf("Digite os 10 elementos do vetor B:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetorB[i]);
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (vetorA[i] == vetorB[j]) {
                int ehDuplicado = 0;
                for (int m = 0; m < k; m++) {
                    if (intersecao[m] == vetorA[i]) {
                        ehDuplicado = 1;
                        break;
                    }
                }
                if (!ehDuplicado) {
                    intersecao[k++] = vetorA[i];
                }
            }
        }
    }

    if (k > 0) {
        printf("Intersecao entre os vetores: ");
        for (int i = 0; i < k; i++) {
            printf("%d ", intersecao[i]);
        }
        printf("\n");
    } else {
        printf("Nenhuma intersecao encontrada.\n");
    }

    return 0;
}
