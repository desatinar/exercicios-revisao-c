#include <stdio.h>
int main() {
  int inicio, fim, soma = 0;
  
  printf("Digite o valor de inicio da sequência: ");
  scanf("%d", &inicio);
  printf("Digite o valor de fim da sequência: ");
  scanf("%d", &fim);
  if (fim > inicio) {
    for (int i = inicio; i <= fim; i++) {
      soma += i;
  }
    printf("A soma dos números de %d a %d é %d.\n", inicio, fim, soma);
  } else {
    printf("Erro: O valor de fim deve ser maior que o valor de inicio.\n");
  }
  return 0;
}
