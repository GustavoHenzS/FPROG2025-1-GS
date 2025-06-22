#include <stdio.h>

int main() {
    float peso, valor_total;
    float preco_quilo = 40.0;

    printf("Digite o peso do prato em quilos: ");
    scanf("%f", &peso);

    valor_total = peso * preco_quilo;

    printf("O valor a pagar é: R$ %.2f\n", valor_total);

    return 0;
}
