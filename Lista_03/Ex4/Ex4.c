#include <stdio.h>

int main() {
    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (num % 3 == 0) {
        printf("%d é divisível por 3.\n", num);
    } else {
        printf("%d não é divisível por 3.\n", num);
    }

    return 0;
}