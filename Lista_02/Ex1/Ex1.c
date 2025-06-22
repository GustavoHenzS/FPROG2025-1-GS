#include <stdio.h>

int main() {
    int min, seg;

    printf("Digite o tempo em minutos: ");
    scanf("%d", &min);

    seg = min * 60;

    printf("O tempo em segundos é: %d\n", seg);

    return 0;
}