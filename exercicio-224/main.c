#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float *valores;
    int tamanho;    
} MaMeMe;

void classifica(MaMeMe* valores) {
    int n = valores->tamanho;
    float *arr = valores->valores;
	int i, j;
    
    for ( i = 0; i < n - 1; i++) {
        for ( j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

main() {
   
    float array[] = {3.5, 1.2, -4.6, 2.1, 0.0};
    int tamanho = sizeof(array) / sizeof(array[0]);
	int i,j;
    MaMeMe valores;
    valores.valores = array;
    valores.tamanho = tamanho;

    
    classifica(&valores);

   
    printf("Valores ordenados: ");
    for ( i = 0; i < tamanho; i++) {
        printf("%.2f ", valores.valores[i]);
    }
    printf("\n");

}
