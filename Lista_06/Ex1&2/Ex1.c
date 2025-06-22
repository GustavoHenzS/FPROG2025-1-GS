#include <stdio.h>

int main() {
    int vet1[5] = {1, 5, 9, 2, 5};
    int vet2[5] = {7, 4, 13, 21, 6};
    int vet3[5] = {8, -3, 5, 7, 12};

    int matriz[3][5];
    int multi = 1;

    for (int i = 0; i < 5; i++) {
        matriz[0][i] = vet1[i];
        matriz[1][i] = vet2[i];
        matriz[2][i] = vet3[i];
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
            if (matriz[i][j] > 7) {
                multi *= matriz[i][j];
            }
        }
        printf("\n");
    }
    
    printf("Resultado: %d\n", multi);
    
    return 0;
}