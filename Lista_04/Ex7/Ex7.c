#include <stdio.h>
#include <string.h>

int main() {
    char nomes[5][50];  
    char primeiro[50];

    printf("Digite 5 nomes: ");
    for (int i = 0; i < 5; i++) {
        printf("Nome %d: ", i + 1);
        fgets(nomes[i], 50, stdin);

        nomes[i][strcspn(nomes[i], "\n")] = '\0';
    }

    strcpy(primeiro, nomes[0]);

    for (int j = 1; j < 5; j++) {
        if (strcmp(nomes[j], primeiro) < 0) {
            strcpy(primeiro, nomes[j]);
        }
    }

    printf("\nO primeiro nome é: %s\n", primeiro);

    return 0;
}