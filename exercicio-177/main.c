/*Faça um programa que possua uma função para
ler 2 notas e retorná-las por parâmetro (chamar uma função dedicada a ler 2 notas válidas e que devolver os 2 números lidos);
calcular a média simples e a média ponderada e retorná-las por parâmetro, onde a segunda nota tem peso 2 média ponderada = (n1 + n2 ∗ 2)/3;*/

#include <stdio.h>

//A)
void lerNotas(float *num1, float *num2) {
    do {
        printf("Digite a primeira nota (0-10): ");
        scanf("%f", num1);
    } while (*num1 < 0 || *num1 > 10);

    do {
        printf("Digite a segunda nota (0-10): ");
        scanf("%f", num2);
    } while (*num2 < 0 || *num2 > 10);
}
//B)
void calcularMedias(float num1, float num2, float *mediaS, float *mediaP) {
    *mediaS = (num1 + num2) / 2;
    *mediaP = (num1 + num2 * 2) / 3;
}

int main() {
    float nota1, nota2, mediaS, mediaP;

    lerNotas(&nota1, &nota2);

    calcularMedias(nota1, nota2, &mediaS, &mediaP);

    printf("Nota 1: %.2f\n", nota1);
    printf("Nota 2: %.2f\n", nota2);
    printf("Média simples: %.2f\n", mediaS);
    printf("Média ponderada: %.2f\n", mediaP);

    return 0;
}
