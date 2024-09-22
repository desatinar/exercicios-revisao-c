#include <stdio.h>

int main(){
    // exemplo de vetor
    int vetor [] = {10, 20, 30, 40, 50};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int elemento = 30; // elemento a ser encontrado
    int i, posicao = -1;
    
    // procurar o elemento no vetor
    for (i = 0; i < tamanho; i++) {
        if (vetor[i] == elemento) {
            posicao = i; // encontrar a posição
            break;
            
        }
    }
    
    // verificar se o elemento foi encontrado
    if (posicao != -1) {
        printf("0 elemento %d está na posição %d no vetor.\n", elemento, posicao);
    } else {
        printf("0 elemento %d não foi encontrado no vetor.\n", elemento);
    }
    
    // imprimir o vetor
    printf("vetor: ");
    for (i = 0; i < tamanho; i++) {
        printf("%d", vetor[i]);
    }
    printf("\n");
    
    return 0;
}
