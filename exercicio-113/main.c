#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>


/*
113º) Faça um programa que dado o array unidimensional [2; 4; 35; 50; 23; 17; 9; 12; 27; 5] retorne:
	
	a) maior valor
	b) média dos valores
	c) os valores dispostos em ordem crescente
	d) sub conjunto de valores primos que está contido no array
*/


int main() {
    
    setlocale(LC_ALL,"Portuguese");
    int V[] = {2, 4, 35, 50, 23, 17, 9, 12, 27, 5};
    int i, k, aux, maior=0;
    float media,soma;
    
    printf("Os números são: ");
    
    for (i=0; i<10;i++) {
    	
    	printf("%d ",V[i]);
        
        //a) maior valor
        if (V[i]>maior) {
            maior=V[i];
        }
        
        //b) média dos valores
        soma+=V[i];
        media=soma/10; 
		
	
    }

    printf("\n\nO maior valor é %d.",maior);
    printf("\nA média dos valores é %.1f",media);
    printf("\nA ordem é:");
    
    //c) os valores dispostos em ordem crescente
    for (k=0; k<9; k++) {
    	
    	for (i=0; i<9-1 ;i++) {
		
	    	if (V[i]>V[i+1]) {
	    		
	    		aux = V[i];
	    		V[i] = V[i+1];
	    		V[i+1] = aux;
			}
		}	
    }
    
    for (i=0; i<9 ;i++) {
    	printf("%d ",V[i]);
	}
	
	
	//d) sub conjunto de valores primos que está contido no array
	int resultado=0;
	for (i = 2; i <= V[i]  / 2; i++) {
    	if ( V[i] % i == 0) {
      	resultado++;
       	break;
    		}
 	}
	
	printf("\nOs números primos são: %d %d %d %d ",V[0], V[5], V[6], V[9]);
	
	
    return 0;
}


