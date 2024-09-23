#include <stdio.h>

unsigned char calculaParidade(unsigned char b) {
    int count = 0;
    for (int i = 0; i < 8; i++) {
        if ((b >> i) & 1) {
            count++;
        }
    }
    return count % 2;
}

int main() {
    unsigned char b;

    printf("Digite um byte (ou 0 para sair):\n");
    while (1) {
        scanf("%hhu", &b);

        if (b == 0) {
            break;
        }

        printf("Paridade de 0x%x: %d\n", b, calculaParidade(b));
    }

    return 0;
}
