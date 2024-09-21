/*Crie um programa que lê 6 valores inteiros e, em seguida,
 mostre na tela os valores lidos na ordem inversa.*/

#include <stdio.h>

int main() {
    int numeros[6]; 

    
    for (int i = 0; i < 6; i++) {
        printf("Digite o numero %d:\n", i + 1);
        scanf("%d", &numeros[i]); 
    }

    printf("Os numeros na ordem inversa sao: ");
    for (int i = 5; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
