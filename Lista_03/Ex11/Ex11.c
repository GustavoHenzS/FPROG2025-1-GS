#include <stdio.h>

int main() {
    int valor, nota;
    printf("Informe o valor: R$ ");
    scanf("%d", &valor);

    int notas[6] = {100, 50, 20, 10, 5, 1};
    for (int i = 0; i < 6; i++) {
        nota = valor / notas[i];
        if (nota > 0) {
            printf("%d nota(s) de R$ %d.\n", nota, notas[i]);
            valor %= notas[i];
        }
    }

    return 0;
}
