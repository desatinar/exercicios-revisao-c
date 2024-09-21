/*Fazer um programa para receber dois números do usuário, chamar a função e mostrar
 se os números são iguais. Além disso, mostrar sua soma e seu produto*/

#include <stdio.h>

int numerosIguais(int a, int b)
{
    return a == b;
}

int main()
{
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if (numerosIguais(num1, num2))
    {
        printf("Os numeros sao iguais.\n");
    }
    else
    {
        printf("Os numeros sao diferentes.\n");
    }

    int soma = num1 + num2;
    int produto = num1 * num2;

    printf("Soma: %d\n", soma);
    printf("Produto: %d\n", produto);

    return 0;
}
