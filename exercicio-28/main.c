//28-Fazer um programa para receber um número inteiro do usuário e determinar se este número é primo ou não.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int num, i;
    bool e_Primo = true;

    
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

   
    if (num <= 1) {
        e_Primo = false;
    } else {
        
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                e_Primo = false;
                break;
            }
        }
    }

    if (e_Primo) {
        printf("%d eh um numero primo.\n", num);
    } else {
        printf("%d nao e um numero primo.\n", num);
    }

    return 0;
}
