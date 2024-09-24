
int main() {
    int numeros[10], i, j, num;

    printf("Digite 10 números diferentes:\n");

    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &num);
        for (j = 0; j < i; j++) {
            if (num == numeros[j]) {
                printf("Número já digitado. Digite outro:\n");
                i--;
                break;
            }
        }
      
        if (j == i) {
            numeros[i] = num;
        }
    }

    printf("\nVetor final:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
