#include <stdio.h>
#include <string.h>

void numeroPorExtenso(int num) {
    char *unidades[] = {"zero", "um", "dois", "três", "quatro", "cinco", "seis", "sete", "oito", "nove"};
    char *dezADezenove[] = {"dez", "onze", "doze", "treze", "quatorze", "quinze", "dezesseis", "dezessete", "dezoito", "dezenove"};
    char *dezenas[] = {"", "", "vinte", "trinta", "quarenta", "cinquenta", "sessenta", "setenta", "oitenta", "noventa"};

    if (num < 0 || num > 99) {
        printf("Número inválido\n");
    } else if (num < 10) {
        printf("%s\n", unidades[num]);
    } else if (num < 20) {
        printf("%s\n", dezADezenove[num - 10]);
    } else {
        if (num % 10 == 0) {
            printf("%s\n", dezenas[num / 10]);
        } else {
            printf("%s e %s\n", dezenas[num / 10], unidades[num % 10]);
        }
    }
}

int main() {
    int numero;
    printf("Digite um número entre 0 e 99: ");
    scanf("%d", &numero);
    numeroPorExtenso(numero);

    return 0;
}
