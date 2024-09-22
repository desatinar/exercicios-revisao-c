#include <stdio.h>

int main() {
  int v[10], v1[10], v2[10], i, j = 0, k = 0;

  printf("Digite 10 numeros inteiros: (intercalados com enter):\n");
  for (i = 0; i < 10; i++) {
    scanf("%d", &v[i]);
  }

  for (i = 0; i < 10; i++) {
    if (v[i] % 2 != 0) {
      v1[j] = v[i];
      j++;
    }
  }
  for (i = 0; i < 10; i++) {
    if (v[i] % 2 == 0) {
      v2[k] = v[i];
      k++;
    }
  }

  printf("\nElementos utilizados de vetor 1:\n");
  for (i = 0; i < j; i++) {
    printf("%d ", v1[i]);
  }

  printf("\n\nElementos utilizados de vetor2:\n");
  for (i = 0; i < k; i++) {
    printf("%d ", v2[i]);
  }

  printf("\n");
  return 0;
}
