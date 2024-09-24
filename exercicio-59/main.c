#include <stdio.h>
float calculaValorDevido(float peso, float custo_fixo, float preco_kg, float largura_faixa, float desconto_faixa, float desconto_max) {
float peso_kg = peso / 1000.0;
float valor_total = custo_fixo;
float preco_por_faixa = preco_kg;
for (float i = 0; i < peso; i += largura_faixa) {
float peso_faixa = (i + largura_faixa > peso) ? (peso - i) : largura_faixa;
if (preco_por_faixa > (preco_kg * (1 - desconto_max / 100))) {
float desconto_atual = (int)(i / largura_faixa) * desconto_faixa;
if (desconto_atual > desconto_max) {
desconto_atual = desconto_max;
}
valor_total += (peso_faixa / 1000.0) * preco_kg * (1 - desconto_atual / 100);
} else {
valor_total += (peso_faixa / 1000.0) * preco_kg;
}
}
return valor_total;
}
int main() {
float peso = 600.0;
float custo_fixo = 5.0;
float preco_kg = 20.0;
float largura_faixa = 100.0;
float desconto_faixa = 10.0;
float desconto_max = 50.0;
float valor_devido = calculaValorDevido(peso, custo_fixo, preco_kg, largura_faixa, desconto_faixa, desconto_max);
printf("Valor devido: R$ %.2f\n", valor_devido);
return 0;
}
