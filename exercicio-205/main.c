#include <stdio.h>
#include <string.h>

void separar_consoantes_vogais(char nome[], char consoantes[], char vogais[]) {
  int letras, qtdLetras = strlen(nome);
  int a = 0, b = 0;
  for (letras = 0; letras < qtdLetras; letras++) {
    if ((nome[letras] == 'A' || nome[letras] == 'a') ||
        (nome[letras] == 'E' || nome[letras] == 'e') ||
        (nome[letras] == 'I' || nome[letras] == 'i') ||
        (nome[letras] == 'O' || nome[letras] == 'o') ||
        (nome[letras] == 'U' || nome[letras] == 'u')) {
      vogais[b++] = nome[letras];
    } else if ((nome[letras] >= 'B' && nome[letras] <= 'Z') ||
               (nome[letras] >= 'b' && nome[letras] <= 'z')) {
      consoantes[a++] = nome[letras];
    }
  }

  consoantes[a] = '\0';
  vogais[b] = '\0';
}

int main() {
  char nome[50];
  char consoantes[50];
  char vogais[50];

  printf(" \n bote ai seu nome completo: :33 \n");
  fgets(nome, 50, stdin);
  fflush(stdin);

  separar_consoantes_vogais(nome, consoantes, vogais);

  printf("Vetor de consoantes: %s\n", consoantes);
  printf("Vetor de vogais: %s\n", vogais);

  return 0;
}
