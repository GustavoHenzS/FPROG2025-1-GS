#include <stdio.h>

int main() {
    int num, resultado;
    printf("Digite um número: ");
    scanf("%d", &num);

    if (num >= 0) {
        resultado = num * 2;
        printf("Dobro de %d é %d\n", num, resultado);
    } else {
        resultado = num * 3;
        printf("Triplo de %d é %d\n", num, resultado);
    }

    return 0;
}