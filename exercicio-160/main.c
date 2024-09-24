#include <stdio.h>
int main()
{
    float array[10];
    for (int i = 0; i < 10; i++)
    {
        array[i] = (float)(i + 1) * 1.5;
    }
    printf("Endereços das posições do array:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Endereço de array[%d]: %p\n", i, (void *)&array[i]);
    }
    return 0;
}
