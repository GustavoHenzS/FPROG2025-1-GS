#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int valores[5];
    int menor, maior;
    float soma = 0;

    srand(time(NULL));

    printf("Sorteio: ");
    for (int i = 0; i < 5; i++) {
        valores[i] = rand() % 101; 
        printf("%d ", valores[i]);

        soma += valores[i];

        if (i != 0) {
            if (valores[i] < menor) {
                menor = valores[i];
            }
            if (valores[i] > maior) {
                maior = valores[i];
            }
        } else {
            menor = valores[i];
            maior = valores[i];
        } 
    }

    float media = soma / 5.0;

    printf("\nMenor valor: %d\n", menor);
    printf("Maior valor: %d\n", maior);
    printf("Media dos valores: %.2f\n", media);
    
    return 0;
}