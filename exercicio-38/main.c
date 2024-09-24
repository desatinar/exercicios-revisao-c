#include <stdio.h>

int main() {
    int numero;
    int temTres = 0; 

    
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

   
    if (numero < 0) {
        printf("Por favor, insira um número inteiro positivo.\n");
        return 1;
    }

    
    while (numero > 0) {
        if (numero % 10 == 3) {
            temTres = 1;  
            break;
        }
        numero /= 10;  
    }

    
    if (temTres) {
        printf("O número contém o dígito 3.\n");
    } else {
        printf("O número não contém o dígito 3.\n");
    }

    return 0;
}
