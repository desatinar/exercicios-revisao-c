#include <stdio.h>

int main() {
  float base, imposto;

  printf("Digite a base de cálculo mensal: R$ ");
  scanf("%f", &base);

  if (base <= 1637.11) {
    imposto = 0;
  } else if (base <= 2453.50) {
    imposto = (base - 1637.12) * 0.075 - 122.78;
  } else if (base <= 3271.38) {
    imposto = (base - 2453.51) * 0.15 - 306.80;
  } else if (base <= 4087.65) {
    imposto = (base - 3271.39) * 0.225 - 552.15;
  } else {
    imposto = (base - 4087.65) * 0.275 - 756.53;
  }

  printf("o imposto devido à sua renda é de: R$ %.2f\n", imposto);

  return 0;
}
