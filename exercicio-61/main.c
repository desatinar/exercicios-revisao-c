#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/*
61º)Implementar a função EXP com as seguintes características:

	a) Recebe um valor de base e um valor de expoente como parâmetros do tipo unsigned int.

	b) Retorna o resultado de baseexpoente na forma de um unsigned int.

	c) Armazena o valor 1 na variável global status se foi bem sucedida, e 0 se a exponenciação não pôde ser calculada devido a estouro.	
	
	d) Utiliza a característica recursiva da exponenciação:
		Baseexp = base.baseexp-1 , exp > 0
		Baseexp = 1, exp ==0
*/


unsigned int status = 0;

unsigned int exp(unsigned int base, unsigned int exponent) {
    if (exponent == 0) {
        status = 1;
        return 1;
    } else if (exponent > 0) {
        unsigned int result = base;
        unsigned int temp = exp(base, exponent - 1);
        if (temp > UINT_MAX / base) {
            status = 0;
            return 0; 
        }
        result *= temp;
        if (result < temp) {
            status = 0;
            return 0; 
        }
        status = 1;
        return result;
    } else {
        status = 0;
        return 0; 
    }
}

int main() {
    unsigned int base;
    unsigned int exponent;

    printf("Insira a base: ");
    scanf("%u", &base);

    printf("Insira o expoente: ");
    scanf("%u", &exponent);

    unsigned int result = exp(base, exponent);

    printf("Resultado da exponenciação: %u\n", result);
    printf("Status da operação: %u\n", status);

    return 0;
}
