#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    for (int i = 0; i < 5; i++) {
        printf("CALCULADORA SIMPLES\n");
        printf("1. Somar\n");
        printf("2. Subtrair\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 5) {
            printf("Encerrando o programa.\n");
            break;
        }

        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);

        if (opcao == 1) {
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
        } else if (opcao == 2) {
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
        } else if (opcao == 3) {
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
        } else if (opcao == 4) {
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: Divisao por zero nao e permitida!\n");
            }
        } else {

            break;
        }
    }

    return 0;
}