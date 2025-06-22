#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int consumo[30];
    float media;
    int total;
    int maior, menor;
    int dia_menor, dia_maior;

    srand(time(NULL));

    for (int i = 0; i < 30; i++) {
        consumo[i] = (rand() % 401) + 100;
        total += consumo[i];

        if (i == 0) {
            maior = menor = consumo[i];
            dia_maior = dia_menor = i + 1;
        } else {
            if (consumo[i] > maior) {
                maior = consumo[i];
                dia_maior = i + 1;
            }
            if (consumo[i] < menor) {
                menor = consumo[i];
                dia_menor = i + 1;
            }
        }
    }

    printf("Total de consumo no mês: %d litros\n", total);

    media = total / 30.0;
    printf("Média de consumo diário: %.2f litros\n", media);

    printf("Maior consumo foi no dia %d: %d litros\n", dia_maior, maior);
    printf("Menor consumo foi no dia %d: %d litros\n", dia_menor, menor);

    return 0;
}