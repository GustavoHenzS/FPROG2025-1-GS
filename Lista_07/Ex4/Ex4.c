#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int inicio, fim;

    printf("Inicío: ");
    scanf("%d", &inicio);

    printf("Fim: ");
    scanf("%d", &fim);

    int intervalo = (rand() % fim) - inicio;
    printf("Numéro entre [%d, %d]: %d", inicio, fim, intervalo);

    return 0;
}