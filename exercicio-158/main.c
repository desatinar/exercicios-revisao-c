/*Elaborar um programa que leia dois valores inteiros (A e B). Em seguida,
 faça uma função que retorne a soma do dobro dos dois números lidos.
 A função deverá armazenar o dobro de A na própria variável A e o dobro de B na própria variável B.
*/
void somaDobro(int *ia, int *ib, int *resultado)
{

    *ia *= 2;
    *ib *= 2;

    *resultado = *ia + *ib;
}

int main()
{

    int a;
    int b;
    int resultado;

    printf("digite um numero:\n");
    scanf("%d",&a);

    printf("digite um numero:\n");
    scanf("%d", &b);

    somaDobro(&a,&b,&resultado);

    printf("Dobro de A: %d\n", a);
    printf("Dobro de B: %d\n", b);
    printf("Soma do dobro de A e B: %d\n", resultado);

    return 0;



}
