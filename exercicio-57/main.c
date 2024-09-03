#include <stdio.h>
#include <math.h>

int arredonda(double x) {
    if (x >= 0) {
        return (int)ceil(x - 0.5);
    } else {
        return (int)floor(x + 0.5);
    }
}

int main() {
    double num; // Variável para armazenar o número do usuário

    // Solicita o número do usuário
    printf("Por favor, digite um número: ");
    scanf("%lf", &num);

    // Arredonda o número e imprime o resultado
    printf("O número arredondado é: %d\n", arredonda(num));

    return 0;
}
