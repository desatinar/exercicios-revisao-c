#include <stdio.h>

void contar_digitos(unsigned int numero, int contagem[10]) {
    while (numero > 0) {
        int digito = numero % 10;
        contagem[digito]++;
        numero /=10;
        
    }
}

int sao_permutacoes(unsigned int num1, unsigned int num2) {
    int contagem1[10] = {0};
    int contagem2[10] = {0};
    
    contar_digitos(num1, contagem1);
    contar_digitos(num2, contagem2);
    
    for (int i = 0; i < 10; i++) {
        if (contagem1[i] != contagem2[i]) {
            return 0; // não são permutações
        }
    }
    return 1; // são permutações
}

int main() {
    unsigned int num1, num2;
    
    printf("digite o primeiro número (positivo): ");
    scanf("%u", &num1);
    
    printf("digite o segundo número (positivo): ");
    scanf("%u", &num2);
    
    if (sao_permutacoes(num1, num2)) {
        printf("%u é permutação de %u.\n", num1, num2);
    } else {
        printf("%u não é permutação de %u.\n", num1, num2);
    }
    
    return 0;
}
