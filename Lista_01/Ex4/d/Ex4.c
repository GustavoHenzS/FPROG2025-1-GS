#include <stdio.h>

int main() {
    float x, a = 2.0, b = 3.0, c = 1.0, y;

    // Entrada
    printf("Digite o valor de x: ");
    scanf("%f", &x);

    // Processamento
    y = a * x * x + b * x + c;

    // Saída
    printf("Resultado do polinomio: y = %.2f\n", y);

    return 0;
}