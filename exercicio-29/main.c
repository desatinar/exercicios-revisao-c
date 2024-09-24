#include <stdio.h>
#include <math.h>

int main() {
    int passos = 1000;
    double g = 9.81; 
    double altura = 10.0; 
    double velocidade = 20.0; 
    double ang = 45.0; 
    double intervalo = 0.01;
    double ang_rad = ang * M_PI / 180.0;
    double velocidadeX = velocidade * cos(ang_rad);
    double velocidadeY = velocidade * sin(ang_rad);
    double x[passos], y[passos];
    int i = 0;

    x[i] = 0.0;
    y[i] = altura;

    while (y[i] >= 0 && i < passos - 1) {
        i++;
        x[i] = x[i-1] + velocidadeX * intervalo;
        y[i] = y[i-1] + velocidadeY * intervalo - 0.5 * g * intervalo * intervalo;
        velocidadeY -= g * intervalo;
    }

    for (int j = 0; j <= i; j++) {
        printf("Passo %d: x = %.2f m, y = %.2f m\n", j, x[j], y[j]);
    }

    return 0;
}
