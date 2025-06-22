#include <stdio.h>

int main() {
    int divisor, inicio, fim;

    printf("Entre com o valor do divisor: ");
    scanf("%d", &divisor);

    printf("Início: ");
    scanf("%d", &inicio);

    printf("Final: ");
    scanf("%d", &fim);

    if (divisor == 0) {
        printf("Divisor não pode ser zero.\n");
        return 1;
    }

    printf("Números divisíveis por %d no intervalo de %d a %d:\n", divisor, inicio, fim);

    for (int i = inicio; i < fim; i++) {
        if (i % divisor == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}