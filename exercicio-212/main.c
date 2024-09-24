#include <stdio.h>
#include <string.h>
void cifra_cesar(char *mensagem, int k)
{
    for (int i = 0; mensagem[i] != '\0'; i++)
    {
        char letra = mensagem[i];
        if (letra >= 'A' && letra <= 'Z')
        {
            letra = ((letra - 'A' + k) % 26) + 'A';
        }
        else if (letra >= 'a' && letra <= 'z')
        {
            letra = ((letra - 'a' + k) % 26) + 'a';
        }
        else if (letra == ' ')
        {
            letra = ' ';
        }
        mensagem[i] = letra;
    }
}
void inverter_string(char *mensagem)
{
    int n = strlen(mensagem);
    for (int i = 0; i < n / 2; i++)
    {
        char temp = mensagem[i];
        mensagem[i] = mensagem[n - 1 - i];
        mensagem[n - 1 - i] = temp;
    }
}
int main()
{
    char mensagem[100];
    int k;
    printf("Digite a mensagem a ser criptografada (max 99 caracteres): ");
    fgets(mensagem, sizeof(mensagem), stdin);
    mensagem[strcspn(mensagem, "\n")] = '\0';
    printf("Digite o valor de K (deslocamento): ");
    scanf("%d", &k);
    k = k % 26;
    cifra_cesar(mensagem, k);
    inverter_string(mensagem);
    printf("Mensagem criptografada e invertida: %s\n", mensagem);
    return 0;
}
