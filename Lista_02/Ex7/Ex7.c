#include <stdio.h>

int main() {
    int quant_Pas;
    float racao;

    printf("Digite o numero de passaros: ");
    scanf("%d", &quant_Pas);

    racao = quant_Pas * 30.0;

    printf("Quantidade total de ração necessária por dia: %.2f gramas\n", racao);

    return 0;
}
