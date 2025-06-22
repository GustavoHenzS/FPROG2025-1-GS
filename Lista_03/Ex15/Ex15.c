#include <stdio.h>

int main() {
    float preco, total;
    int opcao;

    printf("Digite o preço do produto: R$ ");
    scanf("%f", &preco);

    do {
        printf("1 - À vista em dinheiro (15%% de desconto)\n");
        printf("2 - À vista no cartão de crédito (10%% de desconto)\n");
        printf("3 - Em duas vezes (sem juros)\n");
        printf("4 - Em três vezes (com 10%% de juros)\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Encerrando program...\n");
            break;
        }

        if (opcao == 1) {
            total = preco * 0.85;
            printf("Total a pagar com 15%% de desconto: R$ %.2f\n", total); 
        } else if (opcao == 2) {
            total = preco * 0.90;
            printf("Total a pagar com 10%% de desconto: R$ %.2f\n", total);
        } else if (opcao == 3) {
            total = preco;
            printf("2x de R$ %.2f (sem juros)\n", total / 2);
            printf("Total a pagar: R$ %.2f\n", total);
        } else if (opcao == 4) {
            total = preco * 1.10;
            printf("3x de R$ %.2f (com juros de 10%%)\n", total / 3);
            printf("Total a pagar: R$ %.2f\n", total);
        } else {
            printf("Opção Invalida!");
        }
 
    } while (opcao != 0);
    

    return 0;
}