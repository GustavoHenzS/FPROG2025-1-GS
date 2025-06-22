#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i;

    for (i = 0; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    for (i = 20; i <= 50; i++) {
        if(i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n\n");

    for (i = 70; i >= 25; i--) {
        printf("%d ", i);
    }
    printf("\n\n");
    
    for (i = 95; i >= 25; i--) {
        if(i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n\n");
    
    int num, soma = 0;
    for (i = 0; i < 15; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &num);
        soma += num;
    }
    printf("Soma: %d\n", soma);
    printf("Média: %.2f\n\n", soma / 15.0);

    int pares = 0, impares = 0;
    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &num);
        if(num % 2 == 0) pares++;
        else impares++;
    }
    printf("Quantidade de pares: %d\n", pares);
    printf("Quantidade de ímpares: %d\n\n", impares);

    int sorteado, positivos = 0, negativos = 0;
    srand(time(NULL));
    for(i = 0; i < 20; i++) {
        sorteado = (rand() % 21) - 10; 
        printf("Número %d: %d - ", i + 1, sorteado);
        if(sorteado > 0) {
            printf("POSITIVO\n");
            positivos++;
        } else if(sorteado < 0) {
            printf("NEGATIVO\n");
            negativos++;
        } else {
            printf("NULO\n");
        }
    }
    printf("Quantidade de positivos: %d\n", positivos);
    printf("Quantidade de negativos: %d\n\n", negativos);

    int n, total = 0;
    printf("h. Digite a quantidade de números que deseja somar: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &num);
        total += num;
    }
    printf("Soma total dos %d números: %d\n", n, total);

    return 0;
}