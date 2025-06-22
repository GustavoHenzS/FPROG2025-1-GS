#include <stdio.h>
#include <ctype.h> 

int main() {
    int x;
    float notaA, notaB, notaC, media, somaMedias = 0.0;
    char substituir;
    
    printf("Digite o número de alunos: ");
    scanf("%d", &x);

    for (int i = 1; i <= x; i++) {
        printf("\nAluno %d:\n", i);
        
        printf("Digite a nota do Grau A: ");
        scanf("%f", &notaA);
        printf("Digite a nota do Grau B: ");
        scanf("%f", &notaB);

        media = (notaA + notaB) / 2;

        if (media >= 6.0) {
            printf("APROVADO\n");
        } else {
            printf("Digite a nota do Grau C: ");
            scanf("%f", &notaC);
            printf("Qual nota deseja substituir (A ou B)? ");
            scanf(" %c", &substituir);
            substituir = toupper(substituir); 

            if (substituir == 'A') {
                notaA = notaC;
            } else if (substituir == 'B') {
                notaB = notaC;
            } else {
                printf("Opção inválida! Nenhuma substituição feita.\n");
            }

            media = (notaA + notaB) / 2;

            if (media >= 6.0) {
                printf("APROVADO\n");
            } else {
                printf("REPROVADO\n");
            }
        }

        somaMedias += media;
    }

    float mediaGeral = somaMedias / x;
    printf("\nMédia geral da turma: %.2f\n", mediaGeral);

    return 0;
}
