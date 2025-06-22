#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    char escolha[6];
    int usuario, computador, soma;

    srand(time(NULL)); 

    printf("Par ou ímpar? ");
    scanf("%s", escolha);

    printf("Digite um número de 0 a 5: ");
    scanf("%d", &usuario);

    if (usuario < 0 || usuario > 5) {
        printf("Número inválido! Deve ser entre 0 e 5.\n");
        return 1;
    }

    computador = rand() % 6; 

    soma = usuario + computador;
    printf("Você jogou %d e o computador %d. Soma = %d\n", usuario, computador, soma);

    if ((strcmp(escolha, "par") == 0 && soma % 2 == 0) ||
        (strcmp(escolha, "impar") == 0 || strcmp(escolha, "impar") == 0) && soma % 2 != 0) {
        printf("Você venceu!\n");
    } else {
        printf("O programa venceu!\n");
    }

    return 0;
}