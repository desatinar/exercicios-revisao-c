// 100	Leia 10 números inteiros e armazene em um vetor.  Em seguida escreva os elementos 
//que são primos e suas respectivas posições no vetor.

#include <stdio.h>

int main(){
    int v[10];
    int i;
    int j;
    int cont;

    printf("Infome 10 números inteiros: \n");
    for(i=0; i<10; i++){
        scanf("%d", &v[i]);
    }

    for(i=0; i<10; i++){
        cont=0;
        for(j=1; j<=v[i]; j++){
            if(v[i] % j == 0){
                cont++;
            }
        }
        if(cont == 2){
            printf("O número %d na posição %d é primo", v[i], i);
        }
    }

    return 0;
}
