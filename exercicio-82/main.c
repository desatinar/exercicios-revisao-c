#include <stdio.h>
int main()
{
    float notas[15];
    float soma = 0.0;
    float media;
    for (int i = 0; i < 15; i++)
    {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i]; // Soma as notas
    }
    media = soma / 15;
    printf("A média geral das notas é: %.2f\n", media);
    return 0;
}
