#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int comparar(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}


int saoPermutacoes(int a, int b) {
    char strA[5], strB[5]; 

    
    sprintf(strA, "%d", a);
    sprintf(strB, "%d", b);

    
    if (strlen(strA) != strlen(strB)) {
        return 0;
    }

    
    qsort(strA, strlen(strA), sizeof(char), comparar);
    qsort(strB, strlen(strB), sizeof(char), comparar);

    
    return strcmp(strA, strB) == 0;
}

int main() {
    int numeros[10];
    int agrupado[10] = {0}; 


    printf("Digite 10 números de até 4 dígitos:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nGrupos de permutações:\n");
    int grupo = 1;

   
    for (int i = 0; i < 10; i++) {
        
        if (!agrupado[i]) {
            printf("Grupo %d: %d", grupo, numeros[i]);
            agrupado[i] = 1;

            
            for (int j = i + 1; j < 10; j++) {
                if (!agrupado[j] && saoPermutacoes(numeros[i], numeros[j])) {
                    printf(", %d", numeros[j]);
                    agrupado[j] = 1; 
                }
            }

            printf("\n");
            grupo++;
        }
    }

    return 0;
}
