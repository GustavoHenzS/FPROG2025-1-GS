#include <stdio.h>

int main() {
    float precoLitro, valorDisponivel, litros;

    printf("Digite o preco do litro da gasolina: R$ ");
    scanf("%f", &precoLitro);

    printf("Digite o valor disponivel para abastecer: R$ ");
    scanf("%f", &valorDisponivel);

    litros = valorDisponivel / precoLitro;

    printf("Voce conseguiu abastecer %.2f litros.\n", litros);

    return 0;
}