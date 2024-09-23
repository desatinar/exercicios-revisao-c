#include <stdio.h>

int main() {
    int idades[20]; 
    int soma = 0; 
    int count_maior = 0; 
    int count_menor = 0; 
    int idade_min = 150; 
    int idade_max = 0;
    int idades_pares[20]; 
    int idades_impares[20]; 
    int count_pares = 0; 
    int count_impares = 0; 
    
    printf("Digite as idades de 20 pessoas:\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &idades[i]);
        soma += idades[i];
        if (idades[i] >= 18) {
            count_maior++; 
        } else {
            count_menor++; 
        }
        if (idades[i] < idade_min) {
            idade_min = idades[i]; 
        }
        if (idades[i] > idade_max) {
            idade_max = idades[i]; 
        }
        if (idades[i] % 2 == 0) {
            idades_pares[count_pares++] = idades[i]; 
        } else {
            idades_impares[count_impares++] = idades[i]; 
        }
    }

    // exibir os resultados
    printf("a) Soma das idades: %d\n", soma);
    printf("b) Média das idades: %.2f\n", (float)soma / 20);
    printf("c) Quantas pessoas são maiores de idade: %d\n", count_maior);
    printf("d) Quantas pessoas são menores de idade: %d\n", count_menor);
    printf("e) Idade do mais jovem: %d\n", idade_min);
    printf("f) Idade do mais velho: %d\n", idade_max);
    printf("g) Idades pares: ");
    for (int i = 0; i < count_pares; i++) {
        printf("%d ", idades_pares[i]);
    }
    printf("\n");
    printf("h) Idades ímpares: ");
    for (int i = 0; i < count_impares; i++) {
        printf("%d ", idades_impares[i]);
    }
    printf("\n");

    return 0;
}
