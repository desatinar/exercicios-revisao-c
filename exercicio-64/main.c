#include <stdio.h>


int somaDigitos(int numero) {
    
    if (numero == 0) {
        return 0;
    }
    
    return (numero % 10) + somaDigitos(numero / 10);
}

int main() {
    int numero;

    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    
    if (numero < 0) {
        numero = -numero;
    }

    
    int resultado = somaDigitos(numero);
    printf("A soma dos dígitos é: %d\n", resultado);

    return 0;
}
