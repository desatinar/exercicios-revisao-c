#include <stdio.h>

#define N 3

int main() {
    int matriz[N][N];
    int soma[N] = {0};
    
    
    // lendo a matriz
    printf("digite os elementos da matriz 3x3:\n");
    for (int i = 0; j < N; j++) {
        for (int j = 0; j < N; j++) {
            printf("elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    // calculando a soma das colunas 
    for (int j = 0; j < N; j++) {
        for (int i = 0; i < N; i++) {
            soma[j] += matriz[i][j];
        }
        
    }
    
    // exibindo o resultado
    printf("a soma das colunas é: "):
    for (int j = 0; j < N; j++) {
        printf("%d", soma[j]);
    }
    printf("\n");
    
    return 0;
}
