#include <stdio.h>

int mdc(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return mdc(b, a % b);
    }
}

int main() {
    int num1, num2;

    while (1) {
        printf("Digite dois números (ou 0 e 0 para sair):\n");
        scanf("%d %d", &num1, &num2);

        if (num1 == 0 && num2 == 0) {
            break;
        }

        printf("MDC de %d e %d: %d\n", num1, num2, mdc(num1, num2));
    }

    return 0;
}
