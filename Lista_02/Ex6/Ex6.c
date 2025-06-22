#include <stdio.h>

int main() {
    int celulares, tablets;
    float total;

    printf("Digite o numero de smartphones vendidos: ");
    scanf("%d", &celulares);

    printf("Digite o numero de tablets vendidos: ");
    scanf("%d", &celulares);

    total = (celulares * 1000.0) + (tablets * 1500.0);

    printf("Total arrecadado: R$ %.2f\n", total);

    return 0;
}