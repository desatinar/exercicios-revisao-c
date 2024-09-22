#include <stdio.h>

int v[10];
int par = 0;
int i;

int main() {

    printf("Informe 10 números: \n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    for(i = 0; i < 10; i++) {

        if(v[i] % 2 == 0) {
            par++;  
        }
    }

    printf("Quantidade de números pares: %d\n", par);

    return 0;
}
