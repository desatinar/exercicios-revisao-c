/*Faça um programa que leia um vetor de 15 posições e o compacte,
 ou seja, elimine as posições com valor zero. Para isso, todos os elementos 
 à frente do valor zero, devem ser movidos uma posição para trás no vetor*/

#include <stdio.h>

int main() {
    int vetor[15];
    int novoVetor[15];
    int j = 0;
    int i;

    printf("Digite 15 valores inteiros:\n");
    for (i = 0; i < 15; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 15; i++) {
        if (vetor[i] != 0) {
            novoVetor[j] = vetor[i];
            j++;
        }
    }

    
    printf("Vetor compactado:\n");
    for (int i = 0; i < j; i++) {
        printf("%d ", novoVetor[i]);
    }
    printf("\n");

    return 0;
}
