#include <stdio.h>

void imprimirArray(int arr[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Posição %d: %d\n", i, arr[i]);
    }
}

int pesquisarValor(int arr[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (arr[i] == valor) {
            return i;
        }
    }
    return -1;
}

void substituirArray(int arr[], int tamanho) {
    int aux[tamanho];
    for (int i = 0; i < tamanho; i++) {
        aux[i] = 0;
        for (int j = 0; j <= i; j++) {
            aux[i] += arr[j];
        }
    }
    for (int i = 0; i < tamanho; i++) {
        arr[i] = aux[i];
    }
}

int main() {
    int arr[7];
    
    printf("Digite 7 valores inteiros:\n");
    for (int i = 0; i < 7; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("\nArray inicial:\n");
    imprimirArray(arr, 7);
    
    int valor;
    printf("\nDigite um valor para pesquisar: ");
    scanf("%d", &valor);
    int posicao = pesquisarValor(arr, 7, valor);
    if (posicao == -1) {
        printf("Valor %d não encontrado no array.\n", valor);
    } else {
        printf("Valor %d encontrado na posição %d.\n", valor, posicao);
    }
    
    substituirArray(arr, 7);
    printf("\nArray após substituição:\n");
    imprimirArray(arr, 7);
    
    return 0;
}
