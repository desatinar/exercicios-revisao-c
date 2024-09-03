#include <stdio.h>

int main() {
    char nome[50]; // Variável para armazenar o nome do usuário
    int quantidade; // Variável para armazenar a quantidade de vezes que o nome será repetido

    // Solicita o nome do usuário
    printf("Por favor, digite seu nome: ");
    fgets(nome, 50, stdin);

    // Remove o caractere de quebra de linha (\n) do final do nome
    nome[strcspn(nome, "\n")] = 0;

    // Solicita a quantidade de vezes que o nome será repetido
    printf("Quantas vezes você deseja que seu nome seja repetido? ");
    scanf("%d", &quantidade);

    // Repete o nome do usuário a quantidade de vezes solicitada
    for(int i = 0; i < quantidade; i++) {
        printf("%s\n", nome);
    }

    return 0;
}
