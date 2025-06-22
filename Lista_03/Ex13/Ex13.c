#include <stdio.h>

int main() {
    float grauA, grauB, grauC, media;
    char substitui;

    printf("Digite a nota do Grau A: ");
    scanf("%f", &grauA);
    printf("Digite a nota do Grau B: ");
    scanf("%f", &grauB);

    media = (grauA + grauB) / 2.0;
    printf("Média final: %.2f\n", media);

    if (media >= 6.0) {
        printf("Aluno aprovado por média!\n");
    } else {
        printf("Aluno em recuperação. Deseja substituir o Grau A ou Grau B? (a/b): ");
        scanf(" %c", &substitui); 
        printf("Digite a nota do Grau C: ");
        scanf("%f", &grauC);

        if (substitui == 'a' || substitui == 'A') {
            media = (grauC + grauB) / 2.0;
        } else if (substitui == 'b' || substitui == 'B') {
            media = (grauA + grauC) / 2.0;
        } else {
            printf("Opção inválida.\n");
            return 1;
        }

        printf("Nova média final: %.2f\n", media);

        if (media >= 6.0) {
            printf("Aluno aprovado após recuperação!\n");
        } else {
            printf("Aluno reprovado.\n");
        }
    }

    return 0;
}