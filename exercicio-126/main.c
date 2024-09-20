// Escreva um programa que recebe uma lista de datas digitadas pelo usuário e as 
// mostra em ordem cronológica. Cada data é fornecida no formato DD/MM/AAAA. 
// O programa deve ser capaz de receber até 64 datas, mas se o usuário digitar 
// 0/0/0, o programa deve imediatamente mostrar as datas digitadas ordenadas, 
// sem considerar o 0/0/0. Neste exercício, não se preocupe em verificar a 
// consistência / validade das entradas.
#include <stdio.h>
#include <string.h>

int main()
{
    char datas_usuario[64][11];
    int i = 0;
    int j = 0;
    char comparador_data[11];
    int comparacao;
    
    for(i; i < 64; i++){
        printf("Digite uma data no formato DD/MM/AAAA: ");
        scanf(" %s", datas_usuario[i]);
        comparacao = strcmp(datas_usuario[i], "0/0/0");
        
        if(comparacao == 0){
            break;
        }
    }
    
    for(j = 0; j < i; j++){
        printf("%s\n", datas_usuario[j]);
    }
    return 0;
}
