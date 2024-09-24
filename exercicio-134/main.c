#include <stdio.h>
int main()
{
    int A[3][3];
    int soma = 0;
    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Elemento A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i < j)
            {
                soma += 2 * i + 7 * j - 2;
            }
        }
    }
    printf("A soma dos elementos onde i < j é: %d\n", soma);
    return 0;
}
