#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int jogadores = 4;
    int rodadas = 5;
    int pontos[4] = {0};

    for (int i = 0; i < rodadas; i++) {
        printf("Rodada %d:\n", i + 1);
        for (int j = 0; j < jogadores ; j++) {
            int sorteio = rand() % 101;
            pontos[j] += sorteio;
            printf("  Jogador %d fez %d pontos (total: %d)\n", j + 1, sorteio, pontos[j]);

            if (sorteio > 80) {
                printf("  Em destque! Jogador %d: %d pontos\n", j + 1, pontos[j]);
            }

        }
    }

    int maior = pontos[0];
    int vencedor = 0;
    int empate = 0;

    for (int q = 0; q < jogadores; q++) {
        if (pontos[q] > maior) {
            maior = pontos[q];
            vencedor = q;
            empate = 0;
        } else if (pontos[q] == maior) {
            empate = 1;
        }
    }

    printf("\n");
    if (empate) {
        printf("Houve um empate entre os jogadores com maior pontuação!\n");
    } else {
        printf("O vencedor foi o Jogador %d com %d pontos!\n", vencedor + 1, maior);
    }

    return 0;
}