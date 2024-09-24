#include <stdio.h>
void ordenar(int *a, int *b, int *c)
{
    int temp;
    // Método de troca
    if (*a > *b)
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*a > *c)
    {
        temp = *a;
        *a = *c;
        *c = temp;
    }
    if (*b > *c)
    {
        temp = *b;
        *b = *c;
        *c = temp;
    }
}
int main()
{
    int num1, num2, num3;
    printf("Digite três números inteiros:\n");
    printf("Número 1: ");
    scanf("%d", &num1);
    printf("Número 2: ");
    scanf("%d", &num2);
    printf("Número 3: ");
    scanf("%d", &num3);
    ordenar(&num1, &num2, &num3);
    printf("Números ordenados: %d, %d, %d\n", num1, num2, num3);
    return 0;
}
