#include <stdio.h>
#include <string.h>

#define MAX_PESSOAS 40
#define MAX_NOME 50

typedef struct {
    char nome[MAX_NOME];
    int dia;
    int mes;
    int ano_nascimento;
} Pessoa;

void calcularIdade(Pessoa p, int dia_atual, int mes_atual, int ano_atual) {
    int idade = ano_atual - p.ano_nascimento;

    // Ajuste da idade se o aniversário ainda não ocorreu este ano
    if (mes_atual < p.mes || (mes_atual == p.mes && dia_atual < p.dia)) {
        idade--;
    }

    printf("Nome: %s, Idade: %d anos\n", p.nome, idade);
}

int main() {
    Pessoa pessoas[MAX_PESSOAS];
    int dia_atual, mes_atual, ano_atual;

    // Leitura da data atual
    printf("Digite a data atual (dia mês ano): ");
    scanf("%d %d %d", &dia_atual, &mes_atual, &ano_atual);

    // Leitura dos dados das pessoas
    for (int i = 0; i < MAX_PESSOAS; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf(" %[^\n]", pessoas[i].nome); // Lê uma linha inteira
        printf("Digite o dia de aniversário: ");
        scanf("%d", &pessoas[i].dia);
        printf("Digite o mês de aniversário: ");
        scanf("%d", &pessoas[i].mes);
        printf("Digite o ano de nascimento: ");
        scanf("%d", &pessoas[i].ano_nascimento);
    }

    // Exibição de aniversários por mês
    printf("\nAniversários por mês:\n");
    for (int mes = 1; mes <= 12; mes++) {
        printf("\nMês %d:\n", mes);
        int tem_aniversario = 0;

        for (int i = 0; i < MAX_PESSOAS; i++) {
            if (pessoas[i].mes == mes) {
                tem_aniversario = 1;
                calcularIdade(pessoas[i], dia_atual, mes_atual, ano_atual);
            }
        }

        if (!tem_aniversario) {
            printf("Nenhuma pessoa faz aniversário neste mês.\n");
        }
    }

    return 0;
}
