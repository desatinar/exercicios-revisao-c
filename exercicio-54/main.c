/*Implementar a função double power (double base, double expoente), que retorna o valor de base elevado a expoente. Dicas:
Transformar o expoente em uma razão de inteiros (multiplicando ambos por 10 até o numerador ficar inteiro).
Simplificar a razão de inteiros com sucessivas divisões de numerador e denominador.
Calcular basenumerador
Calcular	(basenumerador)1/denominador. Utilizar a função de raiz anteriormente implementada.
Se basenumerador estourar a faixa dos double, dividir numerador e denominador por 10 e repetir.
Se numerador for negativo, resultado é 1/resultado.

*/

#include <stdio.h>
#include <string.h>

void simplificar(int *numerador, int *denominador) {
    int a = *numerador;
    int b = *denominador;
    

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    *numerador /= a;
    *denominador /= a;
}

double potencia(int base, int expoente) {
    double resultado = 1.0;
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    return resultado;
}

double raiz(double x, int n) {
    double baixo = 0.0;
    double alto = x > 1.0 ? x : 1.0;
    double meio;

    for (int i = 0; i < 1000; i++) { 
        meio = (baixo + alto) / 2;
        double pot = potencia(meio, n);

        if (pot < x) {
            baixo = meio;
        } else {
            alto = meio;
        }
    }

    return meio;
}

double power(double base, double expoente) {
    if (base == 0 && expoente <= 0) {
        return -1; 
    }
    
   
    int numerador = (int)(expoente * 10);
    int denominador = 10;
    
   
    simplificar(&numerador, &denominador);

    
    double basenumerador = potencia((int)base, numerador);
    
   
    double resultado = raiz(basenumerador, denominador);
    
   
    if (numerador < 0) {
        return 1.0 / resultado;
    }

    return resultado;
}

int main() {
    double base, expoente;
    printf("Insira a base: ");
    scanf("%lf", &base);
    printf("Insira o expoente: ");
    scanf("%lf", &expoente);
    
    double resultado = power(base, expoente);
    
    if (resultado == -1) {
        printf("Resultado: Indefinido (base 0 com expoente negativo)\n");
    } else {
        printf("Resultado: %lf\n", resultado);
    }
    
    return 0;
}
