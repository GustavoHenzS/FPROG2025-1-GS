#include <stdio.h>

int main() {
    float real_euro, real_dolar;
    float valor, convertido;
    int opcao;

    printf("Informe a cotacao do Euro em relacao ao Real: ");
    scanf("%f", &real_euro);

    printf("Informe a cotacao do Dolar em relacao ao Real: ");
    scanf("%f", &real_dolar);

    do {
        printf("1) Real para Euro\n");
        printf("2) Real para Dolar\n");
        printf("3) Euro para Dolar\n");
        printf("4) Euro para Real\n");
        printf("5) Dolar para Euro\n");
        printf("6) Dolar para Real\n");
        printf("0) Sair\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Encerrando programa...\n");
            break;
        }

        printf("Digite o valor a ser convertido: ");
        scanf("%f", &valor);

        if (opcao == 1) {
            convertido = valor / real_euro;
            printf("R$ %.2f = %.2f Euros\n", valor, convertido);
        } 
        else if (opcao == 2) {
            convertido = valor / real_dolar;
            printf("R$ %.2f = %.2f Dolares\n", valor, convertido);
        } 
        else if (opcao == 3) {
            convertido = (valor * real_euro) / real_dolar;
            printf("%.2f Euros = %.2f Dolares\n", valor, convertido);
        } 
        else if (opcao == 4) {
            convertido = valor * real_euro;
            printf("%.2f Euros = R$ %.2f\n", valor, convertido);
        } 
        else if (opcao == 5) {
            convertido = (valor * real_dolar) / real_euro;
            printf("%.2f Dolares = %.2f Euros\n", valor, convertido);
        } 
        else if (opcao == 6) {
            convertido = valor * real_dolar;
            printf("%.2f Dolares = R$ %.2f\n", valor, convertido);
        } 
        else {
            printf("Opcao invalida.\n");
        }

    } while (opcao != 0);

    return 0;
}