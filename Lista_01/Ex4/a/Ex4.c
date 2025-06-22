#include <stdio.h>

int main() {
    float preco_original, preco_final;

    // Entrada
    printf("Digite o preco original: R$ ");
    scanf("%f", &preco_original);

    // Processamento
    preco_final = preco_original + (preco_original * 0.10) - 5.0;

    // Saída
    printf("Preco final com imposto e desconto: R$ %.2f\n", preco_final);

    return 0;
}