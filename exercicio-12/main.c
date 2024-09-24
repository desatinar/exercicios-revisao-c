#include <stdio.h>

int main() {
    int numero;

    
    printf("Digite um nÃºmero: ");
    scanf("%d", &numero);

    
    if (numero % 2 == 0) {
        printf("O nÃºmero %d Ã© par.\n", numero);
    } else {
        printf("O nÃºmero %d Ã© Ã­mpar.\n", numero);
    }

    return 0;
}
