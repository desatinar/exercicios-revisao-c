#include <stdio.h>

 main() {
    float nota1, nota2, media, notaExame;

    
    printf("Digite a primeira nota (0 a 100): ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota (0 a 100): ");
    scanf("%f", &nota2);

    
    media = (nota1 + nota2) / 2;

    
    if (media >= 70) {
        printf("Aprovado com media: %.2f\n", media);
    } else if (media >= 40 && media < 70) {
        printf("Em exame final com média: %.2f\n", media);
        
       
        printf("Digite a nota do exame (0 a 100): ");
        scanf("%f", &notaExame);

        
        float mediaFinal = (media + notaExame) / 2;

        
        if (mediaFinal >= 50) {
            printf("Aprovado apos exame com media final: %.2f\n", mediaFinal);
        } else {
            printf("Reprovado apes exame com media final: %.2f\n", mediaFinal);
        }
    } else {
        printf("Reprovado com media: %.2f\n", media);
    }

    
}
