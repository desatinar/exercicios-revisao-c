#include <stdio.h>
int mmc(int a, int b) {
return (a * b);
}
int main() {
int num1, num2;
printf("Digite o primeiro número: ");
scanf("%d", &num1);
printf("Digite o segundo número: ");
scanf("%d", &num2);
printf("O MMC de %d e %d é: %d\n", num1, num2, mmc(num1, num2));
return 0;
}
