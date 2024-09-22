#include <stdio.h>
#include <locale.h>

//Escreva uma fun��o que aceita como par�metro um array de inteiros com N valores, e determina 
//o maior elemento do array e o n�mero de vezes que este elemento ocorreu no array. Por exemplo, 
//para um array com os seguintes elementos: 5, 2, 15, 3, 7, 15, 8, 6, 15, a fun��o deve retornar 
//para o programa que a chamou o valor 15 e o n�mero 3 (indicando que o n�mero 15 ocorreu 3 vezes). 
//A fun��o deve ser do tipo void.

void maior_frequencia(int array[], int N, int *maior, int *frequencia){
    *maior = array[0];
    *frequencia = 1;
	int i;
	
    for(i = 1; i < N; i++){
        if (array[i] > *maior) {
            *maior = array[i];
            *frequencia = 1;
        } else if (array[i] == *maior) {
            (*frequencia)++;
        }
    }
}

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	
    int array[] = {5, 2, 15, 3, 7, 15, 8, 6, 15};
    int N = sizeof(array) / sizeof(array[0]);
    int maior, frequencia;

    maior_frequencia(array, N, &maior, &frequencia);


    printf("O maior valor � %d e ocorre %d vezes.\n", maior, frequencia);

    return 0;
}
