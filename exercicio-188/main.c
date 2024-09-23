#include <stdio.h>

int divs(int num, int *max, int *min) {
    int i, is_prime = 1;


    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            is_prime = 0;
            break;
        }
    }

    if (is_prime) {
        return 0; 
    }

    *min = *max = num;
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            if (i < *min) {
                *min = i;
            }
            if (i > *max) {
                *max = i;
            }
        }
    }

    return 1; 
}

int main() {
    int num, max, min;

    printf("Enter a number: ");
    scanf("%d", &num);

    int result = divs(num, &max, &min);

    if (result == 0) {
        printf("%d is prime.\n", num);
    } else {
        printf("%d is not prime.\n", num);
        printf("Smallest divisor: %d\n", min);
        printf("Largest divisor: %d\n", max);
    }

    return 0;
}
