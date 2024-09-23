#include <stdio.h>

int main() {
    int A, *B, **C, ***D;

    
    printf("Enter a value for A: ");
    scanf("%d", &A);


    B = &A;
    C = &B;
    D = &C;

    
    printf("Double: %d\n", **B * 2);
    printf("Triple: %d\n", ***C * 3);
    printf("Quadruple: %d\n", ****D * 4);

    return 0;
}
