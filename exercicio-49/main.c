#include <stdio.h>

int main() {

  int anos = 0;
  long int graos = 150;
  long int toneladas = 0;

  while (toneladas <= 100) {
    long int graosGerminados = graos * 0.9;
    long int espigas = graosGerminados * 2; 
    graos = espigas * 150;
    toneladas = graos / 1000000;
    anos++;
  }

  printf("serao necessarios %d anos para colher mais de 100 toneladas de milho.\n", anos);

  return 0;
}
