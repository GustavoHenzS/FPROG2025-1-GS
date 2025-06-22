#include <stdio.h>

int main() {
    int numero, i;
    char resposta;

    do {
        printf("Entre com um número (1 a 9): ");
        scanf("%d", &numero);

        if (numero < 1 || numero > 9) {
            printf("Número inválido! Por favor, entre com um número entre 1 e 9.\n");
            continue; 
        }

        for (i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", numero, i, numero * i);
        }

        printf("Outra vez (s/n)? ");
        scanf(" %c", &resposta); 

    } while (resposta == 's' || resposta == 'S');

    printf("Programa encerrado.\n");
    return 0;
}