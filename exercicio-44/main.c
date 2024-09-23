#include <stdio.h>

int mmc(int a, int b) {
    int temp_a = a, temp_b = b;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return (temp_a * temp_b) / a;
}

int main() {
    int num1, num2, n;
    printf("Digite dois números e a quantidade de múltiplos: ");
    scanf("%d %d %d", &num1, &num2, &n);

    int multiple = mmc(num1, num2);
    for (int i = 1; i <= n; i++) {
        printf("%d ", multiple * i);
    }
    printf("\n");
    return 0;
}
