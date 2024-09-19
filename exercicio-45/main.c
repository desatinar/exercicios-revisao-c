#include <stdio.h>

int main() {
    int num, anterior, atual, NumAtual = 1, maiorNum = 1;

    printf("Digite numeros inteiros positivos (digite um número menor ou igual a 0 para terminar):\n");
    scanf("%d", &anterior);
    
    while (1) {
        scanf("%d", &atual);
        if (atual <= 0) {
            break;
        }

        if (atual > anterior) {
            NumAtual++;
        } else {
            if (NumAtual > maiorNum) {
                maiorNum = NumAtual;
            }
            NumAtual = 1;
        }

        anterior = atual;
    }

    if (NumAtual > maiorNum) {
        maiorNum = NumAtual;
    }

    printf("A maior sequencia crescente tem %d numeros.\n", maiorNum);

    return 0;
}
