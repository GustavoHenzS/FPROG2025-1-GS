#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int matriz[4][6];
    int soma_2 = 0;
    int soma_5 = 0;
    int multi = 1;
    int pares = 0;
    int impares = 0;
    int maior, menor;

    for (int i = 0; i < 4; i++) {
        for(int j = 0; j < 6; j++) {
            matriz[i][j] = (rand() % 21) - 10;

            if (i == 0 && j == 0) {
                maior = matriz[i][j];
                menor = matriz[i][j];
            } else if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            } else if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
            
            if (i == 1){
                soma_2 += matriz[i][j];
            }
            if (j == 4)
            {
                soma_5 += matriz[i][j];
            }

            
            if (j % 2 == 0) {
                pares += matriz[i][j];
            }  
            if (i % 2 == 1) {
                impares += matriz[i][j];
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        for(int j = 0; j < 6; j++) {
            multi *= matriz[0][j] * matriz[3][j];
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Soma da segunda linha: %i\n", soma_2);
    printf("Soma da quinta coluna: %i\n", soma_5);
    printf("Produto da primeira com a quarta linha: %i\n", multi);
    printf("Soma das colunas de índice par: %i\n", pares);
    printf("Soma das linhas de índice ímpar: %i\n", impares);
    printf("Maior valor da matriz: %i\n", maior);
    printf("Menor valor da matriz: %i\n", menor);

    return 0;
}