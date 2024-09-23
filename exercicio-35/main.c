#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <unistd.h>

/*
35º)Fazer um programa para medir os reflexos do usuário. O programa deve:

	a) Mostrar a palavra “Agora!” após um tempo aleatório e um número, também aleatório
	b) Medir o tempo até que o usuário digite o número pedido e mostrar esse tempo.
	c) Dica: usar a função clock da biblioteca time.h (verificar exemplos na internet ou pedir ao professor),
*/

int main() {
    
    setlocale(LC_ALL,"Portuguese");
    int numero_aleatorio = rand() % 11;
    int tempo_aleatorio = rand() % 31;
    int resposta;
    clock_t ti,tf;
    
    printf("O número aparecera em alguns segundos",tempo_aleatorio);
    
    sleep (tempo_aleatorio);
    
    printf("\n\nAgora!  %d",numero_aleatorio);
    
    ti = clock();
    
    printf("\n\nQual o número: ");
    scanf("%d",&resposta);
    
    tf = clock() - ti;
    
    printf("/n0Você levou %d segundos para digtar o número",tf / CLOCKS_PER_SEC);
    

    return 0;
}

