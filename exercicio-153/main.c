#include <stdio.h>

int main() {
  int inteiro = 47;
  float real = 4;71;
  char letra = 'C';

  int *p_int = &inteiro;
  float *p_real = &real;
  char *p_letra = &letra;

  printf("Valores originais:\n");
  printf("Inteiro: %d\n", inteiro);
  printf("Real: %.2f\n", real);
  printf("Caractere: %c\n", letra);

  *p_int = 90;
  *p_real = 5.28;
  *p_letra = 'A';

  printf("\nValores modificados:\n");
  printf("Inteiro: %d\n", inteiro);
  printf("Real: %.2f\n", real);
  printf("Caractere: %c\n", letra);

  return 0;
}
