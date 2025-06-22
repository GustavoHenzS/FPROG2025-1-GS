#include <stdio.h>

int main() {
    float cotacao, dolares, total_reais;

    printf("Digite a cotação do dólar: ");
    scanf("%f", &cotacao);

    printf("Digite a quantidade de dólares que deseja comprar: ");
    scanf("%f", &dolares);

    total_reais = cotacao * dolares;

    printf("Você precisará pagar R$ %.2f\n", total_reais);
    
    return 0;
}