#include <stdio.h>

int main() {
    float salario, desconto;

    printf("Digite o salario do funcionario: R$ ");
    scanf("%f", &salario);

    desconto = salario * 0.11;

    if (desconto > 318.20) {
        desconto = 318.20;
    }

    printf("Desconto previdenciario: R$ %.2f\n", desconto);

    return 0;
}
