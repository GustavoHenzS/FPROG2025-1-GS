#include <stdio.h>

int main() {
    int camisetas, calcas, cintos;
    float total, desconto, valorFinal;

    printf("Digite o numero de camisetas: ");
    scanf("%d", &camisetas);

    printf("Digite o numero de calcas: ");
    scanf("%d", &calcas);

    printf("Digite o numero de cintos: ");
    scanf("%d", &cintos);

    total = (camisetas * 25.0) + (calcas * 100.0) + (cintos * 40.0);
    desconto = total * 0.10;
    valorFinal = total - desconto;

    printf("Desconto: R$ %.2f\n", desconto);
    printf("Valor final da compra: R$ %.2f\n", valorFinal);

    return 0;
}