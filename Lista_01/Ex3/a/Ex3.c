#include <stdio.h>

int main() {
    float salario_base, percentual_bonus, salario_final;

    // Entrada
    printf("Digite o salario base: R$ ");
    scanf("%f", &salario_base);
    printf("Digite o percentual de bonus (em %%): ");
    scanf("%f", &percentual_bonus);

    // Processamento
    salario_final = salario_base + (salario_base * (percentual_bonus / 100));

    // Saída
    printf("Salario final com bonus: R$ %.2f\n", salario_final);

    return 0;
}