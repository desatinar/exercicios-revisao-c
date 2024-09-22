#include <stdio.h>
#include <stdlib.h>

int main() {
  float vetor1[10];
  float vetor2[10];

  printf("digite 10 numeros, (intercalados de um enter):\n");
  for (int i = 0; i < 10; i++) {
    scanf("%f", &vetor1[i]);
  }

  for (int i = 0; i < 10; i++) {
    vetor2[i] = vetor1[i] * vetor1[i];
  }

  printf("\nPrimeiro vetor:\n");
  for (int i = 0; i < 10; i++) {
    printf("%.2f ", vetor1[i]);
  }

  printf("\nSegundo vetor:\n");
  for (int i = 0; i < 10; i++) {
    printf("%.2f ", vetor2[i]);
  }
  printf("\n");

  return 0;
}
