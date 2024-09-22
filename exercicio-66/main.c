#include <stdio.h>

int conta_digito(int n, int k) {
    // caso base: se o numero for 0, retorna 0
    if (n == 0)
        return 0;
        
    // verifica se o último dígito é igual a k
    int ultimo_digito == k ? 1 : 0) + conta_digito(n / 10, k);
}

int main() {
    int n = 762021192;
    int k = 2;
    
    int resultado = conta_digito(n, k);
    printf("0 dígito %d ocorre %d vezes em %d.\n", k, resultado, n);
    
    return 0;
}
