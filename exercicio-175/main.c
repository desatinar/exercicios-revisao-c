#include <stdio.h>

int encontrarMaior(int arr[], int tamanho) {
    int maior = arr[0];
    for (int i = 1; i < tamanho; i++) {
        if (arr[i] > maior) {
            maior = arr[i];
        }
    }
    return maior;
}
int main() {
    int N, k;
    printf("Digite o tamanho do array: ");
    scanf("%d", &N);
    printf("Digite o numero de elementos por linha: ");
    scanf("%d", &k);
    int arr[N];
    printf("Digite %d valores inteiros:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array: \n");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
        if ((i + 1) % k == 0) {
        }
    }
    int maior = encontrarMaior(arr, N);
    printf("O maior valor do array e: %d\n", maior);
 return 0;
}
