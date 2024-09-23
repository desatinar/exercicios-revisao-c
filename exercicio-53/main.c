#include <stdio.h>
unsigned int inverso(unsigned int num) {
unsigned int invertido = 0;
while (num > 0) {
unsigned int ultimo_digito = num % 10;
invertido = invertido * 10 + ultimo_digito;
num /= 10;
}
return invertido;
}
int main() {
unsigned int numero;
printf("Digite um numero inteiro positivo: ");
scanf("%u", &numero);
unsigned int resultado = inverso(numero);
printf("Numero invertido: %u\n", resultado);
return 0;
}
