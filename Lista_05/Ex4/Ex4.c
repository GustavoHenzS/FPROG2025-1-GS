#include <stdio.h>
#include <string.h>

int main() {
    char* semana[7] = {"Domingo", "Segunda", "Terça", "Quarta", "Quinta", "Sexta", "Sabádo",};
    int passos[7];
    int total;
    float media;
    int meta_atingida;

    for (int i = 0; i < 7; i++) {
        printf("Número de passos - %s: ", semana[i]);
        scanf("%d", &passos[i]);
        total += passos[i];
    }

    printf("\nTotal de passos na semana: %d\n", total);

    media = total / 7.0;
    printf("Média diária de passos: %.2f\n", media);

    for (int j = 0; j < 7; j++) {
        if (passos[j] >= 10000) {
            printf("Dias em que a meta de 10.000 passos foi atingida:\n");
            printf("- %s (%d passos)\n", semana[j], passos[j]);
            meta_atingida = 1;
        }
    }
    if (!meta_atingida) {
        printf("Nenhum dia atingiu a meta de 10.000 passos.\n");
    }

    return 0;
}