#include <stdio.h>

int main() {
    float nota_prova1, nota_lista1, nota_trabalho;
    int atraso_trabalho;

    printf("Digite a nota da primeira prova: ");
    scanf("%f", &nota_prova1);

    printf("Digite a nota da primeira lista: ");
    scanf("%f", &nota_lista1);

    printf("A proposta de trabalho foi entregue atrasada? (0 - não, 1 - sim): ");
    scanf("%d", &atraso_trabalho);

    if (atraso_trabalho == 1) {
        nota_trabalho = nota_prova1 * 0.8;
    } else {
        nota_trabalho = nota_prova1;
    }

    float nota_minima_aprovacao = 60.0;
    float nota_atual = (nota_prova1 + nota_lista1 + nota_trabalho) / 3.0;

    printf("Nota atual: %.2f\n", nota_atual);

    if (nota_atual < nota_minima_aprovacao) {
        printf("Você precisa de uma nota mínima de %.2f para ser aprovado.\n", nota_minima_aprovacao - nota_atual);
        printf("Aqui estão as combinações possíveis de notas das demais avaliações que permitem que você seja aprovado:\n");

        for (int prova2 = 0; prova2 <= 100; prova2++) {
            for (int lista2 = 0; lista2 <= 100; lista2++) {
                for (int trabalho2 = 0; trabalho2 <= 100; trabalho2++) {
                    float nota_final = (nota_prova1 + nota_lista1 + nota_trabalho + prova2 + lista2 + trabalho2) / 6.0;
                    if (nota_final >= nota_minima_aprovacao) {
                        printf("Prova 2: %d, Lista 2: %d, Trabalho 2: %d\n", prova2, lista2, trabalho2);
                    }
                }
            }
        }
    } else {
        printf("Você já está aprovado!\n");
    }

    return 0;
}
