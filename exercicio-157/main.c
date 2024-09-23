#include <stdio.h>
void encontrar_maior_menor(int *a, int *b) {
if (*a > *b) {
int temp = *a;
*a = *b;
=*b = temp;
}}
int main() {
int num1, num2;
printf("Digite o primeiro valor: ");
scanf("%d", &num1);
printf("Digite o segundo valor: ");
scanf("%d", &num2);
encontrar_maior_menor(&num1, &num2);
printf("Maior valor: %d\n", num1);
printf("Menor valor: %d\n", num2);
return 0;
}
