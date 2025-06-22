#include <stdio.h>

int main() {
    float litros, preco_litro, total;

    // Entrada
    printf("Digite a quantidade de litros abastecidos: ");
    scanf("%f", &litros);
    printf("Digite o preco por litro: R$");
    scanf("%f", &preco_litro);

    // Processamento
    total = litros * preco_litro;

    // Saída
    printf("Total a pagar: R$ %.2f\n", total);

    return 0;
}