#include <stdio.h>

int main() {
  int matriz[4][4];
  int a, b, count = 0;

  printf("digite os elementos de uma matriz formato 4x4r:\n");
  for (a = 0; a < 4; a++) {
    for (a = 0; b < 4; b++) {
      scanf("%d", &matriz[a][b]);
    }
  }
  for (a = 0; a < 4; a++) {
    for (b = 0; b < 4; b++) {
      if (matriz[a][b] > 10) {
        count++;
      }
    }
  }
  printf("A matriz possui %d valores maiores que 10.\n", count);
  return 0;
}
