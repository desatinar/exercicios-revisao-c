//68-Faça um programa que possua um vetor denominado A que armazene 6 números inteiros. O programa deve executar os seguintes passos:
//69-Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
//70-Armazene em uma variável inteira (simples) a soma entre os valores das posições
//71-A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
//72-Modifique o vetor na posição 4, atribuindo a esta posição valor 100.
//73Mostre na tela cada valor do vetor A, um em cada linha.

#include <stdio.h>
//68-Faça um programa que possua um vetor denominado A que armazene 6 números inteiros. O programa deve executar os seguintes passos:
int main() {
    //69-Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
    int A[6] = {1, 0, 5, -2, -5, 7};
    //70-Armazene em uma variável inteira (simples) a soma entre os valores das posições
    int soma = A[0] + A[1] + A[5];
    //71-A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
    printf("A soma de A[0], A[1] e A[5] eh: %d\n\n", soma);
    //72-Modifique o vetor na posição 4, atribuindo a esta posição valor 100.
    A[4] = 100;
    
    //73-Mostrar todos os valores do vetor A, um em cada linha
    printf("Valores do vetor A:\n");
    for (int i = 0; i < 6; i++) {
        printf("A[%d] = %d\n", i, A[i]);
    }

    return 0;
}
