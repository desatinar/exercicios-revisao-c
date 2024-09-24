#include <stdio.h>
int main()
{
    int dividendo, divisor, quociente = 0, resto;
    printf("Digite o dividendo: ");
    scanf("%d", &dividendo);
    printf("Digite o divisor: ");
    scanf("%d", &divisor);
    if (divisor == 0)
    {
        printf("Erro: Divisão por zero não é permitida.\n");
        return 1;
    }
    int dividendo_abs = dividendo < 0 ? -dividendo : dividendo;
    int divisor_abs = divisor < 0 ? -divisor : divisor;
    resto = dividendo_abs;
    while (resto >= divisor_abs)
    {
        resto -= divisor_abs;
        quociente++;
    }
    if ((dividendo < 0 && divisor > 0) || (dividendo > 0 && divisor < 0))
    {
        quociente = -quociente;
    }
    if (dividendo < 0)
    {
        resto = -resto;
    }
    printf("Quociente: %d\n", quociente);
    printf("Resto: %d\n", resto);
    return 0;
}
