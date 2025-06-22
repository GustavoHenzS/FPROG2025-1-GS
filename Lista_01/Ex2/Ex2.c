#include <stdio.h>

int main() {
    int nascimento, atual = 2025, idade;

    // Entrada
    printf("Digite o ano de nascimento: ");
    scanf("%d", &nascimento);

    // Processamento
    idade = atual - nascimento;

    // Saída
    printf("Idade: %d anos\n", idade);

    return 0;
}