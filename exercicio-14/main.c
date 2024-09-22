#include <stdio.h>

int main() {
    float a, b, c, maior, menor, intermediario;

    // Recebe os valores do usuário
    printf("Digite o primeiro valor: ");
    scanf("%f", &a);
    printf("Digite o segundo valor: ");
    scanf("%f", &b);
    printf("Digite o terceiro valor: ");
    scanf("%f", &c);

    // Inicializa as variáveis maior e menor
    maior = menor = a;

    // Determina o maior
    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }

    // Determina o menor
    if (b < menor) {
        menor = b;
    }
    if (c < menor) {
        menor = c;
    }

    // Determina o valor intermediário
    if ((a > menor && a < maior) || (a < maior && a > menor)) {
        intermediario = a;
    } else if ((b > menor && b < maior) || (b < maior && b > menor)) {
        intermediario = b;
    } else {
        intermediario = c;
    }

    // Exibe os resultados
    printf("Maior: %.2f\n", maior);
    printf("Menor: %.2f\n", menor);
    printf("Intermediário: %.2f\n", intermediario);

    return 0;
}
