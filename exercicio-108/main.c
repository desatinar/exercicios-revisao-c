#include <stdio.h>
void numero_para_vetor(int numero, int vetor[], int *tamanho)
{
    int i = 0;
    while (numero > 0)
    {
        vetor[i] = numero % 10;
        numero /= 10;
        i++;
    }
    *tamanho = i;
}
void somar_vetores(int vetor_a[], int tamanho_a, int vetor_b[], int tamanho_b, int vetor_soma[],
                   int *tamanho_soma)
{
    int carry = 0;
    int max_tamanho = tamanho_a > tamanho_b ? tamanho_a : tamanho_b;
    for (int i = 0; i < max_tamanho; i++)
    {
        int digito_a = i < tamanho_a ? vetor_a[i] : 0;
        int digito_b = i < tamanho_b ? vetor_b[i] : 0;
        int soma = digito_a + digito_b + carry;
        if (soma >= 10)
        {
            soma -= 10;
            carry = 1;
        }
        else
        {
            carry = 0;
        }
        vetor_soma[i] = soma;
    }
    if (carry)
    {
        vetor_soma[max_tamanho] = carry;
        *tamanho_soma = max_tamanho + 1;
    }
    else
    {
        *tamanho_soma = max_tamanho;
    }
}
int main()
{
    int a, b;
    int vetor_a[5] = {0}, vetor_b[5] = {0}, vetor_soma[6] = {0};
    int tamanho_a, tamanho_b, tamanho_soma;
    printf("Digite o número a (positivo e menor que 10000): ");
    scanf("%d", &a);
    printf("Digite o número b (positivo e menor que 10000): ");
    scanf("%d", &b);
    if (a < 0 || a >= 10000 || b < 0 || b >= 10000)
    {
        printf("Erro: Os números devem ser positivos e menores que 10000.\n");
        return 1;
    }
    numero_para_vetor(a, vetor_a, &tamanho_a);
    numero_para_vetor(b, vetor_b, &tamanho_b);
    somar_vetores(vetor_a, tamanho_a, vetor_b, tamanho_b, vetor_soma, &tamanho_soma);
    printf("Vetor soma (invertido): ");
    for (int i = tamanho_soma - 1; i >= 0; i--)
    {
        printf("%d", vetor_soma[i]);
    }
    printf("\n");
    return 0;
}
