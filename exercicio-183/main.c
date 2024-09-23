#include <stdio.h>
int comparar_numeros(int a, int b, int *soma, int *produto) {
if (a == b) {
*soma = a + b;
*produto = a * b;
return 1;
}
*soma = a + b;
*produto = a * b;
if ((a > 0 && b > 0 && *soma < 0) || (a < 0 && b < 0 && *soma > 0)) {
return -1;
}
if ((*produto / a != b && a != 0) || (*produto / b != a && b != 0)) {
return -1;
}
return 0;
}
int main() {
int num1, num2;
int soma, produto;
int resultado;
printf("Digite o primeiro numero: ");
scanf("%d", &num1);
printf("Digite o segundo numero: ");
scanf("%d", &num2);
resultado = comparar_numeros(num1, num2, &soma, &produto);
if (resultado == 1) {
printf("Os numeros sao iguais.\n");
} else if (resultado == 0) {
printf("Os numeros sao diferentes.\n");
} else {
printf("A soma ou o produto estourou a faixa dos inteiros.\n");
}
printf("Soma: %d\n", soma);
printf("Produto: %d\n", produto);
return 0;
}
