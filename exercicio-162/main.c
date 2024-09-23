#include <stdio.h>

int main() {
    int valores[5];
    int* p = valores; 

    printf("Digite 5 valores:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", p); 
        p++; 
    }

    p = valores; 
    printf("Dobro dos valores lidos:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *p * 2); 
        p++; 
    }
    printf("\n");

    return 0;
}
