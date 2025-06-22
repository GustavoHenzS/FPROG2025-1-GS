#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int vetor[6];
    int Dado;

    printf("Digite o número de lançamentos do dado: ");
    scanf("%d", &Dado);

    srand(time(NULL));
    
    for (int i = 0; i < Dado; i++) {
        int n_sorteado = (rand() % 5); 
        vetor[n_sorteado]++;
    }

    for (int j = 0; j < 6; j++) {
        double porcentagem = (vetor[j] * 100.0) / Dado;
        printf("Apareceu face %d: %d vezes (%.2f%%)\n", j + 1, vetor[j], porcentagem);
    }
    
    return 0;
}