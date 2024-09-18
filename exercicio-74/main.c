// #include <stdio.h>


// // int main(){
// // int num1, num2, num3, num4, num5, num6;

// // printf("Informe 6 números inteiros: \n");
// // scanf("%d %d %d %d %d %d", &num1,&num2,&num3,&num4,&num5,&num6);

// // printf("Os números digitados são: %d %d %d %d %d %d", num1, num2, num3, num4, num5, num6);

// // }

//Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos
#include <stdio.h>

int main(){
    int v[6];
    int i;

    printf("Infome 6 números inteiros: \n");
    for(i=0; i<6; i++){
        scanf("%d", &v[i]);
    }

    printf("Os números digitados são:");
        for(i=0; i<6; i++){
            printf("%d", v[i]);
        }
}
