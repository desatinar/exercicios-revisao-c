#include <stdio.h>

int main() {
    int var1, var2;

    int *endereco_var1 = &var1;
    int *endereco_var2 = &var2;

    if (endereco_var1 > endereco_var2) {
        printf("O maior endereço é: %p (var1)\n", (void*)endereco_var1);
    } else if (endereco_var2 > endereco_var1) {
        printf("O maior endereço é: %p (var2)\n", (void*)endereco_var2);
    } else {
        printf("Os endereços são iguais: %p\n", (void*)endereco_var1);
    }

    return 0;
}
