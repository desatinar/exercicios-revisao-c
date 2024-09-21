#include <stdio.h>
int main() {
    int num[20];
    int i, cont = 0;
    printf("Digite 20 numeros:\n");
    for (i = 0; i < 20; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 20; i++) {
        if (num[i] >= 0 && num[i] <= 100) {
            cont++;
        }}
    printf("Quantidade de numeros entre 0 e 100: %d\n", cont);
    return 0;
}
