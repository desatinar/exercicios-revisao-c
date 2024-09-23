#include <stdio.h>

int fatores(int fatores_primos[], int n, int *x) {
    int contador = 0;
    int i;

    if (n < 2) {
        *x = 0; 
        return 0;
    }

    for (i = 2; i <= n; i++) {
        while (n % i == 0) {
            if (contador < 10) {
                fatores_primos[contador] = i;  
                contador++;
            }
            n /= i;  
        }
    }

    *x = contador;  
    if (contador > 10) {
        return 1;
    }

    return 0; 
}

int main() {
    int fatores_primos[10];
    int n, x;

    printf("Digite um número inteiro para fatoração: ");
    scanf("%d", &n);

    int resultado = fatores(fatores_primos, n, &x);

    printf("Fatores primos encontrados: ");
    for (int i = 0; i < x; i++) {
        printf("%d ", fatores_primos[i]);
    }
    printf("\nNúmero total de fatores primos encontrados: %d\n", x);
    printf("Resultado da função: %d\n", resultado);

    return 0;
}
