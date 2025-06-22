#include <stdio.h>

int main() {
    float compra, desconto;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &compra);

    desconto = compra * 0.85;

    printf("Valor da compra com 15%% de desconto: R$ %.2f\n", desconto);

    return 0;
}