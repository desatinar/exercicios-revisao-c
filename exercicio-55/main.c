#include <stdio.h>

int diasNoMes(int mes, int ano) {
    int dias[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
        dias[1] = 29;
    }
  
    if (mes >= 1 && mes <= 12) {
        return dias[mes - 1];
    } else {
        return -1;
    }
}

int main() {
    int mes, ano;

    printf("Digite o mês (1-12): ");
    scanf("%d", &mes);

    printf("Digite o ano: ");
    scanf("%d", &ano);

    int totalDias = diasNoMes(mes, ano);

    if (totalDias != -1) {
        printf("O mês %d de %d tem %d dias.\n", mes, ano, totalDias);
    } else {
        printf("Mês inválido.\n");
    }

    return 0;
}
