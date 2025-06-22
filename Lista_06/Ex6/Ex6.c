#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    double notas[10][3];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 2; j++) {
            notas[i][j] = ((double)rand() / RAND_MAX) * 10.0;
        }
        notas[i][2] = (0.37 * notas[i][0]) + (0.63 * notas[i][1]);
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.1f ", notas[i][j]);
        }
        printf("\n");
    }

    return 0;
}