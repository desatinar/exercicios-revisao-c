#include <stdio.h>

int main() {
    int identificadores[100];
    float pesos[100];
    int n = 0, mais_gordo = 0, mais_magro = 0;
    float peso;

    printf("Digite o peso dos bois (0 para parar): \n");
    while (1) {
        printf("Peso do boi %d: ", n + 1);
        scanf("%f", &peso);
        
        if (peso == 0) break;
        
        identificadores[n] = n + 1;
        pesos[n] = peso;
        n++;
    }

    if (n == 0) {
        printf("Nenhum boi foi cadastrado.\n");
        return 0;
    }

    for (int i = 1; i < n; i++) {
        if (pesos[i] > pesos[mais_gordo]) {
            mais_gordo = i;
        }
        if (pesos[i] < pesos[mais_magro]) {
            mais_magro = i;
        }
    }

    printf("\nLista de bois cadastrados:\n");
    for (int i = 0; i < n; i++) {
        printf("Boi %d: %.2f kg\n", identificadores[i], pesos[i]);
    }

    printf("\nBoi mais gordo: %d (%.2f kg)\n", identificadores[mais_gordo], pesos[mais_gordo]);
    printf("Boi mais magro: %d (%.2f kg)\n", identificadores[mais_magro], pesos[mais_magro]);

    return 0;
}

c) Faça o mesmo programa considerando que o número de bois é fixo e igual a dez.

#include <stdio.h>

int main() {
    int identificadores[10];
    float pesos[10];
    int mais_gordo = 0, mais_magro = 0;

    printf("Digite o peso de 10 bois:\n");
    for (int i = 0; i < 10; i++) {
        printf("Peso do boi %d: ", i + 1);
        scanf("%f", &pesos[i]);
        identificadores[i] = i + 1;
    }

    for (int i = 1; i < 10; i++) {
        if (pesos[i] > pesos[mais_gordo]) {
            mais_gordo = i;
        }
        if (pesos[i] < pesos[mais_magro]) {
            mais_magro = i;
        }
    }

    printf("\nLista de bois cadastrados:\n");
    for (int i = 0; i < 10; i++) {
        printf("Boi %d: %.2f kg\n", identificadores[i], pesos[i]);
    }

    printf("\nBoi mais gordo: %d (%.2f kg)\n", identificadores[mais_gordo], pesos[mais_gordo]);
    printf("Boi mais magro: %d (%.2f kg)\n", identificadores[mais_magro], pesos[mais_magro]);

    return 0;
}
