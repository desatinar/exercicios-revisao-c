#include <stdio.h>

int main() {
    // Declaração do array de inteiros
    int array[5] = {10, 20, 30, 40, 50};
    
    // Declaração de um ponteiro para inteiros
    int *ptr;
    
    // Associação do ponteiro ao array
    ptr = array;

    // Exibição dos valores originais do array
    printf("Valores originais do array:\n");
    for (int i = 0; i < 5; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    // Somar 1 a cada posição do array usando o ponteiro
    for (int i = 0; i < 5; i++) {
        *ptr = *ptr + 1;  // ou (*ptr)++
        ptr++;            // Move o ponteiro para o próximo elemento
    }

    // Exibição dos valores modificados do array
    printf("\nValores do array após somar 1 a cada posição:\n");
    for (int i = 0; i < 5; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}
