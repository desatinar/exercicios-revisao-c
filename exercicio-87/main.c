#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/*
87º) Leia um vetor com 20 números inteiros.  Escreva os elementos do vetor eliminando elementos repetidos.
*/


int main() {
	setlocale(LC_ALL,"Portuguese");
    int vetor[20];
    int i, j, k = 0;
    int vetor_unicos[20];

   
    printf("Insira os 20 números inteiros:\n");
    for (i = 0; i < 20; i++) {
        printf("Número: ");
        scanf("%d", &vetor[i]);
    }

    vetor_unicos[0] = vetor[0];
    k = 1;
    for (i = 1; i < 20; i++) {
        for (j = 0; j < k; j++) {
            if (vetor[i] == vetor_unicos[j]) {
                break;
            }
        }
        if (j == k) {
            vetor_unicos[k] = vetor[i];
            k++;
        }
    }

    
    printf("Elementos do vetor único:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", vetor_unicos[i]);
    }
    printf("\n");

    return 0;
}
