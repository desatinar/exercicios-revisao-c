int main() {
int x[TAMANHO], y[TAMANHO];
int soma[TAMANHO], produto[TAMANHO];
int diferenca[TAMANHO], interseccao[TAMANHO];
int uniao[TAMANHO * 2];
printf("Digite os elementos do vetor x:\n");
for (int i = 0; i < TAMANHO; i++) {
int valor;
printf("Elemento %d: ", i + 1);
scanf("%d", &valor);
while (existe(x, i, valor)) {
printf("Elemento repetido. Por favor, digite um valor único: ");
scanf("%d", &valor);
}
x[i] = valor;
}
printf("\nDigite os elementos do vetor y:\n");
for (int i = 0; i < TAMANHO; i++) {
printf("Elemento %d: ", i + 1);
scanf("%d", &valor);
while (existe(y, i, valor)) {
printf("Elemento repetido. Por favor, digite um valor único: ");
scanf("%d", &valor);
}
y[i] = valor;
}
for (int i = 0; i < TAMANHO; i++) {
soma[i] = x[i] + y[i];
produto[i] = x[i] * y[i];
}
int d = 0;
for (int i = 0; i < TAMANHO; i++) {
if (!existe(y, TAMANHO, x[i])) {
diferenca[d++] = x[i];
}
}
int inter = 0;
for (int i = 0; i < TAMANHO; i++) {
if (existe(y, TAMANHO, x[i])) {
interseccao[inter++] = x[i];
}
}
int u = 0;
for (int i = 0; i < TAMANHO; i++) {
uniao[u++] = x[i];
}
for (int i = 0; i < TAMANHO; i++) {
if (!existe(uniao, u, y[i])) {
uniao[u++] = y[i];
}
}
printf("\nResultados:\n");
printf("Soma entre x e y: ");
for (int i = 0; i < TAMANHO; i++) {
printf("%d ", soma[i]);
}
printf("\nProduto entre x e y: ");
for (int i = 0; i < TAMANHO; i++) {
printf("%d ", produto[i]);
}
printf("\nDiferença entre x e y: ");
for (int i = 0; i < d; i++) {
printf("%d ", diferenca[i]);
}
printf("\nInterseção entre x e y: ");
for (int i = 0; i < inter; i++) {
printf("%d ", interseccao[i]);
}
printf("\nUnião entre x e y: ");
for (int i = 0; i < u; i++) {
printf("%d ", uniao[i]);
}
printf("\n");
return 0;
}
