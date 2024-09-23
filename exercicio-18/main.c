#include <stdio.h>

int main() {
    int velocidade_maxima, velocidade_motorista, excesso, multa;

    printf("Digite a velocidade máxima permitida na avenida (km/h): ");
    scanf("%d", &velocidade_maxima);

    printf("Digite a velocidade que o motorista estava dirigindo (km/h): ");
    scanf("%d", &velocidade_motorista);

    if (velocidade_motorista > velocidade_maxima) {
        excesso = velocidade_motorista - velocidade_maxima;
        multa = excesso * 5;  // R$ 5,00 por cada km/h acima do limite
        printf("O motorista estava %d km/h acima do limite. A multa e de R$ %d,00.\n", excesso, multa);
    } else {
        printf("O motorista esta dentro do limite de velocidade. Nao ha multa.\n");
    }

    return 0;
}
