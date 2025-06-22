#include <stdio.h>

int main() {
    int num_dependentes, idade;
    float total = 300.0;

    printf("Quantos dependentes o conveniado possui? ");
    scanf("%d", &num_dependentes);

    for (int i = 1; i <= num_dependentes; i++) {
        printf("Digite a idade do dependente %d: ", i);
        scanf("%d", &idade);

        if (idade < 10) {
            total += 100.0;
        } else if (idade <= 30) {
            total += 220.0;
        } else if (idade <= 60) {
            total += 395.0;
        } else {
            total += 480.0;
        }
    }

    printf("Valor total a ser pago pelo plano de saúde: R$ %.2f\n", total);

    return 0;
}
