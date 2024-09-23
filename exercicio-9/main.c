#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/*
9º) Faça um algoritmo que leia 20 números e, ao final, escreva quantos estão entre 0 e 100, quantos estão entre 101 e 200 e quantos são maiores de 200. 
*/

int main() {
    
    setlocale(LC_ALL,"Portuguese");
    int V[20],i,cont1=0,cont2=0,cont3=0;
    
    for (i=0;i<=19;i++) {
        
    printf("\nDigite um número intero: ");
    scanf("%d",&V[i]);
    
    if ((V[i]>0) && (V[i]<100)) {
        cont1++;
        }
        
    else if ((V[i]>101) && (V[i]<200)) {
        cont2++;
        }
    
    else if (V[i]>200) {
        cont3++;
    
        }
    
    }

    printf("\n\nNo total são %d entre 0 e 100.",cont1);
    printf("\nNo total são %d entre 101 e 200.",cont2);
    printf("\nNo total são %d são maiores de 200.",cont3);
    
    return 0;
}
