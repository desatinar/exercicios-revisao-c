#include <stdio.h>

int main() {
    int lados;
    float tamanho_lado, area;

    printf("Informe o número de lados do polígono (3, 4 ou 6): ");
    scanf("%d", &lados);
    printf("Informe o tamanho dos lados: ");
    scanf("%f", &tamanho_lado);

    switch (lados) {
        case 3: 
            area = (tamanho_lado * tamanho_lado * 1.73) / 4;
            printf("A área do triângulo é: %.2f\n", area);
            break;
        case 4: 
            area = tamanho_lado * tamanho_lado;
            printf("A área do quadrado é: %.2f\n", area);
            break;
        case 6: 
            area = 6 * tamanho_lado * tamanho_lado * 1.73 / 4;
            printf("A área do hexágono é: %.2f\n", area);
            break;
        default:
            printf("Não sei calcular a área.\n");
    }

    return 0;
}
