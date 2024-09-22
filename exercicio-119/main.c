#include <stdio.h>
#include <locale.h>

//Fa�a um programa para receber do usu�rio a dimens�o de um array (m�x. 20), os elementos 
//desse array e efetuar a sua ordena��o utilizando o m�todo da bolha (bubble-sort).

void BubbleSort(int vetor[], int tamanho){
	int aux, i, j;
	for(j=tamanho-1; j>=1; j--){
		for(i=0; i<j; i++){
			if(vetor[i]>vetor[i+1]){
				aux=vetor[i];
                    vetor[i]=vetor[i+1];
                    vetor[i+1]=aux;
            }
        }
    }
}

int main(){
    setlocale(LC_ALL, "PORTUGUESE");
    int n, i;
    int array[20];

    do{
        printf("Digite o n�mero de elementos do array (m�x. 20): ");
        scanf("%d", &n);
    } while(n < 1 || n > 20);

    printf("Digite os %d elementos do array:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    BubbleSort(array, n);

    printf("\nArray ordenado:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
	printf("\n");
    return 0;
}
