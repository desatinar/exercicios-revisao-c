#include <stdio.h>

int AnoBissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int mes, ano, dias;

    printf("Digite o mes (1-12): ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);

    switch (mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            dias = 31;
            break;
        case 4: case 6: case 9: case 11:
            dias = 30;
            break;
        case 2:
            if (AnoBissexto(ano)) {
                dias = 29;
            } else {
                dias = 28;
            }
            break;
        default:
            printf("Mes inválido!\n");
            return 1;
    }

    printf("O mes %d do ano %d tem %d dias.\n", mes, ano, dias);

    return 0;
}
