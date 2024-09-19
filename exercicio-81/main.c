//Crie um programa que lê 6 valores inteiros pares e, em seguida, mostre na 
//tela os valores lidos na ordem inversa.

#include <stdio.h>

int main()
{
    int numeros[6];
    
    for(int i = 0; i < 6; i++){
        printf("Digite um numero inteiro par: ");
        scanf("%d", &numeros[i]);
    }
    
    for(int i = 5; i >= 0; i--){
        printf("%d\n", numeros[i]);
    }

    return 0;
}
