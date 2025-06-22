#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[5][5];
    int n;

    for (int i = 0; i < 5; i++) {
        printf("Digete numéros inteiros na coluna %d", i + 1);
        for (int j = 0; j < 5; j++) {
            scanf("%d", &n);
            if (j > 0) {
                n = -n;
            } else if (j < 0) {
                n = abs(n);
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}