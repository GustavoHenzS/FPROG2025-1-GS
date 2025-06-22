#include <stdio.h>

int main() {
    float compra, venda;

    printf("Digite o valor de compra do produto: R$ ");
    scanf("%f", &compra);

    if (compra < 20.0) {
        venda = compra * 1.45;
    } else if (compra <= 50.0) {
        venda = compra * 1.35;
    } else {
        venda = compra * 1.25;
    }

    printf("Valor de venda do produto: R$ %.2f\n", venda);

    return 0;
}
