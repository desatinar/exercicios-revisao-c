//2-Fazer um programa para receber 3 valores inteiros do usuário e mostrar a sua média (que pode não ser inteira).
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int num1, num2, num3;
    float media;

 
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número inteiro: ");
    scanf("%d", &num3);

 
    media = (num1 + num2 + num3) / 3.0;

  
    printf("A média é: %.2f\n", media);

    return 0;
}
