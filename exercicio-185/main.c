void ordenaTresNumeros(int *a, int *b, int *c) {
    int temp;

    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }

    if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }

    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int x, y, z;

    printf("Digite três números: ");
    scanf("%d %d %d", &x, &y, &z);

    ordenaTresNumeros(&x, &y, &z);

    printf("Em ordem crescente: %d %d %d\n", x, y, z);

    return 0;
}
