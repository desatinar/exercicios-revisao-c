#include <stdio.h>

int main() {
  char nome[50];
  int qtdLetras, vogais = 0, consoantes = 0, espaco_em_branco = 0, i;

  printf(" \n Digite seu nome completo \n");
  fgets(nome, 50, stdin);
  fflush(stdin);

  qtdLetras = strlen(nome);

  for (i = 0; i < qtdLetras; i++) {
    if ((nome[i] == 'A' || nome[i] == 'a') ||
        (nome[i] == 'E' || nome[i] == 'e') ||
        (nome[i] == 'I' || nome[i] == 'i') ||
        (nome[i] == 'O' || nome[i] == 'o') ||
        (nome[i] == 'U' || nome[i] == 'u')) {
      vogais++;
    } else if ((nome[i] >= 'B' && nome[i] <= 'Z') ||
               (nome[i] >= 'b' && nome[i] <= 'z')) {
      consoantes++;
    } else if (nome[i] == ' ') {
      espaco_em_branco++;
    }
  }

  printf(" A quantidade de vogais é: %d \n", vogais);
  printf(" A quantidade de consoantes é: %d \n", consoantes);
  printf("A quantidade de espaços em branco é: %d\n", espaco_em_branco);
  return 0;
}
